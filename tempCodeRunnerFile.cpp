#include<iostream>
using namespace std;
bool palin(string str,int i,int n)
{
    if(i>=n/2)
    {
        return true;
    }
    if(str[i]!=str[n-i-1])
    {
       return false;
    }
     palin(str,i+1,n);
    
}
int main()
{
    string str;
    getline(cin,str);
    int n=str.size();
    bool ans =palin(str,0,n);
    cout<<ans;
    return 0;
}