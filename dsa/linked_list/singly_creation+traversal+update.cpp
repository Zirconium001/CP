#include <bits/stdc++.h>
using namespace std;

struct Node {
  int data;
    Node *next;
};

Node* createNode(int val) {
    Node *newNode = new Node();
    newNode->data=val;
    newNode->next=NULL;
    return newNode;
}

int main() {
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;

    int arr[n];

    cout<<"\nEnter the elements: ";
    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }

    Node *head, *cur;
    head = NULL;

    for (int i=0;i<n;i++) {
        Node *temp = createNode(arr[i]);

        if (head==NULL) {
            head=temp;
            cur=temp;
        } else {
            cur->next=temp;
            cur=cur->next;
        }
    }

    // Traversal
    cur = head;
    while (cur!=NULL) {
        cout<<cur->data;
        cur=cur->next;

        if (cur!=NULL) {
            cout<<"->";
        }
    }

    // Update
    int position, newValue;

    cout<<"\n\nEnter the position to update: ";
    cin>>position;

    cout<<"Enter the new value: ";
    cin>>newValue;

    cur = head;

    for (int i=1; i<position && cur!=NULL; i++) {
        cur=cur->next;
    }

    if (cur==NULL) {
        cout<<"Invalid position!";
    } else {
        cur->data=newValue;

        cout<<"Updated List: ";

        cur=head;
        while (cur!=NULL) {
            cout<<cur->data;
            cur=cur->next;

            if (cur!=NULL) {
                cout<<"->";
            }
        }
    }

    return 0;
}
