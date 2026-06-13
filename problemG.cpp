#include<bits/stdc++.h>
long long gcd(long long a, long long b){
    return b ? gcd(b, a % b) : a;
}
using namespace std;
int main() {
    int T;
    cin>>T;
    while(T--){
        long long n, a, b;
        cin>>n>>a>>b;
        cout<<max(a, b)/gcd(a, b)<<endl;
    }
}
