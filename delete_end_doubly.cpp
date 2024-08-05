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
//deleting the end node;
   node* p=head;
   node* q=head;
   while(p->next!=NULL)
   {
     q=p;
     p=p->next;
     
   }
   q->next=NULL;
   p->prev=NULL;
   free(p);
   p=NULL;







    //printing the linked list;
    node* temp=head;
    
    while(temp!=NULL)
    {
        cout<<temp->data;
        temp=temp->next;
    }
    return 0;
}