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
    printf("Enter Number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements");
    for (int i=0;i<n;i++) {
        scanf("%d", &arr[i]);
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
            temp -> back = cur;
            cur = cur->next;
        }
    }
    //traversing through the doubly linked list for output
    cur = head;
    while (cur != NULL) {
        printf("%d", cur->data);
        cur = cur->next;
        if (cur!=NULL) {
            printf("->");
        }
    }
    return 0;
}
