#include <bits/stdc++.h>
using namespace std;
 
#define all(x) (x).begin(), (x).end()
#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
 
const int MOD = 1e9 + 7;
const int INF = 1e18;
 
void solve() {
    int n;
    cin>>n;
 
    for(int i=1; i<=n; i++) {
        int total = ((i*i)*(i*i-1))/2;
        int attacking = 4*(i-1)*(i-2);
 
        int safe = total-attacking;
        cout<<safe<<endl;
    }
}
 
int32_t main() {
    fastio();solve();
    return 0;
}
