//length of the linked list;
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

    //calculate the length of the linked list;
    int count=0;
    node* temp=head;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    cout<<"the lenght of the linked list is="<<count;



}