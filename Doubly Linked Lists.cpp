#include <iostream>
using namespace std;

class Node {
public:
    int value;
    Node* next;
    Node* pre;

    Node(int value) {
        this->value = value;
        this->next = NULL;
        this->pre = NULL;
    }
};


class DoublyLinkedList {
private:
    Node* head;
    Node* tail;
    int length;
public:
    DoublyLinkedList(int value) {
        Node* newNode = new Node(value);
        head = newNode;
        tail = newNode;
        length = 1;
    }

    void display() {
        Node* tmp = head;
        while (tmp)
        {
            cout << tmp->value << endl;
            tmp = tmp->next;
        }

    }
    void append(int value) {
        Node* newNode = new Node(value);
        if (length == 0) {
            head = newNode;
            tail = newNode;
        }
        else {
            tail->next = newNode;
            newNode->pre = tail;
            tail = newNode;
        }
        length++;
    }
    void deleteLast() {
        if (length == 0) {
            return;
        }
        Node* tmp = tail;
        if (length == 1) {
            tail = NULL;
            head = NULL;
        }
        else {
            tail = tail->pre;
            tail->next = NULL;
        }
        delete tmp;
        length--;
    }

    void prepend(int value) {
        Node* newNode = new Node(value);
        if (length == 0) {
            head = newNode;
            tail = newNode;
        }
        else {
            newNode->next = head;
            head->pre = newNode;
            head = newNode;
        }
        length++;
    }

    void deleteFirst() {
        if (length == 0) {
            return;
        }
        Node* tmp = head;
        if (length == 1) {
            head = NULL;
            tail = NULL;
        }
        else {
            head = head->next;
            head->pre = NULL;
        }
        delete tmp;
        length--;
    }
};


int main()
{
    DoublyLinkedList* myl1 = new DoublyLinkedList(7);
    myl1->append(2);
    myl1->deleteLast();
    myl1->display();
}