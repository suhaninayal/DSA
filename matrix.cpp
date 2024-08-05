#include<iostream>
using namespace std;
int main()
{
    int r1,r2,c1,c2;
    int arr1[r1][c1];
    int arr2[r2][c2];
    cout<<"enter the row and columns of the arr1=";
    cin>>r1>>c1;
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {

        cin>>arr1[i][j];
    }
}
    cout<<"enter the row and column of the arr2=";
     cin>>r2>>c2;
      for(int i=0;i<r2;i++)
{
    for(int j=0;j<c2;j++)
    {
        cin>>arr2[i][j];
    }
}
 if(c1!=r2)

{
    cout<<"not possible";
}


  int arr3[r1][c2];
    for(int i=0;i<r1;i++)
{
    for(int j=0;j<c2;j++)
    {
        arr3[i][j]=0;
        for(int k=0;k<r2;k++)
        {
            arr3[i][j]+=arr1[i][k]*arr2[k][j];
        }
    }
}
     


    for(int i=0;i<r1;i++)
{
    for(int j=0;j<c2;j++)
    {
        cout<<arr3[i][j];
    }
}
}