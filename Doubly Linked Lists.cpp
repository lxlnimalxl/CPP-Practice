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
};


int main()
{
    DoublyLinkedList* myl1 = new DoublyLinkedList(7);
    myl1->display();
}