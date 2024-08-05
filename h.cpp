//sssssssssssssss
#include<bits/stdc++.h>
using namespace std;
bool rotate(string s,string goal)
{
    int n=s.length();
    bool ans;
    bool res;
    string t=s;
    int k=1;
    int l=1;
   while(l<n)
    {
        string temp;
        k++;
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
        for(int i=0;i<n;i++)
        {
            s[i]=t[i];
        }
       }
       l++;
       
    
    }
    if(ans)
    {
        res=true;
    }
    else
    {
        res=false;
    }

   return res;
   }


int main()
{
   string s;
   getline(cin,s);
   string goal;
   getline(cin,goal);
   bool ans=rotate(s,goal);
   cout<<ans;  
}

