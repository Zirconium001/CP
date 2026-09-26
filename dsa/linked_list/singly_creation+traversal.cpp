// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

//dividing space inside node
struct Node {
     int data;
     Node *next;
   };

//node creation
Node* createNode(int val) {
    Node *newNode = new Node();
    newNode -> data = val;
    newNode -> next = NULL;
    return newNode;
}

int main() {
     //user input arrray
    int n;
    printf("Size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Elements of array: ");
    for (int i=0;i<n;i++) {
        scanf("%d", &arr[i]);
    }


     //linked list creation
    Node *head, *cur;
    head = NULL;

    for (int i=0;i<n;i++) {
        Node *temp = createNode(arr[i]);
        if (head == NULL) {
            head = temp;
            cur = temp;
        } else {
          cur -> next = temp;
          cur = cur -> next;
        } 
  }


     //linked list traverse with proof
    cur = head;
    while (cur !=NULL) {
        cout<<cur->data;
        cur = cur->next;
        if (cur != NULL) {
            cout<<"->";
        }
    }
    return 0;
}
