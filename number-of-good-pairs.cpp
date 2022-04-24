class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count = 0;
        
        for(int i = 0; i < nums.size()-1; i++){
            for(int j = i + 1; j < nums.size(); j++){
                if(nums[i] == nums [j]){
                    count = count + 1;
                }
            }
        }
        
        return count;
    }
};

//Using maps

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int res = 0;
        unordered_map<int, int> count;
        for (int a: nums) {
            res += count[a]++;
        }
        return res;
    }
};

