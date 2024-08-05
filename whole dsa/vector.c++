#include<bits/stdc++.h>
using namespace std;
//vector
int main()
{
    vector<int>v;
    //insert the element in the vector;
    int n;
    cout<<"enter the n=";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        v.push_back(i);
    }

    // printing the element;
    for(auto it:v)
    {
        cout<<it<<" ";
    }

    cout<<"the front element is"<<v.front()<<endl;
    cout<<"the last element"<<v.back()<<endl;
    cout<<"the size"<<v.size();
    cout<<"deleting elemnet from the end"<<v[v.size()-1];
    v.pop_back();
    cout<<"printing the element after removing the last element"<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i];
    }
    cout<<endl;
    cout<<"inserting 5 at the beginning"<<(v.begin(),5);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i];
    }
    cout<<endl;
    cout<<"inserting element at the certain position"<<endl;
    v.insert((v.begin()+2),99);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i];
    }
}