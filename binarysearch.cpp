#include<bits/stdc++.h>
using namespace std;

int binarysearch(int a[],int n,int key)
{
    int l=0;
    int r=n;
    
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(a[mid]==key)
        {
            return mid;
        }
        else if(a[mid]<mid)
        {
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    int key;
    cin>>key;
    cout<<binarysearch(a,n,key)<<endl;
    return 0;
}