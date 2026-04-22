#include <bits/stdc++.h>
#include <chrono>
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
 
#ifdef LOCAL
    #define TIME_START auto __start = chrono::high_resolution_clock::now();
    #define TIME_END   auto __end = chrono::high_resolution_clock::now(); \
                       cerr << "Time: " \
                            << chrono::duration_cast<chrono::milliseconds>(__end - __start).count() \
                            << " ms\n";
#else
    #define TIME_START
    #define TIME_END
#endif
 
 
using pii = pair<int,int>;
using pli = pair<ll,int>;
const int MOD = 1e9 + 7;
const int inf = INT_MAX;
const ll INF = LLONG_MAX;
 
void panku0101() {
    ll a,b;
    cin >> a >> b;
 
    ll sum = a + b;
    if(sum % 3 == 0 && max(a, b) <= 2 * min(a, b)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    cin >> t;
    while (t--) panku0101();
    return 0;
}
