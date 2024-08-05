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

    //printing the linked list;
    node* temp=head;
    node* p=NULL;
       while(temp!= NULL)
    {
        p=temp->next;
        while(p!=NULL)
        {
            if(temp->data==p->data)
            {
                if(p->next!=NULL)
                {
                    p->next->prev=p->prev;
                }
                if(p->prev!=NULL)
                {
                    p->prev->next=p->next;
                }
                node* d=p;
                p=p->next;
            }
            else
            {
                p=p->next;
            }
        }
        temp=temp->next;
            
       
    }
    node* print1=head;
    while(print1!=NULL)
    {
        cout<<print1->data;
        print1=print1->next;
    }
}
 
        
