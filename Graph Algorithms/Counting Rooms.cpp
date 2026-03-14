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
    int n,m;
    cin>>n>>m;
    vector<vector<char>> gd(n, vector<char>(m));
    vector<vector<bool>> vis(n, vector<bool>(m, false));
 
 
    queue<pair<int,int>> q;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin>>gd[i][j];
            if(gd[i][j]=='.') {
                q.push({i,j});
            }
        }
    }
 
    int dx[] = {-1,0,0,1};
    int dy[] = {0,-1,1,0};
 
    int cnt=0;
        for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (gd[i][j] == '.' && !vis[i][j]) {
                cnt++; 
                queue<pair<int, int>> q;
                q.push({i, j});
                vis[i][j] = true;
 
                while (!q.empty()) {
                    auto point = q.front(); q.pop();
                    int x = point.first;
                    int y = point.second;
                    for (int d = 0; d < 4; d++) {
                        int nx = x + dx[d];
                        int ny = y + dy[d];
                        if (nx >= 0 && nx < n && ny >= 0 && ny < m &&
                            gd[nx][ny] == '.' && !vis[nx][ny]) {
                            vis[nx][ny] = true;
                            q.push({nx, ny});
                        }
                    }
                }
            }
        }
    }
    cout<<cnt<<endl;
 
}
 
int32_t main() {
    fastio();solve();
    return 0;
}
