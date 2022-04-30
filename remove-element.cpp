//easy solution

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != val){
                nums[count] = nums[i];
                count++;
            }
        }
        
        return count;
    }
};

//Using two pointers

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count = 0, n = nums.size();
        while(count < n){
            if(nums[count] == val){
                nums[count] = nums[n-1];
                n--;
            }
            else{
                count++;
            }
        }
        
        return n;
    }
};
