class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int x = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i]!=0){
                nums[x++] = nums[i];
            }
        }
        for(;x < nums.size(); x++){
            nums[x] = 0;
        }
    }
};
