#include<iostream>
#include <cstddef>

using namespace std;


class MinStack {
public:

    MinStack *head, *next, *temp;
    int item;
    MinStack *min;
    void push(int x) {
        if(head==0){
            head = new MinStack();
            head->item = x;
            head->next = 0;
        }else{
            temp = new MinStack();
            temp->item = x;
            temp->next = head;
            head = temp;
            delete temp;
        }
    }

    void pop() {
        if(head == 0)
            head = 0;
        if(head->next==0){
            head = 0;
        }
        temp = head;
        head = head->next;
        delete temp;
    }

    int top() {
        if(head!=0)
            return head->item;
        else
            return 0;
    }

    int getMin() {

    }
};

int main(){

}
