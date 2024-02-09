#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Node
{
    public:
        int data;
        Node *next;

        //Constructor to initalise node field.
        Node(){
            data=0;
            next=NULL;
        }
};

class linkedList{
    public:
    Node* head;
    linkedList(){
        head = new Node();
        head->next = NULL;
    }

    //Insert node at begining
    void insertAtbegining(int data){
        Node* newNode = new Node();
        newNode->data = data;
        newNode->next = head->next;
        head->next = newNode;
    }
    
    //print the list
    void printList(){
        Node* temp = head->next;

        cout<<"The data in the linkedList are"<<endl;
        while (temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp = temp->next; 
        }
        cout<<endl;
        
    }


};
int main()
{
    linkedList node;

    //Inserting Node at begining of the linkedList.
    node.insertAtbegining(1);
    node.insertAtbegining(2);
    node.insertAtbegining(3);
    node.insertAtbegining(4);
    node.insertAtbegining(5);
    node.insertAtbegining(6);

    //print the data of the linkedList
    node.printList();

}