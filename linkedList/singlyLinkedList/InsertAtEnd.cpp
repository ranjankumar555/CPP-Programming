#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(){
        data=0;
        next=NULL;
    }

};

class linkedList{
    public:
    Node* head;
    linkedList(){
        head=new Node();
        head->next =NULL;
    }

    //insert data at end of the list.
    void insertAtEnd(int data){
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;

    Node* temp = head->next;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}

    //print the data of the the list
    void printList(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main(){
    linkedList nodeObj;
    nodeObj.insertAtEnd(1); 
    nodeObj.insertAtEnd(2);
    nodeObj.insertAtEnd(3);
    nodeObj.insertAtEnd(4);
    nodeObj.insertAtEnd(5);
    nodeObj.insertAtEnd(6);

    nodeObj.printList();

    return 0;
}