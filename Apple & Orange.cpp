#include<iostream>

using namespace std;

int main() {
    int t,s,a,b,m,n,i,j,d=0,f=0,x=0,y=0;
    cin>>s>>t;
    cin>>a>>b;
    cin>>m>>n;
    int c[m],e[n];
    for (i=0;i<m;i++)
    cin>>c[i];
    for (j=0;j<n;j++)
    cin>>e[j];
    int u[m],v[n];
    for (i=0;i<m;i++)
    {x=a+c[i];
    u[i]=x;}
    for (j=0;j<n;j++)
    {y=b+e[j];
    v[j]=y;}
    for (i=0;i<m;i++)
    {if (u[i]>=s && u[i]<=t)
    d+=1;
    }
    for (j=0;j<n;j++)
    {if (v[j]>=s && v[j]<=t)
    f+=1;
    }
    cout<<d<<endl;
    cout<<f;
    return 0;
}
