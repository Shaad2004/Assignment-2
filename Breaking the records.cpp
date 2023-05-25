#include<iostream>
using namespace std;
int main() {
    int i,max,min,n,c=0,d=0;
    cin>>n;
    int a[n];
    for (i=0;i<n;i++){
        cin>>a[i];
    }
    max=a[0];
    min=a[0];
    for (i=0;i<n;i++){
        if (a[i]>max){
            max=a[i];
            c+=1;
        }
        if (a[i]<min){
            min=a[i];
            d+=1;
        }
    }
    cout<<c<<" "<<d;
}
