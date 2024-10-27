#include <bits/stdc++.h>
using namespace std;

void minSub(int n, int k, int d, const vector<int>& shows) {
    unordered_map<int, int> map;
    int unique = 0; 

    for (int i = 0; i < d; ++i) {
        if (map[shows[i]] == 0) unique++; 
        map[shows[i]]++;
    }//!set first window

    int minSub = unique;

    for (int i = d; i < n; ++i) {
        int out = shows[i - d];
        map[out]--;

        if (map[out] == 0) unique--;

        int inc = shows[i];
        if (map[inc] == 0) unique++; 
        map[inc]++;

        minSub = min(minSub, unique);
    }

    cout << minSub << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, d;
        cin >> n >> k >> d;
        vector<int> shows(n);
        for (int i = 0; i < n; ++i) {
            cin >> shows[i];
        }
        minSub(n, k, d, shows);
    }
    return 0;
}
