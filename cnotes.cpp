#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    while (t--) {
        int x, y, k, n;
        cin >> x >> y >> k >> n;
        int rem = x - y;
        bool flag = false;
        for (int i = 0; i < n; i++) {
            int a, b;
            cin >> a >> b;
            if (a >= rem && b <= k)
                flag = true;
        }
        if (flag) {
            cout << "LuckyChef\n";
        } else {
            cout << "UnluckyChef\n";
        }
    }
}
