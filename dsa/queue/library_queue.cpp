
#include <bits/stdc++.h>
using namespace std;

queue<int> q;

void enqueue(int item) {
    q.push(item);
}

void dequeue() {
    if (q.empty()) {
        cout << "Queue is empty!" << endl;
        return;
    }

    cout << "Deleted element: " << q.front() << endl;
    q.pop();
}

int peek() {
    if (q.empty()) {
        cout << "Queue is empty!" << endl;
        return 0;
    }

    return q.front();
}

bool isEmpty() {
    return q.empty();
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
