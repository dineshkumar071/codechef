#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<string> str(n);
        vector<bool> v(n, false);
        for (int i = 0; i < n; i++)
            cin >> str[i];
        for (int i = 0; i < m; i++) {
            int x;
            cin >> x;
            for (int j = 0; j < x; j++) {
                string temp;
                cin >> temp;
                for (int k = 0; k < n; k++) {
                    if (str[k] == temp) {
                        v[k] = true;
                        break;
                    }
                }
            }
        }
        for (int i = 0; i < n; i++)
            (v[i]) ? cout << "YES " : cout << "NO ";
        cout << endl;
    }
}




/*int main(void)
{
    int t;
    cin>>t;
    int i,j;
    for(i=0;i<t;i++)
    {
        int n,m;
        cin>>n>>m;
        vector<string> v;
        string a;
        for(j=0;j<n;j++)
        {
            cin>>a;
            v.push_back(a);
        }
        for(j=0;j<m;j++)
        {
            int d;
            cin>>d;
            string b;
            vector<string> x;
            vector<string> y;
            for(int k=0;k<d;k++)
            {
                cin>>b;
                x.push_back(b);

            }
            for(int k=0;k<;k++)
            {
                int flag=0;
                for(int h=0;h<;h++)
                {
                    if(v[h]==x[k])
                    {
                       flag=1;
                       break;
                    }

                }
                if (flag==1)
                    cout<<"YES"<<" ";
                    else
                      cout<<"NO"<<" ";
            }cout<<endl;
        }


    }
}*/
