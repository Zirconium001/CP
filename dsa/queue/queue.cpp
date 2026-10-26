#include <bits/stdc++.h>
using namespace std;

int front = -1, rear = -1;
int arr[5];
int n = 5;

void enqueue(int item) {
    // 1. Check overflow
    if ((front == 0 && rear == n - 1) ||
        (front == rear + 1)) {
        cout << "Queue overflow!" << endl;
        return;
    }

    // 2. Find new value of rear
    if (front == -1) {
        front = 0;
        rear = 0;
    }
    else if (rear == n - 1) {
        rear = 0;
    }
    else {
        rear = rear + 1;
    }

    // 3. Insert the element
    arr[rear] = item;
}

void dequeue() {
    // 1. Check underflow
    if (front == -1) {
        cout << "Queue is empty!" << endl;
        return;
    }

    // 2. Access the front element
    int item = arr[front];
    cout << "Deleted element: " << item << endl;

    // 3. Find new value of front
    if (front == rear) {
        front = -1;
        rear = -1;
    }
    else if (front == n - 1) {
        front = 0;
    }
    else {
        front = front + 1;
    }
}

int peek() {
    if (front == -1) {
        cout << "Queue is empty!" << endl;
        return 0;
    }

    return arr[front];
}

bool isEmpty() {
    return front == -1;
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    cout << "Front value: " << peek() << endl;

    dequeue();

    cout << "Front value: " << peek() << endl;

    enqueue(40);
    enqueue(50);
    enqueue(60);

    cout << "Front value: " << peek() << endl;

    while (!isEmpty()) {
        dequeue();
    }

    cout << "Is queue empty? " << isEmpty() << endl;

    return 0;
}
