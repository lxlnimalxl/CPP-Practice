    #include<iostream>
    #include<string>
    #include<math.h>
    using namespace std;

    class Event {
    public:
        int id ;
        int timestamp;
        string category ;
        string description ;
    };


    class Node {
    public:
        Event data;
        Node* left;
        Node* right;
        Node(Event data){
            this->data = data;
            left = nullptr;
            right = nullptr;
        }
    };


    class BST{
    public:
        Node* root;
        BST() {
            root = nullptr;
        }
        
        void insert(Event data) {
        Node* newNode = new Node(data);
        if (root == nullptr) {
            root = newNode;
            return;
        }
        Node* tmp = root;
        while (true) {
            
            if (newNode->data.timestamp == tmp->data.timestamp) {
                cout << "Duplicate timestamp! Cannot insert.\n";
                return; 
            }
            
            if (newNode->data.timestamp < tmp->data.timestamp) {
                if (tmp->left == nullptr) {
                    tmp->left = newNode;
                    break;
                }
                tmp = tmp->left;
            }
            
            else {
                if (tmp->right == nullptr) {
                    tmp->right = newNode;
                    break;
                }
                tmp = tmp->right;
            }
        }
    }


        void search(int time){
            Node* tmp = root;
            while(tmp != nullptr){
                if(tmp->data.timestamp == time){
                    cout<< "Found : " << tmp->data.timestamp << " (ID: " << tmp->data.id << ")" << endl;
                    return;
                }
                if(time < tmp->data.timestamp){
                    tmp = tmp->left;
                }else{
                    tmp = tmp->right;
                }
            }
            cout<<"Event Not Found :(" << endl;
        }


        Node* Delete(Node* node , int time){
            if(node == nullptr){
                return nullptr;
            }
            if (time < node->data.timestamp){
                node->left = Delete(node->left , time);
            }else if(time > node->data.timestamp){
                node->right = Delete(node->right , time);
            }else{
                if(node->left == nullptr){
                    Node* tmp = node->right;
                    delete node;
                    return tmp;
                }else if(node->right == nullptr){
                    Node* tmp = node->left;
                    delete node;
                    return tmp;
                }
                Node* tmp = node->right;
                while(tmp->left != nullptr){
                    tmp = tmp->left;
                }
                node->data = tmp->data;
                node->right = Delete(node->right , tmp->data.timestamp);
            }
            return node;
        }

        void inorder(Node* node){
            if(node == nullptr){
                return;
            }
            inorder(node->left);
            cout << "Time: " << node->data.timestamp << " |CAT: " << node->data.category << endl;
            inorder(node->right);
        }


        void getEventsBetween(Node* node , int  t1 , int t2){
            if(node == nullptr){
                return;
            }
            if(t1 < node->data.timestamp){
                getEventsBetween(node -> left , t1 , t2);
            }
            if(node->data.timestamp >= t1 && node->data.timestamp <= t2){
                cout<<"Event -> ID: " << node->data.id << " | Time: " << node->data.timestamp << endl;
            }
            if(t2 > node->data.timestamp){
                getEventsBetween(node->right , t1 , t2);
            }

        }


        void findClosestEvent(Node* node , int t){
            if(node == nullptr){
                cout<<"No Events" << endl;
                return;
            }

            Node* CLosessEvent = node;
            int mid = abs(node->data.timestamp -t);
            Node* tmp = node;

            while(tmp != nullptr){
                int d = abs(tmp->data.timestamp - t);
                if(d < mid){
                    mid = d;
                    CLosessEvent = tmp;
                }

                if(t < tmp->data.timestamp){
                    tmp = tmp->left;
                }else if( t >  tmp->data.timestamp){
                    tmp = tmp->right;
                }else{
                    break;
                }
            }

            cout << "Closest Event -> Time: " << CLosessEvent->data.timestamp << " ( : " << mid << ")" << endl;

        }

        void countCategories(Node* node , int t1 , int t2){
            if(node == nullptr){
                return;
            }
            if(node->data.timestamp >= t1 && node->data.timestamp <= t2){
                cout<<"Category found: " << node->data.category << endl;
            }
            if(t1 < node->data.timestamp){
                countCategories(node->left , t1 , t2);
            }
            if(t2 > node->data.timestamp){
                countCategories(node->right , t1 , t2);
            }
        }


    };




    int main() {
        BST tree;
        int n;
        Event e;
        int t1 , t2;
        
        do{
            cout << "\n--- MENU ---\n";
            cout << "1. Insert Event\n";
            cout << "2. Delete Event\n";
            cout << "3. Search by Time\n";
            cout << "4. Events in Range\n";
            cout << "5. Find Closest\n";
            cout << "6. Count Categories\n";
            cout << "7. Show All (Inorder)\n";
            cout << "0. Exit\n";
            cout << "Enter Choice: ";
            cin >> n;
            switch(n){
            case 1:
                cout << "ID: "; cin >> e.id;
                cout << "Time: "; cin >> e.timestamp;
                cout << "Category: "; cin >> e.category;
                cout << "Desc: "; cin.ignore(); getline(cin, e.description);
                tree.insert(e);
                break;
            case 2:
                cout << "Time to delete: "; cin >> t1;
                tree.root = tree.Delete(tree.root, t1);
                cout << "Deleted (if existed).\n";
                break;
            case 3:
                cout << "Time to search: "; cin >> t1;
                tree.search(t1);
                break;
            case 4:
                cout << "Start Time: "; cin >> t1;
                cout << "End Time: "; cin >> t2;
                tree.getEventsBetween(tree.root, t1, t2);
                break;
            case 5:
                cout << "Target Time: "; cin >> t1;
                tree.findClosestEvent(tree.root, t1);
                break;
            case 6:
                cout << "Start Time: "; cin >> t1;
                cout << "End Time: "; cin >> t2;
                tree.countCategories(tree.root, t1, t2);
                break;
            case 7:
                tree.inorder(tree.root);
                break;
        }
    } while (n != 0);

    return 0;
}