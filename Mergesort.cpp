#include<bits/stdc++.h>
using namespace std;

void merge (int a[],int l,int m, int r)
{
    int n1= m-l+1;
    int n2= r-m;

    int b[n1],c[n2];

    for(int i=0;i<n1;i++)
    {
        b[i]=a[l+i];
    }
    for(int j=0;j<n2;j++)
    {
        c[j]=a[m+1+j];
    }

    int i,j,k;
    i=0;
    j=0;
    k=0;
     while(i<n1 && j<n2)
     {
        if(b[i]<=c[j])
        {
            a[k]=b[i];
            i++;
        }
        else
        {
            a[k]=c[j];
            j++;
        }
        k++;
     }

     while(i<n1)
     {
        a[k]=b[i];
        i++;
        k++;
     }

     while(j<n2)
     {
        a[k]=b[j];
        j++;
        k++;
     }

}


void mergesort(int a[],int l,int h)
{
    if(l<h)
    {
    int mid= l+(h-l)/2;
    mergesort(a,l,mid);
    mergesort(a,mid+1,h);
    merge(a,l,mid,h);
    }
}
void print(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}

int main()
{
    int n,i;
    cin>>n;
    int a[n];
    for( i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int l=a[0];

    mergesort(a,l,n);
    print(a,n);
    
    return 0;
}