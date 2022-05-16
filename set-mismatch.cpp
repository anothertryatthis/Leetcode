class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> x(10001);
        vector<int> ans(2);
        for(auto i : nums)
            x[i]++;
        for(int i = 1; i < x.size() + 1; i++){
            if(x[i] == 2){
                ans[0] = i;
                break;
            }
        }
        for(int i = 1; i < x.size() + 1; i++){
            if(x[i] == 0){
                ans[1] = i;
                break;
            }
        }
        return ans;
        
    }
};

//Better sc but worse tc

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int len = nums.size();
        bool seen[len + 1];
        vector<int> res(2);

        for (int i = 1; i <= len; i++) 
            seen[i] = false;

        for (int i: nums)
            seen[i] = (!seen[i] || bool(1 + (res[0] = i)));
        for (int i = 1; i <= len; i++) 
            if (!seen[i]) 
                return res[1] = i, res;
        return res;
    }
};

//Better SC and TC

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int len = nums.size(), dup, mis;
        for ( int index = 0; index < len; ++index )
        {
            if ( nums[abs(nums[index]) - 1] < 0 )
                dup = abs(nums[index]);
            else nums[abs(nums[index]) - 1] *= -1;
        }
        
        for ( int index = 0; index < len; ++index )
        {
            if ( nums[index] > 0 )
            {
                mis = index + 1;
                break;
            }
        }
        return {dup, mis};
    }
};

//Cyclic sort (Best SC and great TC)

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> result(2, -1); 
        for(int i=0; i<nums.size(); ++i){
            while(nums[i] != i+1){
                if(nums[i] == nums[nums[i]-1]){
                    result[0] = nums[i];
                    result[1] = i+1; 
                    break; 
                }else      
                    swap(nums[i], nums[nums[i]-1]); 
            }
        }
        return result; 
    }
};
