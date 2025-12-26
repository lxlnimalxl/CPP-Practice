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



class Stack {
private:
    int height;
    Node* top;

public:
    Stack(int value) {
        Node* newNode = new Node(value);
        top = newNode;
        height = 1;
    }


    void push(int value) {
        Node* newNode = new Node(value);
        newNode->next = top;
        top = newNode;
        height++;
    }


    void printStack() {
        Node* tmp = top;
        while (tmp)
        {
            cout << tmp->value << endl;
            tmp = tmp->next;
        }
    }


    int pop() {
        if (height == 0) {
            return -1;
        }
        Node* tmp = top;
        int popedvalue = top->value;
        top = top->next;
        delete tmp;
        height--;
    }


};





int main()
{
    
}
