#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main(){
    long long n;
    cin>>n;
    vector<long long> arr(n);
 
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
 
    long long diff = 0;
    for(int i=1; i<n; i++) {
        if(arr[i] < arr[i-1]) {
            diff += arr[i-1]-arr[i];
            arr[i] = arr[i-1];
        }
    }
    cout<<diff<<"\n";
 
    
    return 0;
}
