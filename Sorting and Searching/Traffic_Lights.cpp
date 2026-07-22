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
    int p, n;
    cin >> p >> n;

    set<int> st;
    multiset<int> slt;
    st.insert(0);
    st.insert(p);
    slt.insert(p);

    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        // insert
        st.insert(a);

        // pred and succ;
        auto it = st.find(a);
        auto prv = prev(it);
        auto nxt = next(it);

        int pred = *prv;
        int succ = *nxt;

        // remove dist
        int d = succ - pred;
        slt.erase(slt.find(d));

        // insert new dist
        int x = a - pred;
        int y = succ -a;

        slt.insert(x);
        slt.insert(y);

        cout << *prev(slt.end()) << ' ' ;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    //cin >> t;
    while (t--) panku0101();
    return 0;
}