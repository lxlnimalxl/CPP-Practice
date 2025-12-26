#include <iostream>
using namespace std;



class Node {
public:
    int value;
    Node* next;


    Node(int value) {
        this->value = value;
        next = nullptr;
    }
};



class Queue {
private:
    int length;
    Node* first;
    Node* last;
public:

    Queue(int value) {
        Node* newNode = new Node(value);
        first = newNode;
        last = newNode;
        length = 1;
    }

    void EnQueue(int value) {
        Node* newNode = new Node(value);
        if (length == 0) {
            first = newNode;
            last = newNode;
        }
        else {
            last->next = newNode;
            last = newNode;
        }
        length++;
    }

    int DeQueue() {
        if (length == 0) {
            return -1;
        }
        Node* tmp = first;
        int deQueued = first->value;
        if (length == 1) {
            first = nullptr;
            last = nullptr;
        }
        else {
            first = first->next;
        }
        delete tmp;
        length--;
        return deQueued;
    }


    void display() {
        Node* tmp = first;
        while (tmp)
        {
            cout << tmp->value << endl;
            tmp = tmp->next;
        }
    }

};













int main()
{
    
}