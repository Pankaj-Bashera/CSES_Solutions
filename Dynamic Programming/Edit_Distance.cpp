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
#define eb          emplace_back
#define mp          make_pair
#define all(x)      (x).begin(), (x).end()
#define rall(x)     (x).rbegin(), (x).rend()
#define sz(x)       (int)(x).size()
#define F           first
#define S           second

#define FOR(i, a, b)    for (int i = (a); i < (b); i++)
#define FORR(i, a, b)   for (int i = (a); i >= (b); i--)
#define REP(i, n)       FOR(i, 0, n)
#define REPR(i, n)      FORR(i, (n)-1, 0)
#define FORE(x, v)      for (auto &x : v)
#define FORP(i,j,n,m)   for(int i=0;i<(n);i++) for(int j=0;j<(m);j++)


#define endl        '\n'
#define yes         cout << "Yes\n"
#define no          cout << "No\n"
#define print(x)    cout << (x) << '\n'
#define debug(x)    cerr << #x << " = " << (x) << '\n'
#define debugv(v)   cerr<<#v<<": ";for(auto&_x:(v))cerr<<_x<<" ";cerr<<'\n'

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
    string s, t;
    cin >> s >> t;

    int n = sz(s), m = sz(t);

    vvi dp(n + 1, vi(m + 1, 0));
    FOR(i, 0, m + 1) {
        dp[0][i] = i;
    }

    FOR(i, 0, n + 1) {
        dp[i][0] = i;
    }

    FOR(i, 1 , n + 1) {
        FOR(j, 1, m + 1) {
            if(s[i - 1] == t[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1];
            } else {
                dp[i][j] = 1 + min({dp[i - 1][j - 1], dp[i - 1][j], dp[i][j - 1]});
            }
        }
    }

    print(dp[n][m]);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // cin >> t;
    while (t--) panku0101();
    return 0;
}