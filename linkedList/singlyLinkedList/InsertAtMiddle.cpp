#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node() {
        data = 0;
        next = NULL;
    }
};

class linkedList {
public:
    Node* head;
    linkedList() {
        head = new Node();
        head->next = NULL;
    }

    void insertAtMiddle(int data, int position) {
        if (position < 1) {
            cout << "Invalid position" << endl;
            return;
        }

        Node* newNode = new Node();
        newNode->data = data;
        Node* temp = head;
        int i = 1;

        while (i < position && temp->next != NULL) {
            temp = temp->next;
            i++;
        }

        if (i < position) {
            cout << "Position out of bounds" << endl;
            return;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }

    void printList() {
        Node* start = head->next;
        while (start != NULL) {
            cout << start->data << " ";
            start = start->next;
        }
        cout << endl;
    }
};

int main() {
    linkedList nodeObj;

    // Inserting values at different positions
    nodeObj.insertAtMiddle(2, 1);
    nodeObj.insertAtMiddle(4, 2);
    nodeObj.insertAtMiddle(6, 3);

    cout << "The data in the list are: ";
    nodeObj.printList();

    return 0;
}
