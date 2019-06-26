#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int test;
    cin>>test;
    for(int i=0;i<test;i++)
    {
        int m,x,y;
        cin>>m>>x>>y;
        int a[m];
        for(int j=0;j<m;j++)
        {
            cin>>a[j];
        }
        int k[100]={0};
        int d=x*y;
        for(int j=0;j<m;j++)
        {
            int e,f;
            e=(a[j]-1)+d;
            f=(a[j]-1)-d;
            if(e>99)e=99;
            if(f<0)f=0;
            for(int z=f;z<=e;z++)
            {
                k[z]=1;
            }
        }
        int count=0;
        for(int j=0;j<=99;j++)
        {
            if(k[j]==0)count++;
        }
        cout<<count<<endl;
    }
}
