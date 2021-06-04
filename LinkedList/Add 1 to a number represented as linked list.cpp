// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data; 
        node = node->next; 
    }  
    cout<<"\n";
} 


 // } Driver Code Ends
//User function template for C++

/* 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    Node* addOne(Node *head) 
    {
        Node* prev=NULL;
        Node* curr=head;
        while(curr)
        {
           Node* next1=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next1;
        }
        head=prev;
        Node *temp=head;
        int carry=0;
        Node *last=NULL;
        while(temp)
        {
            if(carry)
            {
                int val=carry+temp->data;
                temp->data=val%10;
                carry=val/10;
            }
            else if(temp==head)
            {
                int val=temp->data+1;
                carry=val/10;
                temp->data=val%10;
            }
            if(temp->next==NULL)
            {
                last=temp;
            }
            temp=temp->next;
        }

        if(carry)
        {
            last->next=new Node(carry);
            temp=last->next;
        }
        else
        {
            temp=last;
        }

        prev=NULL;
         curr=head;
        while(curr)
        {
           Node* next1=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next1;
        }
        head=prev;
        return head;
        
    }
};

// { Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 
  // } Driver Code Ends
