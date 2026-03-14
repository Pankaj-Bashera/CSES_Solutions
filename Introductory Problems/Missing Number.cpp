#include <iostream>
#include <iomanip>
#include <vector>
 
using namespace std;
 
int main(){
    long long n;
    cin>>n;
 
    vector<long long> arr(n-1);
    long long sum = 0;
 
    for(int i=0; i<n-1; i++) {
        cin>>arr[i];
        sum += arr[i];
    }
 
    cout<< (n*(n+1)/2) - sum << "\n";

    return 0;
}
