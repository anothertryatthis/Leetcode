// SC = O(N); TC = O(N)

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        for(int i = 0; i < n; i++){
            ans[i] = nums[nums[i]];
        }
        return ans;
    }
};

// TC = O(N); SC = O(1)

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n = nums.size();
        
        for(int i = 0; i < n; i++){
            nums[i] = nums[i] + (n * (nums[nums[i]] % n));
        }
        
        for(int i = 0; i < n; i++){
            nums[i] /= n;
        }
        return nums;
    }
};
