/******************************************************************************
stack implementation using array
*******************************************************************************/

#include <iostream>
using namespace std;
#define MAX_SIZE 1000
class stack{
    public:
    int top;
    int arr[MAX_SIZE];
    stack(){
        top=-1;
    }
    

bool push(int item){
    if(top>=MAX_SIZE){
        cout<<"Stack Overflow !!!"<<endl;
        return false;
    }
    else{
       arr[++top]=item;
       return true;

    }
}
void pop(){
    if(top<0){
        cout<<"Stack Underflow !!!"<<endl;
    }
    else{
        int temp = arr[top--];
        cout<<temp<<" popped out from stack"<<endl;
    }
}
int peak(){
    int temp = arr[top];
    return temp;
}
bool isEmpty(){
    return (top<0);
}
void printStack(){
    cout<<"Element Present in the stack: ";
    for(int i=top; i>=0; i--){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int size(){
    return top+1;
}
};
int main()
{   
    stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(9);
    cout<<s.isEmpty()<<endl;
    s.pop();
    s.pop();
    s.printStack();
    cout<<"The top element in stack: "<<s.peak()<<endl;
    cout<<"The size Of Stack is: "<<s.size()<<endl;
    return 0;
}
