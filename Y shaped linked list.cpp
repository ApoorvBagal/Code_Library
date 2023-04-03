//{ Driver Code Starts
#include<iostream>

#include<bits/stdc++.h>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

int intersectPoint(struct Node* head1, struct Node* head2);

Node* inputList(int size)
{
    if(size==0) return NULL;

    int val;
    cin>> val;

    Node *head = new Node(val);
    Node *tail = head;

    for(int i=0; i<size-1; i++)
    {
        cin>>val;
        tail->next = new Node(val);
        tail = tail->next;
    }

    return head;
}
int findLength(Node* head)
{
    int length=0;
    Node* cur=head;
    while(cur!=NULL)
    {
        length++;
        cur=cur->next;
    }

    return length;
}
/* Driver program to test above function*/
int main()
{
    int T,n1,n2,n3;

    cin>>T;
    while(T--)
    {
        cin>>n1>>n2>>n3;

        Node* head1 = inputList(n1);
        Node* head2 = inputList(n2);
        Node* common = inputList(n3);

        Node* temp = head1;
        while(temp!=NULL && temp->next != NULL)
            temp = temp->next;
        if(temp!=NULL) temp->next = common;

        temp = head2;
        while(temp!=NULL && temp->next != NULL)
            temp = temp->next;
        if(temp!=NULL) temp->next = common;

        cout << intersectPoint(head1, head2) << endl;
        //cout<<findLength(head1)<<" "<<findLength(head2);
    }
    return 0;
}


// } Driver Code Ends


/* Linked List Node
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

//Function to find intersection point in Y shaped Linked Lists.
int intersectPoint(Node* head1, Node* head2)
{
    int m,n;
    n=findLength(head1);
    m=findLength(head2);
    int d=abs(m-n);
    Node* cur1=head1;
    Node* cur2=head2;
    if(n>m)
    {
        while(d--)
        {
            cur1=cur1->next;
        }
    }
    else
    {
        while(d--)
        {
            cur2=cur2->next;
        }
    }
    while(cur1!=NULL && cur2!=NULL)
    {
        cur1=cur1->next;
        cur2=cur2->next;
        if(cur1==cur2)
        {
            return cur1->data;
        }
    }
    return -1;
}

