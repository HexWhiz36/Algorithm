#include<bits/stdc++.h>
using namespace std;

int fib(int n)
{
    int a=0,b=1,c,i;
    if(n==0)
    {
        cout<<a<<" ";
    }
    else
    {
        for(i=2;i<=n;i++)
        {
            c=a+b;
            a=b;
            b=c;
            cout<<c<<" ";
        }
    }
}
int main()
{
    int n;
    cin>>n;
    cout<<"0 "<<"1 ";
    fib(n);
    return 0;
}