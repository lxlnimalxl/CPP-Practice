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
    bool insert(int value){
        Node* newNode = new Node(value);
        if(root == nullptr){
            root = newNode;
            return true;
        }
        Node* tmp = root;
        while(true){
            if(newNode->value == tmp->value){
                return false;
            }
            if(newNode->value < tmp->value){
                if(tmp->left == nullptr){
                    tmp->left = newNode;
                    return true;
                }
                tmp = tmp->left;
            }else{
                if(tmp->right == nullptr){
                    tmp->right = newNode;
                    return true;
                }
                tmp = tmp->right;
            }
        }
    }


    bool contains(int value){
        Node* tmp = root;
        while(tmp){
            if(value < tmp->value){
                tmp = tmp->left
            }else if(value > tmp->value){
                tmp = tmp->right;
            }else{
                return true;
            }
        }
        return false;
    }
};


main()
{
    
    return 0;
}