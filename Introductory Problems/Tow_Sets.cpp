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
 
using pii = pair<int,int>;
using pli = pair<ll,int>;
const int MOD = 1e9 + 7;
const int inf = INT_MAX;
const ll INF = LLONG_MAX;
 
void panku0101() {
    int n; cin >> n;
 
    long long sum = 1LL*n*(n+1)/2;
    if(sum % 2) {
        cout << "NO\n";
        return;
    }
 
    cout << "YES\n";
 
    vector<int> A, B;
 
    if(n % 4 == 0) {
        for(int i = 1; i <= n; i += 4) {
            A.push_back(i);
            A.push_back(i+3);
            B.push_back(i+1);
            B.push_back(i+2);
        }
    }
    else { 
        A = {1,2};
        B = {3};
        for(int i = 4; i <= n; i += 4) {
            A.push_back(i);
            A.push_back(i+3);
            B.push_back(i+1);
            B.push_back(i+2);
        }
    }
 
    cout << A.size() << '\n';
    for(int x:A) cout<<x<<" ";
    cout << '\n';
 
    cout << B.size() << '\n';
    for(int x:B) cout<<x<<" ";
    cout << '\n';
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
