#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, a, max;
    
    cin>>t;
    
    for (int i=1;i<=t;++i)
    {
        max = 1;
        
        cin>>n;
        
        while (n--)
        {
            cin>>a;
            
            if (max < a)
                max = a;
        
        }
        
        cout<<"Case "<<i<<": "<<max<<endl;
    }
    return 0;
}