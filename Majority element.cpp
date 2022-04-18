class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        
        int k;
        
        for(int i = 0; i < nums.size(); i++){
            m[nums[i]]++;
        }
        
        for(auto j:m){
            if(j.second > (nums.size()/2)){
                k = j.first;
            }
        }
        return k;
    }
};




//BETTER SOLUTION USING BOYER-MOORE'S VOTING ALGORITHM

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majority, count = 0;
        for(int i = 0; i < nums.size(); i++){
            if(count == 0){
                majority = nums[i];
            }
            if(majority == nums[i]) count++;
            else count--;
        }
        return majority;
    }
};
