//sssssssssssssss
#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   getline(cin,s);
   string goal;
   getline(cin,goal);
   bool ans;
   int n=s.length();
    int k=0;
    
    while(true)
    {
        string temp;
        for(int i=0;i<k;i++)
        {
            temp[i]=s[i];
        }
        for(int i=0;i<n-k;i++)
        {
            s[i]=s[k+i];
        }
        for(int i=n-k;i<n;i++)
        {
            s[i]=temp[i-n+k];
        }
        
       if(s==goal)
       {
         ans=true;
         break;
       }
       else
       {
       k++;
       }
    
    if(ans)
    {
        cout<<"equal";
        break;
    }
    else
    {
        cout<<"not true";
        break;
    }
}
}

