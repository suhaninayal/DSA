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

 
 

  //segregate even and odd numbers;
    node* even=head->next;
    node* evenhead=even;
    node* odd=head;
    while(odd!=NULL)
    {
        odd->next=odd->next->next;
        odd=odd->next;
    }
     while(even!=NULL)
     {
        even->next=even->next->next;
        even=even->next;
     }
     odd->next=evenhead;



    //printing the linked list;
    node* t=head;
    
    while(t!=NULL)
    {
        cout<<t->data;
        t=t->next;
    }
    return 0;
}