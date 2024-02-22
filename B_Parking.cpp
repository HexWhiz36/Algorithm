#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,a;
    cin>>t;
    while(t--)
    {
        int min=99,max=0;
        cin>>n;
        while(n--)
        {
            cin>>a;
            if(a<min) min=a;
            if(a>max) max=a;
        }
        cout<<(max-min)*2<<endl;
    }
    return 0;
}