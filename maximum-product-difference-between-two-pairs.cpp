// Easy solution

class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        
        int n = nums.size();
        sort(nums.begin(), nums.end());
        
        return ((nums[n-1] * nums[n-2]) - (nums[0] * nums[1]));
        
    }
};

//O(N) solution

class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        
        int max1 = 0, max2 = 0, min1 = 10001, min2 = 10001;
        
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > max1){
                max2 = max1;
                max1 = nums[i];
            }
            else if(nums[i] > max2){
                max2 = nums[i];
            }
            if(nums[i] < min1){
                min2 = min1;
                min1 = nums[i];
            }
            else if(nums[i] < min2){
                min2 = nums[i];
            }
        }
        
        return ((max1 * max2) - (min1 * min2));
    }
};
