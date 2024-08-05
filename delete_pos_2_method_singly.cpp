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
    int pos;
    cin>>pos;
    node* temp=head;
    node* p1=head;
    while(j<pos)
    {
        p1=temp;
        temp=temp->next;
        j++;
    }
    p1->next=temp->next;
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