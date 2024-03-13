#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int value) {
        next = nullptr;
        data = value;
    }
};

class queue {
public:
    Node* head, *tail;
    int size=0;

    queue() {
        head = nullptr;
        tail = nullptr;
    }

    // Destructor
    ~queue() {
        cout << "Freeing up the memory after finishing work" << endl;
        Node* temp = head;
        Node* currentNode;
        while (temp != nullptr) {
            currentNode = temp;
            temp = temp->next;
            delete currentNode;
        }
    }

    // Methods
    bool isEmpty();
    int Size();
    void push(int);
    int pop();
    int atRear();
    int atFront();
    void print();
};

bool queue::isEmpty() {
    return head == nullptr;
}

void queue::push(int value) {
    Node* newNode = new Node(value);
    if (newNode == nullptr) {
        cout << "Memory allocation failed!" << endl;
        return;
    }

    if (isEmpty()) {
        head = tail = newNode;
    }
    else {
        tail->next = newNode;
        tail = newNode;
    }
    size++;
}

int queue::pop() {
    if (isEmpty()) {
        throw runtime_error("Queue is empty!");
    }
    int x = head->data;
    Node* temp = head;
    head = head->next;
    delete temp;
    size--;

    if (isEmpty()) // Update tail if queue becomes empty
        tail = nullptr;

    return x;
}

int queue::Size() {
    return size;
}

int queue::atFront() {
    if (isEmpty()) {
        throw runtime_error("Queue is empty!");
    }
    return head->data;
}

int queue::atRear() {
    if (isEmpty()) {
        throw runtime_error("Queue is empty!");
    }
    return tail->data;
}

void queue::print() {
    Node* temp = head;
    cout << "Queue elements: ";
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    queue obj;

    obj.push(4);
    obj.push(9);
    obj.push(2);
    obj.push(6);
    obj.push(7);

    obj.print();

    cout << "Front = " << obj.atFront() << endl;
    cout << "Rear = " << obj.atRear() << endl;

    cout << "Popped " << obj.pop() << endl;
    cout << "Popped " << obj.pop() << endl;
    cout << "Popped " << obj.pop() << endl;
    cout << "Popped " << obj.pop() << endl;
    cout << "Popped " << obj.pop() << endl;
    cout << "Popped " << obj.pop() << endl;
    cout << "Popped " << obj.pop() << endl;
    cout << "Popped " << obj.pop() << endl;

    cout << "Size = " << obj.Size() << endl;

    return 0;
}
