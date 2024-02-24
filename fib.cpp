//using recursion 

#include<bits/stdc++.h>
using namespace std;

int fib(int x)
{
    if(x<=1)
    return x;
    return fib(x-1)+fib(x-2);
}
int main()
{
    int n;
    cin>>n;
    cout<<fib(n)<<endl;
    return 0;
}