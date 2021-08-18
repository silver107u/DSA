#include<iostream>
using namespace std;

int main()
{
    int a[]={-12, 11, -13, -5, 6, -7, 5, -3, -6};
    int n=sizeof(a)/sizeof(int);

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<'\t';
    }

    cout<<endl;
    for(int i=0;i<n;i++)
    {
        int j;
        if(a[i]>0)
        {
            for( j=i+1;a[j]>0;j++)
            {
                if(j==n)
                {
                    break;
                }
            }
            if(j!=n)
            {
                for(;j>i;j--)
                {
                    int temp=a[j];
                    a[j]=a[j-1];
                    a[j-1]=temp;
                }
            }
        }
        /*for(int i=0;i<n;i++)
        {
            cout<<a[i]<<'\t';
        }
        cout<<endl;*/
    if(j==n)
        {
            break;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<'\t';
    }
}
