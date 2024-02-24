#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,i,gcd;
    cin>>a>>b;
    if(b>a)
    {
        int temp=a;
        a=b;
        b=temp;
    }
    for(i=1;i<=b;i++)
    {
        if(a%i==0 && b%i==0)
        {
            gcd=i;
        }
       
    }
    cout<<gcd<<endl;
    return 0;
}