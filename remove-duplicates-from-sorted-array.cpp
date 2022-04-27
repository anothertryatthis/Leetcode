class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int ans = 0;
        if(nums.size() == 0){
            return 0;
        }
        
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] != nums[i-1]){
                ans = ans + 1;
                nums[ans] = nums[i];
            }
        }
        return ans + 1;
    }
};
