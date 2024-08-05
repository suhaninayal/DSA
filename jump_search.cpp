// JUMP SEARCH
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a[]={1,2,3,4,5,6,7,8};
    int n=8;
    int key;
    cout<<"Enter key: ";
    cin>>key;
    int comp=0;
    int step=sqrt(n);
    int i;
    for(i=0;i<n;i=i+step)
    {
        //comp++;
        if(a[i]==key){
            //cout<<"Comparisons: "<<comp<<endl;
            cout<<"Element found"<<i<<endl;
            return 0;
        }
        if(a[i]>key){
            break;
        }
    }

    for(int j=i;j>=0;j--){
       // comp++;
        if(a[j]==key){
            //cout<<"Comparisons: "<<comp<<endl;
            cout<<"Element found"<<j<<endl;
            return 0;
        }
    }
    cout<<"Comparisons: "<<comp<<endl;
    cout<<"Element not found"<<endl;
    return 0;
}