// TC = O(N) SC = O(N)

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> x;
        
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] % 2 == 0){
                x.push_back(nums[i]);
            }
        }
        
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] % 2 != 0){
                x.push_back(nums[i]);
            }
        }
        return x;
    }
};

// TC = O(N) SC = O(1) -> In-place -> Somehow time limit exceeded

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int i = 0, j = nums.size() - 1;
        
        while(i < j){
            if(nums[i] % 2 > nums[j] % 2){
                int tmp = nums[i];
                nums[i] = nums[j];
                nums[j] = tmp;
            }
            
            if(nums[i] % 2 == 0) i++;
            if(nums[j] % 2 == 0) j++;
        }
        return nums;
    }
};

//Another in-place

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int j = 0;
        
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] % 2 == 0){
                swap(nums[i], nums[j]);
                j++;
		        }
	      }
        return nums;
    }
};
