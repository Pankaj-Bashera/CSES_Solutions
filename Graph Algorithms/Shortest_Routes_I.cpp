#include <bits/stdc++.h>
using namespace std;

typedef long long           ll;
typedef unsigned long long  ull;
typedef long double         ld;
typedef pair<int,int>       pii;
typedef pair<ll,ll>         pll;
typedef pair<ll,int>        pli;
typedef vector<int>         vi;
typedef vector<ll>          vll;
typedef vector<pii>         vpii;
typedef vector<vector<int>> vvi;


#define pb          push_back
#define FOR(i, a, b)    for (int i = (a); i < (b); i++)
#define REP(i, n)       FOR(i, 0, n)


const int    MOD  = 1e9 + 7;
const int    MOD2 = 998244353;

template<typename T>
void inputVec(vector<T> &v, int n) {
    v.resize(n);
    for (auto &x : v) cin >> x;
}
#define initv(v, n, T)  vector<T> v; inputVec(v, n)
#define initvv(v, n, m, T) \
    vector<vector<T>> v(n, vector<T>(m)); \
    for(auto &_r:v) for(auto &_x:_r) cin>>_x

template<typename T> bool chmin(T &a, T b)  { return b < a ? a=b,1 : 0; }
template<typename T> bool chmax(T &a, T b)  { return b > a ? a=b,1 : 0; }

void panku0101() {
    int n, m;
    cin >> n >> m;

    vector<vector<pair<int,int>>> adj(n + 1);
    REP(i, m) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].pb({v, w});
    }

    vector<ll> dist(n + 1, LLONG_MAX);
    priority_queue<pli, vector<pli>, greater<pli>> pq;
    pq.push({0, 1});
    dist[1] = 0;


    while(!pq.empty()) {
        auto [d, u] = pq.top();
        pq.pop();

        if(d > dist[u]) continue;

        for(auto [v, w]: adj[u]) {
            if(dist[v] > dist[u] + w) {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }

    FOR(i, 1, n + 1) {
        cout << dist[i] << " ";
    }

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // cin >> t;
    while (t--) panku0101();
    return 0;
}