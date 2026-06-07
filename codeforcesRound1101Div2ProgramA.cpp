#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;

    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i = 0; i<n; i++){
            cin>>a[i];
        }
        sort(a.begin(), a.end(), greater<int>());
        if(n == 2) cout<<a[0]<<" "<<a[1]<<endl;
        else{
            bool check = true;
            for(int i = 0; i<n-2; i++){
                int x = a[i];
                int y = a[i+1];
                int remainder = x%y;
                if(remainder != a[i+2]){
                    check = false;
                    break;
                }
            }
            if(!check) cout<<-1<<endl;
            else{
                cout<<a[0]<<" "<<a[1]<<endl;
            }
        }

    }
}
