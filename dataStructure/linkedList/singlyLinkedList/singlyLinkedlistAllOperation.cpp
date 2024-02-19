/* ****************************************************** 
    singly linked list implementation
        1. traversal
        2. insertion -> at begining, at middle, at end
        3. deletion -> at begining, at middle, at end 
****************************************************** */
#include<iostream>
using namespace std;

// create a node of linked list
class Node{
    public:
    int data;
    Node* next;
    
    //constructor to initialise the attribute
    Node(int item){
        data=item;
        next=nullptr;
    }
};
class singlyLinkedlist{
    public:
    Node* head;
    singlyLinkedlist(){
        head=nullptr;
    }
    /****************** insertion operation ***********************/
    //1. method to insert at begining of the singlyLinkedlist
    void insertAtbegining(int item){
        // create a newNode 
        Node* newNode = new Node(item);
        
        // check if list is empty
        if(head==nullptr){
            head=newNode;
        }
        // if list is already exist;
        else{
            newNode->next = head;
            head = newNode;
        }
    }
    
    // 2. method to insert Node at end;
    // two ways -> a. treaverse to end- O(N); b. maintain tail pointer- O(1)TC;
    void insertAtEnd(int item){
        // create a new Node
        Node* newNode = new Node(item);
        
        //check if list is empty
        if(head==nullptr){
            head=newNode;
        }
        
        //if list is already present;
        else{
            Node* temp=head;
            
            //traverse to the end of the list;
            while(temp->next!=nullptr){
                temp=temp->next;
            }
            //newNode->next = nullptr;
            temp->next = newNode;
        }
    }
    
    // insert node at middle after given position -> 1 based indexing;
    void insertAtMiddle(int item, int position){
        //create a newNode
        Node* newNode = new Node(item);
        if(head==nullptr){
            head=newNode;
        }
        // if list is already exist
        else {
        Node* temp = head;
        int count = 1; // Initialize a counter
        // Traverse till the middle or till end if position is beyond list length
        while (temp->next != nullptr && count < position) {
            temp = temp->next;
            count++;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
        
    }
    /***** deletion operation -> covered all corner cases ********/ 
    // 1. deletion at begining
    void deleteAtBegining() {
    if (head == nullptr) {
        // List is empty, nothing to delete
        return;
    }
    Node* temp = head;
    head = head->next; // Update head to point to the next node
    delete temp; // Delete the previous head node
}

    
    // 2. deletion at end
    void deleteAtEnd() {
    if (head == nullptr) {
        // List is empty, nothing to delete
        return;
    } else if (head->next == nullptr) {
        // Only one node in the list
        delete head;
        head = nullptr;
    } else {
        Node* temp = head;
        Node* prev = nullptr;
        // Traverse to the second last node
        while (temp->next != nullptr) {
            prev = temp;
            temp = temp->next;
        }
        // Now temp is the last node, prev is the second last node
        prev->next = nullptr;
        delete temp;
    }
}

    // 3. deletion at middle
    void deleteAtMiddle(int position) {
    if (head == nullptr) {
        // List is empty, nothing to delete
        return;
    } else if (position == 1) {
        // Deleting the first node
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    } else {
        Node* temp = head;
        int count = 1;
        // Traverse to the node just before the one to be deleted
        while (temp != nullptr && count < position - 1) {
            temp = temp->next;
            count++;
        }
        if (temp == nullptr || temp->next == nullptr) {
            // Invalid position or position is beyond the list length
            return;
        }
        // Now temp is pointing to the node just before the one to be deleted
        Node* toDelete = temp->next;
        temp->next = temp->next->next; // Adjust pointers to skip the node to be deleted
        delete toDelete; // Delete the node
    }
}

    
    //print the list
    void printList(){
        Node* temp = head;
        
        while(temp!=nullptr){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    
};
int main(){
    class singlyLinkedlist obj;
    
    //insert at begining
    obj.insertAtbegining(1);
    obj.insertAtbegining(2);
    obj.insertAtbegining(3);
    obj.insertAtbegining(4);
    obj.insertAtbegining(5);
    
    // insert at end
    obj.insertAtEnd(2);
    obj.insertAtEnd(3);
    obj.insertAtEnd(4);
    obj.insertAtEnd(5);
    
    //insert At Middle
    obj.insertAtMiddle(55,1);
    obj.insertAtMiddle(65,10);
    
    //delete At Begining
    obj.deleteAtBegining();
    obj.deleteAtBegining();
    
    //delete At End
    obj.deleteAtEnd();
    
    //delete At Middle
    obj.deleteAtMiddle(4);
    
    //call the printList method to print the list; 
    obj.printList();
    return 0;
}