#include <bits/stdc++.h>
using namespace std;

bool equal(vector<int> v) {
    for (int i = 1; i < v.size(); i++)
        if (v[0] != v[i])
            return false;
    return true;
}

int main(void) {
    int t;
    cin >> t;
    while (t--) {
        long long n, Count = 0;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        sort(v.begin(), v.end());
        while (!equal(v)) {
            int temp = v[n-1] - v[0];
            Count += temp;
            for (int i = 0; i < n-1; i++)
                v[i] += temp;
            sort(v.begin(), v.end());
        }
        cout << Count << endl;
    }
}
