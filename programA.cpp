#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;

    cin>>t;
    while(t--){
        long long n, x, y, z;
        cin>>n>>x>>y>>z;
        long long timeTakenWithoutAI = (n+x+y-1)/(x+y);
        long long timeTakenWithAI = 0;
        long long timeTakenDuringSetUp = (n+x-1)/x;
        //afer maxim
        if(timeTakenDuringSetUp<=z){
            timeTakenWithAI = timeTakenDuringSetUp;
        } else {
            timeTakenWithAI = z + (n-x*z + (x + 10 * y) - 1) / (x + 10 * y);
        }
        cout<<min(timeTakenWithAI, timeTakenWithoutAI)<<endl;
    }
}
