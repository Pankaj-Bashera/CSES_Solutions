#include <bits/stdc++.h>
using namespace std;
 
#define int long long 
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
 
const int MOD = 1e9 + 7;
const int INF = 1e18;
 
void solve() {
    int n;
    cin>>n;
 
    vector<int> dp(n+1, 0);
    dp[0] = 1;
 
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=6 && j<=i; j++) {
            dp[i] = (dp[i]+dp[i-j])%MOD;
        }
    }
 
    cout << dp[n] << endl;
}
 
int32_t main() {
    fastio();
    int t=1;
    //cin >> t;
    while (t--) solve();
    return 0;
}
