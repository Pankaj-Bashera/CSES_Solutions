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
    int n;
    cin >> n;

    initv(arr, n, int);
    multiset<int> ms;

    for(int i : arr) {
        auto it = ms.upper_bound(i);

        if(it != ms.end()) {
            ms.erase(it);
        }
        ms.insert(i);
    }

    cout << ms.size();
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    //cin >> t;
    while (t--) panku0101();
    return 0;
}