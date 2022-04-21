class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> x;
        for(int i = 0; i < n; i++){
            x.push_back(nums[i]);
            x.push_back(nums[n + i]);
        }
        return x;
    }
};


//Optimized solution

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
        for(int i = n; i < 2*n; i++){
            nums[i] = 1024 * nums[i] + nums[i - n];
        }
        
        int flag = 0;
        
        for(int i = n; i < 2*n; i++, flag += 2){
            nums[flag] = nums[i] % 1024;
            nums[flag + 1] = nums[i] / 1024;
        }
        return nums;
    }
};

