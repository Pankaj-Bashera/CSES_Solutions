#include <bits/stdc++.h>
using namespace std;
 
#define int long long 
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
 
const int MOD = 1e9 + 7;
const int INF = 1e18;
 
void solve() {
    int n;
    cin>>n;
 
    vector<int> arr(n);
    for(auto& i: arr) cin>>i;
 
    set<int> s;
    for(int num: arr) {
        s.insert(num);
    }
 
    cout<<s.size()<<endl;
}
 
int32_t main() {
    fastio();solve();
    return 0;
}
