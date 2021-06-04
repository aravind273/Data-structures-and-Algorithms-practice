// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


struct node
{
    int data;
    struct node* next;
    
    node(int x){
        data = x;
        next = NULL;
    }
    
};

/* Function to print linked list */
void printList(struct node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}


 // } Driver Code Ends
/*
  Reverse a linked list
  The input list will have at least one element  
  Return the node which points to the head of the new LinkedList
  Node is defined as 
    struct node
    {
        int data;
        struct node* next;
    
        node(int x){
            data = x;
            next = NULL;
        }
    
    }*head;
*/

class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        int count=0;
        struct node* curr=head;
        while(curr)
        {
            count++;
            curr=curr->next;
        }
        curr=head;
        struct node* prev=NULL;
          struct node* past_prev=head;
          struct node* now=head;
        int count1=0;
        while(count1<=count && curr)
        {
                now=curr;
            for(int i=0;i<k && curr;i++)
            {
                count1++;
                struct node *next1=NULL;
                next1=curr->next;
                curr->next=prev;
                prev=curr;
                curr=next1;
            }
            if(count%k!=0 && !curr)
            {
                past_prev->next=prev;
                return head;
            }
            if(count1>k)
            {
            past_prev->next=prev;
            }
            else
            {
                head=prev;
            }
            prev=NULL;
            past_prev=now;
        }
        
        return head;
    }
};


// { Driver Code Starts.

/* Drier program to test above function*/
int main(void)
{
    int t;
    cin>>t;
     
    while(t--)
    {
        struct node* head = NULL;
        struct node* temp = NULL;
        int n;
        cin >> n;
         
        for(int i=0 ; i<n ; i++)
        {
            int value;
            cin >> value;
            if(i == 0)
            {
                head = new node(value);
                temp = head;
            }
            else
            {
                temp->next = new node(value);
                temp = temp->next;
            }
        }
        
        int k;
        cin>>k;
        
        Solution ob;
        head = ob.reverse(head, k);
        printList(head);
    }
     
    return(0);
}

  // } Driver Code Ends
