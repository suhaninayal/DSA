//huffman coding problem
//given  a string and we have to find out the huffman coding of the each string
#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node* left;
    node* right;
    node(int d)
    {
        data=d;
        left=NULL;
        right=NULL;
    }
};
class cmp
{
    public:
    bool operator()(node* a,node* b)
    {
        return a->data>b->data;
    }
};
class Solution
{

    public:
    void traverse(node* root,vector<string> &ans,string temp)
    {
        if(root->left==NULL && root->right==NULL)
        {
            ans.push_back(temp);
            return ;
        }
        traverse(root->left,ans,temp+'0');
        traverse(root->right,ans,temp+'1');
    }
    vector<string> huffman(string str,vector<int>fre,int n)
    {
        priority_queue<node*,vector<node*>,cmp,pq;
        for(int i=0;i<n;i++)
        {
            node* temp=new node(fre[i]);
            pq.push(temp);
        }
        while(pq.size()>1)
        {
              node* left=pq.top();
              pq.top();

              node* right=pq.top();
              pq.top();

              node* newnode=new node(left->data+right->data);
              newnode->left=left;
              newnode->right=right;
              pq.push(newnode);
        }
        node* root=pq.top();
        vector<string> ans;
        string temp=" ";
        traverse(root,ans,temp);
    }
};
int main()
{
    int n=5;
    string str=("aaabbbcdddeeeee");
    vector<int> fre={2,45,87,23,12};
    huffman(str,fre,n);
}
