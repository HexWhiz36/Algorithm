#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, a[1001] , b[1001];

    cin >> x;
    int c = 0;

    for(int i = 0 ; i < x ; i++)
    {
        cin >> a[i] >> b[i];
    }

    for(int i = 0 ; i < x ; i++){
        for(int j = 0 ; j < x ; j++){
            if(a[i] == b[j]){
                c++;
            }
        }
    }
    cout<< c << endl;

    return 0;
}