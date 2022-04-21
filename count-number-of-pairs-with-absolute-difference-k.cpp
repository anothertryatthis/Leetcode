class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int ans[101] = {}, sum = 0;
        
        for(int i = 0; i < nums.size(); i++){
            ans[nums[i]]++;
        }
        
        for(int i = k + 1; i < 101; ++i){
            sum += ans[i] * ans[i - k];
        }
            
        return sum;
    }
};
