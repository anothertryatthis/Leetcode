//Bad solution 

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        
        for(int i = 0; i < nums.size() - 1; i++){
            for(int j = i + 1; j < nums.size(); j++){
                if(nums[i] + nums [j] == target){
                    ans.push_back(i);
                    ans.push_back(j);
                }
            }
        }
        
        return ans;
    }
};

//Optimized solution

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        
        for(int i = 0; i < nums.size(); i++){
            int c = target - nums[i];
            if(m.find(c) != m.end()){
                return {m[c], i};
            }
            m[nums[i]] = i;
        }
        return {};
    }
};
