class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int miss = 0, i = 0;
        for(auto x : nums){
            miss = miss + (++i) - x;
        }
        return miss;
    }
};

//Bit manipulation - XOR

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int result = nums.size();
        int i=0;
        
        for(int num:nums){
            result ^= num;
            result ^= i;
            i++;
        }
        
        return result;
    }
};

