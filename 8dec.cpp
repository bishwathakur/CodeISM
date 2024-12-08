#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int

void solve() {
    int n;cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    int target;cin>>target;
    //code here
    int l=0,r=a.size()-1;
    int mid=l+(r-l)/2;
    vector<pair<int,int>> ans;
    while(l<=r){
        if(a[l]+a[r]==target){
            ans.push_back({l,r});
            l++;
            continue;
        }else if(a[l]+a[r]<target){
            l++;
        }else{
            r--;
        }
        mid=l+(r-l)/2;
    }
    for(auto x:ans){
        cout<<x.first<<" "<<x.second<<endl;
    }

}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}
