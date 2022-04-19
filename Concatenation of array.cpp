class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        nums.resize(2*n);
        
        for(int i = 0; i < n; i++){
            nums[i+n] = nums[i];
        }
        return nums;
    }
};


//ENHANCED SOLUTION

class Solution {
public:
        short int size = 0;
        vector<int> getConcatenation(vector<int>& nums) {
            if(size==0){
                    size = nums.size();
            }
            if( nums.size() == 2*size)
                    return nums;
            else{
                nums.push_back(nums[nums.size()-size]);
                return getConcatenation(nums);
            }
      }
};
