//lllllllllllll

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

void rotate(node* &head,int n,int k)
{
    
   node* current=head;
   int temp[n];
   int ind=0;
   while(current!=NULL && ind<n)
   { temp[ind++]=current->data;
   current=current->next;
   }
  int temp1[k];

   for(int i=0;i<k;i++)
   {
      temp1[i]=temp[i];
   }
   for(int i=k;i<n;i++)
   {
    temp[i-k]=temp[i];
   }
   for(int i=n-k;i<n;i++)
   {
    temp[i]=temp1[i-(n-k)];
   }

   current=head;
   int a=0;
   while(current!=NULL && a<n)
   {
    current->data=temp[a];
    current=current->next;
    a++;
   }
}




int main()
{
    node* head=NULL;
    node* tail=NULL;
    int i=0;
    int n=5;
    int k=2;

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
    rotate(head,n,k);

   node* q=head;
   while(q!=NULL)
   {
    cout<<q->data;
    q=q->next;
   }
}

