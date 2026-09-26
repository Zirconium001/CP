#include<bits/stdc++.h>
using namespace std;

//dividing the space inside a node
struct Node {
    int data;
    Node *next;
};

//creating a node
Node* createNode(int val) {
Node *newNode = new Node();
newNode->data = val;
newNode->next = NULL;
return newNode;
}

int main() {
    //user input array stuffs
    int n;
    printf("Enter Numbe rof elements: ");
    scanf("%d", &n);
    int arr[n];
    for (int i=0;i<n;i++) {
        scanf("%d", &arr[i]);
    }

  //creating linked list
    Node *head, *cur;
    head = NULL;
    for (int i=0;i<n;i++) {
        Node *temp = createNode(arr[i]);
        if (head == NULL) {
            head=temp;
            cur=temp;
        } else {
            cur->next = temp;
            cur = cur->next;
        }
    }
  //making the linked list circular
    cur->next = head;

  //traversing through the circular linked list
    cur = head;
    
   do {
        cout << cur -> data;
        cur = cur -> next;
        if (cur != head) {
            cout << "->";
        }

    } while (cur != head);
    return 0;
}
