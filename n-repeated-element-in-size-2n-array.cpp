class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        vector<int> x(10000);
        int m;
        for(int i : nums){
            x[i]++;
            if(x[i] > 1){
                m = i;
                break;
            }
        }
        return m;
    }
};


//Pigeonhole principle

class Solution {
public:
    int repeatedNTimes(vector<int>&nums) {
        for (int i = 0; i < nums.size() - 2; ++i)
            if (nums[i] == nums[i + 1] || nums[i] == nums[i + 2])
                return nums[i];
        return nums.back(); 
    }
};

//using probability

class Solution {
public:
    int repeatedNTimes(vector<int>&nums) {
        int i = 0, j = 0;
        while(nums[i = rand() % nums.size()] != nums[j = rand() % nums.size()] || i == j);
        return nums[i];
    }
};
