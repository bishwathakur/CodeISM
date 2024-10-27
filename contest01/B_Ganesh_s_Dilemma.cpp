#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }
        for (int i = 0; i < n; ++i) {
            if (a[i] < b[i]) {
                swap(a[i], b[i]);
            }
        }
        if (*max_element(a.begin(), a.end()) == a[n - 1] &&
            *max_element(b.begin(), b.end()) == b[n - 1]) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
}

int main(){

    solve();
    cout<<endl;

}