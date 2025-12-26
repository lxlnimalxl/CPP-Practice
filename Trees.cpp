#include<iostream>
using namespace std;


class Node{
    public:
    int value;
    Node* left;
    Node* right;
    Node(int value){
        this->value = value;
        left = NULL;
        right = NULL;
    }
};


class Btrees{
private:
    Node* root;
public:
    Btrees(){
        root = nullptr;
    }
};


main()
{
    
    return 0;
}