#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <string>
#include <queue>
#include <stack>
#include <climits>
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
 
void panku0101() {
    int n,q;
    cin>>n>>q;
 
    initv(a, n, int);
    vector<ll> ps(n+1, 0);
    for(int i=0; i<n; i++) {
        ps[i+1] = 1ll*ps[i]+1ll*a[i];
    }
    while(q--) {
        int l,r;
        cin>>l>>r;
 
        cout << ps[r]-ps[l-1] << '\n';
    }
}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    //cin >> t;
    while (t--) panku0101();
    return 0;
}
