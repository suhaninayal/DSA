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
    node* head=NULL;
    node* tail=NULL;
    int i=0;
    int n=5;

    //inserting n nodes int the linked list;
    while(i<n)
    {
        int val;
        cin>>val;
        if(head==NULL)
        {  
            head=new node(val);
            tail=head;
        }
        else

        {
            node* temp=new node(val);
            tail->next=temp;
            tail=temp;
        }
        i++;
    }


    int valuee;
    cin>>valuee;
    
    if(head==NULL)
    {
        head=new node(valuee);

    }
    else
    {
        node* temp=new node(valuee);
        temp->next=head;
        head=temp;
    }
   



//printing the linked list;
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data;
        temp=temp->next;
    }

    
    
  }
    
