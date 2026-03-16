#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main(){
    string s;
    cin>>s;
 
    int cnt = 1;
    int maxcnt = 1;
 
    int n = s.size();
    for(int i=1; i<n; i++) {
        if(s[i]==s[i-1]) {
            cnt++;
        } else {
            maxcnt = max(maxcnt, cnt);
            cnt = 1;
        }
    }
    maxcnt = max(maxcnt, cnt);
 
    cout<<maxcnt<<"\n";
    return 0;
}
