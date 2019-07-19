#include<bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string str;
        cin >> n >> str;
        long long Count = 0;
        for (int i = 0; i < n; i++)
            if (str[i] == '1')
                Count++;
        cout << ((Count * (Count + 1)) / 2) << endl;
    }
}
/*




int main(void)
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string a;
        int b,count=0;
        cin>>b;
        cin>>a;
        for(int j=0;j<b;j++)
        {
            for(int k=j;k<b;k++)
            {
                if(a[j]=='1'&&a[k]=='1')
                    count++;
            }
        }
        cout<<count<<endl;
    }
}*/
