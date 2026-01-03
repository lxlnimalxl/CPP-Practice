#include <iostream>
#include <string>

using namespace std;


class Node{
public:
    int data;
    Node* left;
    Node* right;
    Node* parent;
    Node(int data){
        this->data = data;
        left = nullptr;
        right = nullptr;
        parent = nullptr;
    } 
};


class BST{
private:
    Node* root = nullptr;

public:


    void Insert(int data){
        if(!root){
            root = new Node(data);
        }else{
            Node* ptr = root;
            Node* pre = nullptr;
            while (ptr)
            {
                pre = ptr;
                if(ptr->data > data){
                    ptr = ptr->left;
                }else{
                    ptr = ptr->right;
                }
            }
            ptr = new Node(data);
            if(pre->data > data){
                pre = pre->left;
            }else{
                pre = pre->right;
            }
            
        }
    }


    void InsertRec(int data){
        root = InsertRec(root , data);
    }
    Node* InsertRec(Node* node , int data){
        if(!node){
            return new Node(data);
        }
        if(node->data > data){
            node->left = InsertRec(node->left , data);
        }else{
            node->right = InsertRec(node->right , data);
        }
        return node;
    }


    void BFS(){
        Queue<Node*>q;
        q.pop();
        while (!q.isEmpty())
        {
            Node* tmp = q.front();
            cout<<tmp->data <<endl;

            if(tmp->left){
                q.push(tmp->left);
            }
            if(tmp->right){
                q.push(tmp->right);
            }
        }
        
    }


    void Inorder(){
        Inorder(root);
    }

    void Inorder(Node* node){
        if(!node){
            return;
        }
        Inorder(node->left);
        cout<<node->data << " ";
        Inorder(node->right);
    }
    

    int height(Node* node){
        if(!node){
            return 0;
        }return 1 + max(height(node->left) , height(node->right));
    }

    void Mirror(){
        Mirror(root);
    }

    void Mirror(Node* node){
        if(!node){
            return;
        }
        swap(node->left , node->right);
        Mirror(node->left);
        Mirror(node->right);
    }

    void InorderMirror(){
        stack<Node*>s;
        Node* tmp(root->left);
        while (!s.Isempty())
        {
            while(tmp){
                s.push(tmp);
                tmp = tmp->left;
            }
            tmp = s.pop();
            cout<<tmp->data<<" ";
            tmp = tmp->right;
        }
        
    }


    void BST::remove(int data) {
    if (!root) return;

    // ۱. جستجوی نود و نگه داشتن پدرش
    Node* ptr = root;
    Node* parent = nullptr;

    while (ptr) {
        if (ptr->data == data) break;
        
        parent = ptr;
        if (data < ptr->data)
            ptr = ptr->left;
        else
            ptr = ptr->right;
    }

    if (!ptr) return; // نود پیدا نشد

    // ۲. مدیریت حالت دو فرزندی
    // اگر نود دو فرزند دارد، دیتای آن را با کوچکترین داده سمت راست عوض می‌کنیم
    // و سپس ptr را تغییر می‌دهیم تا اشاره‌گر به نودی باشد که باید فیزیکی حذف شود
    if (ptr->left && ptr->right) {
        // پیدا کردن جانشین (Successor) و پدرش
        Node* succ = ptr->right;
        Node* succParent = ptr;

        while (succ->left) {
            succParent = succ;
            succ = succ->left;
        }

        // کپی دیتا
        ptr->data = succ->data;

        // حالا باید succ حذف شود، پس ptr و parent را روی آن تنظیم می‌کنیم
        ptr = succ;
        parent = succParent;
    }

    // ۳. حذف فیزیکی نود (که الان حتماً ۰ یا ۱ فرزند دارد)
    Node* child;
    if (ptr->left)
        child = ptr->left;
    else
        child = ptr->right;

    // اگر نودِ حذفی ریشه است
    if (parent == nullptr) {
        root = child;
    } 
    else {
        // اتصال پدر به فرزندِ نودِ حذفی
        if (parent->left == ptr)
            parent->left = child;
        else
            parent->right = child;
    }

    delete ptr;
}


    void RightRotate(Node* x){
        Node* t = x->left;
        x->left = t->right;
        t->right = x;
        if(x->parent->data > x->data){
            x->parent->left = t;
        }else{
            x->parent->right = t;
        }
    }


};


int main() {

    
    return 0;
}