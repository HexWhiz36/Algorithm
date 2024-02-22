#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n,c=0;
    string s;
    cin>>n>>s;

    for(int i=0; i<n; i++)
    {
        if(s[i] == '8')
        {
            c++;
        }
    }
    if(c >= n/11)
    {
        cout<<n/11<<endl;
    }
    else if(c < n/11 && n > 11)
    {
        cout<<c<<endl;
    }
    else{
        cout<<0<<endl;
    }

    return 0;
}
