#include <bits/stdc++.h>

using namespace std;

typedef long long      ll;
typedef pair<int,int> pii;
typedef vector<int>    vi;

template<typename T>
void inputVec(vector<T> &v, int n) {
    v.resize(n);
    for (auto &x : v) cin >> x;
}
#define initv(v, n, T)  vector<T> v; inputVec(v, n)
#define all(x)      (x).begin(), (x).end()

const int    MOD  = 1e9 + 7;
const int    MOD2 = 998244353;

void panku0101() {
    int n; cin >> n;
    initv(arr, n, int);

    set<int> vis;
    int l = 0;
    ll cnt = 0;

    for(int r = 0; r < n; r++) {
        while(vis.count(arr[r])) {
            vis.erase(arr[l]);
            l++;
        }

        cnt += r - l + 1;
        vis.insert(arr[r]);
    }

    cout << cnt << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    //cin >> t;
    while (t--) panku0101();
    return 0;
}