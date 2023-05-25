#include<iostream>
using namespace std;
int main() {
    int n,k,i,c=0,j,d;
    cin>>n>>k;
    int a[n];
    for (i=0;i<n;i++)
    cin>>a[i];
    for (i=0;i<n;i++)
    {for (j=0;j<n;j++)
    {d=0;
    if (i<j)
    {d=a[i]+a[j];
    if (d%k==0) 
    c+=1;}}}
    cout<<c;
}
