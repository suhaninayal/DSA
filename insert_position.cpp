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
    int pos;
    cout<<"enter the pos=";
    cin>>pos;
    node* var=new node(valuee);
    node* p=head;
    node* q=head;
     int j=1;
    while(j<pos-1)
    {
      p=p->next;
      q=p;
      j++;
    }
    p=p->next;
    q->next=var;
    var->next=p;
    
   



//printing the linked list;
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data;
        temp=temp->next;
    }

    
    
  }
    
