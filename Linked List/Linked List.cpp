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