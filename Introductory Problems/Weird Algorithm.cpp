#include <iostream> 
using namespace std;
 
int main(){
    long long n;
    cin>>n;
 
    cout<<n<<" ";
    while(n!=1) {
        if(n%2==0) {
            n/= 2;
        } else {
            n = n*3+1;
        }
        if(n==1) {
            cout<<1<<endl;
            return 0;
        }
        cout<<n<<" ";
    }
    return 0;
}
