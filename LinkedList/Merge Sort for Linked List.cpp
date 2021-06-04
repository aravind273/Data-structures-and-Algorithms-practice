// { Driver Code Starts
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};


 // } Driver Code Ends
/* Structure of the linked list node is as
struct Node 
{
    int data;
    struct Node* next;
    Node(int x) { data = x;  next = NULL; }
};
*/


class Solution{
  public:
    //Function to sort the given linked list using Merge Sort.
    Node* midNode(Node* head,Node* tail)
    {
        Node* fast=head;
        Node* slow=head;
        while(fast!=tail && fast->next!=tail)
        {
            fast=fast->next->next;
            slow=slow->next;
        }
        return slow;
    }
    Node* mergeTwoSortedLists(Node* fsh,Node* ssh)
    {
        Node* n=new Node(-1);
        Node* curr=n;
        while(fsh && ssh)
        {
            if(fsh->data<=ssh->data)
            {
                n->next=fsh;
                fsh=fsh->next;
                n=n->next;
            }
            else
            {
                n->next=ssh;
                ssh=ssh->next;
                n=n->next;
            }
        }
        if(fsh)
        {
            n->next=fsh;
        }
        else if(ssh)
        {
            n->next=ssh;
        }
        return curr->next;
    }
    Node* mergeSort(Node* head,Node* tail)
    {
        if(head==tail)
        {
            Node* n=new Node(head->data);
            return n;
        }
        Node* mid=midNode(head,tail);
        Node* fsh=mergeSort(head,mid);
        Node* ssh=mergeSort(mid->next,tail);
        Node* cl=mergeTwoSortedLists(fsh,ssh);
        return cl;
        
    }
    Node* mergeSort(Node* head) {
        Node* tail=head;
        while(tail->next)
        {
            tail=tail->next;
        }
        return mergeSort(head,tail);
    }
};


// { Driver Code Starts.

void printList(Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

void push(struct Node** head_ref, int new_data) {
    Node* new_node = new Node(new_data);

    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

int main() {
    long test;
    cin >> test;
    while (test--) {
        struct Node* a = NULL;
        long n, tmp;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            push(&a, tmp);
        }
        Solution obj;
        a = obj.mergeSort(a);
        printList(a);
    }
    return 0;
}  // } Driver Code Ends
