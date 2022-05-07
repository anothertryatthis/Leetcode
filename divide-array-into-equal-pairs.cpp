class Solution {
public:
    bool divideArray(vector<int>& nums) {
        map<int, int> x;
        int count = 0, n = nums.size();
        for(int i = 0; i < n; i++){
            x[nums[i]]++;
        }
        
        for(auto j : x){
            count = count + j.second/2;
        }
        return count == n/2;
    }
};

//Using sorting (TC = nlogn; SC = 1)

class Solution {
public:
    bool divideArray(vector<int>& nums) 
    {
        int n =nums.size();
        sort(nums.begin(), nums.end());
        int i=1;
        while(i<n)
        {
            if(nums[i-1] != nums[i])
                return false;
            i = i+2;
        }
        return true;
        
    }
};
