#include <iostream>
using namespace std;
#define N 5

class queue {
public:
    int front, rear, size;
    int arr[N];

    //constructor
    queue() {
        front = rear = -1;
        size = 0;
    }

    bool IsEmpty() {
        return front == -1;
    }

    bool isFull() {
        return size == N;
    }

    void enqueue(int value) {
        if (isFull()) {
            cout << "Overflow" << endl;
            return;
        }
        else if (IsEmpty()) {
            rear = front = 0;
        }
        else {
            rear = (rear + 1) % N; // Circular queue implementation
        }
        arr[rear] = value;
        size++;
        cout << "Pushed " << arr[rear] << endl;
    }

    void dequeue() {
        if (IsEmpty()) {
            cout << "Underflow" << endl;
            return;
        }
        else if (front == rear) {
            rear = front = -1;
            size--;
        }
        else {
            cout << "Popped " << arr[front] << endl;
            front = (front + 1) % N; // Circular queue implementation
            size--;
        }

    }

    void printFront() {
        if (IsEmpty()) {
            cout << "queue is empty" << endl;
            return;
        }
        cout << "front = " << arr[front]<<endl;
    }

    void printRear() {
        if (IsEmpty()) {
            cout << "queue is empty" << endl;
            return;
        }
        cout << "rear = " << arr[rear]<<endl;
    }

    void getSize() {
        if (IsEmpty()) {
            cout << "queue is empty" << endl;
            return;
        }
        cout << "size: " << size << endl;
    }
};

int main() {
    queue obj;
    cout << "queue IsEmpty: " << obj.IsEmpty() << endl;
    obj.enqueue(1);
    obj.enqueue(12);
    obj.enqueue(23);
    obj.enqueue(34);
    obj.enqueue(45);
    cout << "queue isFull: " << obj.isFull() << endl;
    obj.printFront();
    obj.printRear();
    obj.getSize();
    obj.dequeue();
    obj.dequeue();
    obj.dequeue();
    obj.dequeue();
    obj.getSize();
    cout << "queue isFull: " << obj.isFull() << endl;

    return 0;
}
