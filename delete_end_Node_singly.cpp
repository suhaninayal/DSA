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

    //delete the end node;
   node* temp=head;
   node* p=head;
    while(temp->next!=NULL)
    {
        p=temp;
        temp=temp->next;
    
    }
    p->next=NULL;
    free(temp);
    temp=NULL;


    //printing the list;
    node* q=head;
    while(q!=NULL)
    {
        cout<<q->data;
        q=q->next;
    }

}