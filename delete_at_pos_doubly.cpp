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
//deleting at specific positon node;
   node* p=head;
   node* q=head;
   int pos;
   cout<<"enter the pos=";
   cin>>pos;
   int j=1;
   while(j<pos)
   {
      q=p;
      p=p->next;
      j++;
   }
   q->next=p->next;
   node* o=p->next;
   o->prev=q;





   






    //printing the linked list;
    node* temp=head;
    
    while(temp!=NULL)
    {
        cout<<temp->data;
        temp=temp->next;
    }
    return 0;
}