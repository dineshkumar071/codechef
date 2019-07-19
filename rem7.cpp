
#include <bits/stdc++.h>
using namespace std;
//int remainderWith7(string );
int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        string n;
        cin>>n;
        int d=stoi(n);
        int rem=0;
        rem=d %7;
        cout<<d;
        //cout<<remainderWith7(n)<<endl;
    }
	return 0;
}

