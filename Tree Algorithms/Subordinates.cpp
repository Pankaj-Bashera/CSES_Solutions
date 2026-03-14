#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define vi vector<int>
#define inputVec(v, n) for(int i = 0; i < n; ++i) cin >> v[i];
#define initv(v, n) vi v(n); inputVec(v, n)
#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
 
const int MOD = 1e9 + 7;
const ll INF = 1e18;
 
void solve() {
    int n;
    cin >> n;
    vector<vector<int>> tree(n+1);
    vector<int> subs(n+1);
 
    vector<int> boss(n+1);
    boss[0] = 0;
    for(int i=1; i<=n; i++) {
        cin >> boss[i];
    }
 
    for(int i=1; i<=n; i++) {
        if(boss[i-1]!=0) {
            tree[boss[i-1]].pb(i);
        }
    }
 
    function<int(int)> dfs = [&] (int node) {
        int cnt = 0;
        for(int x: tree[node]) {
            cnt += 1+dfs(x);
        }
        subs[node] = cnt;
        return cnt;
    };
 
    dfs(1);
 
    for(int i=1; i<=n; i++) {
        cout << subs[i] << " ";
    }
}
 
int32_t main() {
    fastio();
    int t=1;
    //cin >> t;
    while (t--) solve();
    return 0;
}
