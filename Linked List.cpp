#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data; // (int d) ----> data = d; another equal code 
        next = NULL;
    }

};


class LinkedList {
private:
    Node* head;
    Node* tail;
    int length;

public:
    LinkedList(int data) {
        Node* NewNode = new Node(data);
        head = NewNode;
        tail = NewNode;
        length = 1;
    }
    
    void append(int data) {
        Node* newNode = new Node(data);
        if (length == 0) {
            head = newNode;
            tail = newNode;
        }
        else {
            tail->next = newNode;
            tail = newNode;
        }
        length++;
    }

    void deleteLast() {
        if (length == 0) return;
        Node* temp = head;
        
        if (length == 0) {
            head = NULL;
            tail = NULL;
        }
        else {
            Node* pre = head;
            while (temp->next) {
                pre = temp;
                temp = temp->next;
            }
            tail = pre;
            tail->next = NULL;
        }

        delete temp;

        length--;

    }

        
    
    void prepend(int data) {
        Node* newNode = new Node(data);
        if (length == 0) {
            head = newNode;
            tail = newNode;
        }
        else {
            newNode->next = head;
            head = newNode;
        }
        length++;
    }



    void deletefirst() {
        if (length == 0) return;
        Node* tmp = head;
        if (length == 1) {
            head = NULL;
            tail = NULL;
        }
        else {
            head = head->next;
        }
        delete tmp;
        length--;
    }



    Node* get(int index) {
        if (index < 0 || index >= length) {
            return NULL;
        }
        Node* tmp = head;
        for (int i = 0; i < index; ++i) {
            tmp = tmp->next;
        }
        return tmp;
    }
    

    bool set(int index, int data) {
        Node* tmp = get(index);
        if (tmp) {
            tmp->data = data;
            return true;
        }
        return false;
    }


    bool insert(int index, int data) {
        if (index < 0 || index > length) {
            return false;
        }
        if (index == 0) {
            prepend(data);
            return true;
        }
        if (index == length) {
            append(data);
            return true;
        }
        Node* newNode = new Node(data);
        Node* tmp = get(index - 1);
        newNode->next = tmp->next;
        tmp->next = newNode;
        length++;
        return true;
    }



    void deleteNode(int index) {
        if (index < 0 || index >= length) {
            return;
        }
        if (index == 0) {
            return deletefirst();
        }
        if (index == length - 1) {
            return deleteLast();
        }
        Node* pre = get(index - 1);
        Node* tmp = pre->next;
        pre->next = tmp->next;
        delete tmp;
        length--;
    }

    void reverse() {
        Node* tmp = head;
        head = tail;
        tail = tmp;
        Node* after = tmp->next;
        Node* before = NULL;
        for (int i = 0; i < length; i++) {
            after = tmp->next;
            tmp->next = before;
            before = tmp;
            tmp = after;
        }
    }
    
    
    
    void display() {
        Node* ptr = head;
        while (ptr != NULL)
        {
            cout << ptr->data << endl;
            ptr = ptr->next;
        }
        cout << endl;
    }


    ~LinkedList() {
        Node* temp = head;
        while (head) {
            head = head->next;
            delete temp;
            temp = head;
        }
    }
};






int main()
{
    LinkedList l1(4);
    l1.display();
}