#include <bits/stdc++.h>
using namespace std;
int top=-1;
int arr[5];

void push(int val) {
    if (top==4) {
        cout<<"Stack overflow!"<<endl;
    } else
        arr[++top] = val;
}
void pop() {
    if (top==-1) {
        cout<<"Stack is empty."<<endl;
    }
    top--;
}
int peek() {
    if (top==-1) {
        cout<<"Stack is empty"<<endl;
        return 0;
    } else 
        return arr[top]; 
}
bool isEmpty() {
    if (top==-1) {
        return 1;
    }
    return 0;
}

int main() {
    push(10);
    push(20);
    cout<<"Top value of stack is: "<<peek()<<endl;
    push(30);
    push(40);
    push(50);
    cout<<"Top value of stack is: "<<peek()<<endl;
    pop();
    pop();
    pop();
    pop();
    cout<<"Top value of stack is: "<<peek()<<endl;
    pop();
    cout<<"Top value of stack is: "<<peek()<<endl;
    isEmpty();
    return 0;
}
