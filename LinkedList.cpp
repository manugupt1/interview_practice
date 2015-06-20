#include<iostream>

using namespace std;

struct Node{
    int data;
    Node * next;
};


void initNode(struct Node * head,int n){
    head->data = n;
    head->next = 0;
}

void display(struct Node * head){
    if(head==0){
        cout<<"List is null"<<endl;
        return;
    }
    while(head!=0){
        cout<<head->data<<'\t';
        head = head->next;
    }
    cout<<endl;
}

void addNode(struct Node *head, int d){
    if(head==0){
        initNode(head,d);
    }
    Node * newNode = new Node;
    newNode->data = d;
    newNode->next = 0;

    Node * cur = head;
    while(cur){
        if(cur->next==0){
            cur->next = newNode;
            return;
        }
        cur = cur->next;
    }
}

void insertFront(struct Node **head,int d){
    Node * newNode = new Node;
    newNode->data = d;
    newNode->next = *head;
    *head = newNode;
}

struct Node * searchNode(struct Node *head, int d){
    Node *node = head;
    while(node){
        if(node->data==d){
            return node;
        }
        node = node->next;
    }
    return 0;
};

bool deleteNode(struct Node**head, Node*ptrDel){
    Node *cur = *head;
    if(ptrDel == *head){
        *head = cur->next;
        delete ptrDel;
        return true;
    }
    while(cur){
        if(cur->next==ptrDel){
            cur->next = ptrDel->next;
            delete ptrDel;
            return true;
        }
        cur = cur->next;
    }
    return false;
}

/* reverse the list */
struct Node* reverse(struct Node** head){
    Node *parent  = *head;
    Node *me = parent->next;
    Node * child = me->next;



};

int main(){
    struct Node * tmpNode;
    struct Node *head = new Node;

    initNode(head,10);
    display(head);

    addNode(head,5);
    addNode(head,10);
    insertFront(&head,2);
    display(head);

    tmpNode = searchNode(head,45);
    cout<<tmpNode->data<<endl;


    return 0;
}
