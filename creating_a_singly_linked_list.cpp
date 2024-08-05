#include<bits/stdc++.h>
using namespace std;

class node{
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
    int arr[5] = {1, 3, 4, 5, 6};
    int n = 5;
    node* head = NULL;
    node* tail = NULL;  // To keep track of the last node

    for(int i = 0; i < n; i++)
    {
        node* newNode = new node(arr[i]);
        if(head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    node* temp = head;  // Initialize temp to head for traversal
    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
