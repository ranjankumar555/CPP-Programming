// stack implementation using linkedlist;

#include<iostream>
using namespace std;
class stackNode{
    public:
    int data;
    stackNode* next;
    
    //constructor
    stackNode(int value){
        data=value;
        next=nullptr;
    }
};
class stack{
    public:
    stackNode* top;
    int size=0;
    
    //constructor
    stack(){
        top=nullptr;
    }
    // isEmpty()
    bool isEmpty(){
        return top == nullptr;
    }
    
    // push()
    void push(int value){
        stackNode* newNode = new stackNode(value);
        if(isEmpty()){
            //cout<<"stack is empty"<<endl;
            top = newNode;
        }
        else{
            
            newNode->next = top;
            top = newNode;
        }
        size++;
    }
    
    // pop()
    void pop(){
        if(isEmpty()){
            cout<<"stack is now empty"<<endl;
            return;
        }
        else{
            stackNode* temp = top;
            top=top->next;
            delete temp;
            size--;
        }
    }
    
    // size()
    int length(){
        if(isEmpty()){
            return 0;
        }
        return size;
        
        
        // another approach
//      int length() {
//      int count = 0;
//      stackNode* current = top;
//      while (current != nullptr) {
//         count++;
//         current = current->next;
//      }
//      return count;
//  }

    }
    
    //top
    int topValue(){
        if(isEmpty()){
            return -1;
        }
        int item= top->data;
        return item;
    }
};
int main(){
    stack obj;
    obj.push(1);
    obj.push(2);
    obj.push(3);
    cout<<"top value: "<<obj.topValue()<<endl;
    cout<<"length: "<<obj.length()<<endl;
    cout<<"isEmpty: "<<obj.isEmpty()<<endl;
    obj.pop();
    cout<<"length: "<<obj.length()<<endl;
    cout<<"top value: "<<obj.topValue()<<endl;
    return 0;
    
}
