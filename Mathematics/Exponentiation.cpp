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
 
long long fastExpo(long long base, long long exp, long long mod=MOD) {
    long long res = 1;
    while (exp > 0) {
        if (exp & 1) res = (res * base) % mod;
        base = (base * base) % mod;
        exp >>= 1;
    }
    return res;
}
 
 
void solve() {
    ll a,b;
    cin>>a>>b;
    cout << fastExpo(a,b) << '\n';
}
 
int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    cin >> t;
    while (t--) solve();
    return 0;
