//insertion at the beginning of the list;
#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node *next;

    node(int value)
    {
        data=value;
        next=NULL;
    }
};
int main()
{      
     node* head;
     int arr[5]={1,2};
     int value;
     cin>>value;
     head=new node(arr[0]);
     head->next=new node(arr[1]);
     if(head==NULL)
     {
        head=new node(value);
     }
     else
     {
        node* temp;
        temp=new node(value);
        temp->next=head;
        head=temp;
     }
     node* temp=head;
     while(temp!=NULL)
     {
        cout<<temp->data;
        temp=temp->next;
     }
}