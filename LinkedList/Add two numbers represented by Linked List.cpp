// { Driver Code Starts
// driver

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


 // } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        struct Node* head1=NULL;
        
        struct Node* curr=first;
        struct Node* prev=NULL;
        while(curr)
        {
            struct Node* next1=NULL;
            next1=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next1;
        }
        first=prev;
        
        curr=second;
        prev=NULL;
        while(curr)
        {
            struct Node* next1=NULL;
            next1=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next1;
        }
        second=prev;
        
        struct Node* tempfirst=first;
        struct Node* tempsecond=second;
        int carry=0;
        
        struct Node* dummy=NULL;
        while(tempfirst || tempsecond)
        {
            int a=0,b=0;
            if(tempfirst)
            {
                a=tempfirst->data;
                tempfirst=tempfirst->next;
            }
            if(tempsecond)
            {
                b=tempsecond->data;
                tempsecond=tempsecond->next;
            }
            if(head1==NULL)
            {
                head1=new Node((carry+a+b)%10);
                dummy=head1;
            }
            else
            {
                dummy->next=new Node((carry+a+b)%10);
                dummy=dummy->next;
            }
            carry=(carry+a+b)/10;
        }
        if(carry)
        {
            if(head1==NULL)
            {
                head1=new Node((carry));
                dummy=head1;
            }
            else
            {
                dummy->next=new Node(carry);
                dummy=dummy->next;
            }
            
        }
        curr=head1;
        prev=NULL;
         while(curr)
        {
            struct Node* next1=NULL;
            next1=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next1;
        }
        head1=prev;
        return head1;
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}
  // } Driver Code Ends
