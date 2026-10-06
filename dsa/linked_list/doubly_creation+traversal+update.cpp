#include<bits/stdc++.h>
using namespace std;

//dividing space inside the Node
struct Node {
    Node *back;
    int data;
    Node *next;
};

//creating the node
Node* createNode(int val) {
    Node *newNode = new Node();
    newNode->back = NULL;
    newNode->data = val;
    newNode->next = NULL;
    return newNode;
}

int main() {
    //user input array stuffs
    int n;
    cout<<"Enter Number of elements: ";
    cin>>n;

    int arr[n];
    cout<<"Enter array elements: ";
    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }

    //creating the doubly linked list
    Node *head, *cur;
    head = NULL;
    for (int i=0;i<n;i++) {
        Node *temp = createNode(arr[i]);
        if (head == NULL) {
            head=temp;
            cur=temp;
        } else {
            cur->next = temp;
            temp->back = cur;
            cur = cur->next;
        }
    }

    //traversing through the doubly linked list for output
    cur = head;
    while (cur != NULL) {
        cout<<cur->data;
        cur = cur->next;
        if (cur!=NULL) {
            cout<<"->";
        }
    }

    // Update
    int position, newValue;

    cout<<"\n\nEnter position to update: ";
    cin>>position;
    
    cout<<"Enter new value: ";
    cin>>newValue;
    
    cur = head;

    // Move to the required position
    for (int i=1; i<position && cur!=NULL; i++) {
        cur = cur->next;
    }

    // Update the data
    if (cur == NULL) {
        cout<<"Invalid position!";
    } else {
        cur->data = newValue;
        cout<<"Updated List: ";
        cur = head;
        while (cur != NULL) {
            cout<<cur->data;
            cur = cur->next;
            if (cur != NULL) {
                cout<<"->";
            }
        }
    }

    return 0;
}
