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
    int arr[5]={1,3,4,5,6};
    int n=5;
    node *head=NULL;
    for(int i=0;i<n;i++)
    {
        if(head==NULL)
        {
            head=new node(arr[i]);
        }
        else
        {
            node* temp;
            temp=new node(arr[i]);
            temp->next=head;
            head=temp;
        }
    }
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data;
        temp=temp->next;
    }
}