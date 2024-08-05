#include<bits/stdc++.h>
using namespace std;
class node

{
    public:
    int data;
    node* next;
    node* prev;

    node(int value)
    {
        data=value;
        next=NULL;
        prev=NULL;
    }
};
int main()
{
    node* head=NULL;
    node* tail=NULL;
    int i=0;
    int n;
    cout<<"enter the n=";
    cin>>n;
    while(i<n)
    {
        int v;
        cin>>v;
        if(head==NULL)
        {
             head=new node(v);
            tail=head;

        }
        else
        {
            node* temp=new node(v);
            tail->next=temp;
            temp->prev=tail;
            tail=temp;
        }
        i++;
    }

    //inserting element at the end of the linked lists
    int vl;
    cout<<"enter the vl=";
    cin>>vl;
    node* t=head;
    node* p=new node(vl);
    while(t->next!=NULL)
    {
        t=t->next;

    }
    t->next=p;
    p->prev=t;




    //printing the linked list;
    node* temp=head;
    
    while(temp!=NULL)
    {
        cout<<temp->data;
        temp=temp->next;
    }
    return 0;
}