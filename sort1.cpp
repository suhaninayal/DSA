#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node* next;

    node(int value)
    {
        data=value;
        next=NULL;
    }
};

int main()
{
    node* head=NULL;
    node* tail=NULL;
    int n;
    cout<<"enter the n=";
    cin>>n;
    int i=0;
    while(i<n)
    {
        int v;
        cout<<"enter the v=";
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
            tail=temp;

        }
        i++;
    }

    //sort elements;
    node* slow=head;
    node *fast=head->next;
    while(slow!=NULL && slow->next!=NULL)
    {
        if(slow->data>fast->data)
        {
            swap(slow->data,fast->data);

        }
        fast=fast->next;
        if(fast==NULL)
        {
            slow=slow->next;
            fast=slow->next;
        }
    }
    
   

   


    //printing the list;
    node* q=head;
    while(q!=NULL)
    {
        cout<<q->data;
        q=q->next;
    }

}