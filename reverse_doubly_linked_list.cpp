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

 //iterative of reversing linked lists;
 node* temp=NULL;
 node* p=NULL;
 node* q=NULL;
 while(head!=NULL)
 {
    
    temp=head->next;
    q=head->prev;
    head->prev=temp;
    head->next=q;
    head=temp;
    p=q;
 }
//head=p;
head=p->prev;


    //printing the linked list;
    node* t=head;
    
    while(t!=NULL)
    {
        cout<<t->data;
        t=t->next;
    }
    return 0;
}