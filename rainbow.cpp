nt main(void) {
    int t;
    cin >> t;
    while (t--) {
        int n, val = 1;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        bool flag = true;
        for (int i = 0, j = n-1; i <= j; i++, j--) {
            if (v[i] != v[j] || (v[i] != val && v[i] != val+1)) {
                flag = false;
                break;
            }
            val = v[i];
        }
        (flag && val == 7) ? cout << "yes\n" : cout << "no\n";
    }
}

