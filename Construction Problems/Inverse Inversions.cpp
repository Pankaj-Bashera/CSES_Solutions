#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define F first
#define S second
 
template<typename T>
void inputVec(vector<T> &v, int n) {
    v.resize(n);
    for (auto &x : v) cin >> x;
}
#define initv(v, n, T) vector<T> v; inputVec(v, n);
 
using pii = pair<int,int>;
using pli = pair<ll,int>;
const int MOD = 1e9 + 7;
const int inf = INT_MAX;
const ll INF = LLONG_MAX;
 
void solve() {
    int n; long long k;
    cin >> n >> k;
 
    vector<int> result;
    int l = 1, r = n;
    while (l <= r) {
        long long maxInv = r - l; 
        if (k >= maxInv) {
            result.push_back(r);
            k -= maxInv;
            r--;
        } else {
            result.push_back(l + k);
            for (int i = l; i < l + k; i++) result.push_back(i);
            for (int i = l + k + 1; i <= r; i++) result.push_back(i);
            break;
        }
    }
 
    for (int x : result) cout << x << " ";
    cout << "\n";
}
 
int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    // cin >> t;
    while (t--) solve();
    return 0;
}
