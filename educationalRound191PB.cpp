#include<bits/stdc++.h>
using namespace std;
vector<int> constructArray(int n) {
    vector<int> nums(4 * n);
    for (int i = 0; i < n; ++i) {
        nums[i] = i + 1;
    }
    for (int i = 0; i < n; ++i) {
        nums[n + i] = n - i;
    }
    for (int i = 0; i < n; ++i) {
        nums[2 * n + i] = i + 1;
    }
    for (int i = 0; i < n; ++i) {
        nums[3 * n + i] = i + 1;
    }
    if (n % 2 != 0) {
        int mid_val = (n + 1) / 2;
        if (n > 1) {
            int target_idx = 3 * n + (mid_val - 1);
            swap(nums[target_idx], nums[target_idx == 4 * n - 1 ? target_idx - 1 : target_idx + 1]);
        }
    }
    return nums;
}
    int main(){
        int t;
        cin>>t;
        while(t--){
            
        }
    }
