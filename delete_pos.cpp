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

    
    
    //delete at a position;
    int j=1;
    node* temp=head;
    node* p1=head;
    node* q2=head;
    int pos;
    cout<<"enter the pos";
    cin>>pos;
    while(j!=pos-1)
    {
        temp=temp->next;
        j++;
    }
    p1=temp;
    p1=p1->next;
    q2=p1;
    q2=q2->next;
    temp->next=q2;
    p1->next=NULL;

   


    //printing the list;
    node* q=head;
    while(q!=NULL)
    {
        cout<<q->data;
        q=q->next;
    }

}