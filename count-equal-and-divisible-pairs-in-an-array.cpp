//Brute Force

class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        
        int count = 0;
        for(int i = 0; i < nums.size(); i++){
            for(int j = i + 1; j < nums.size(); j++){
                if((nums[i] == nums[j]) && ((i * j) % k) == 0){
                    count = count + 1;
                }
            }    
        }
        return count;
    }
};

//Optimized but with SC tradeoff

class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        unordered_map<int,vector<int>> umap;
        int count = 0;
        for(int i = 0; i < nums.size(); i++) 
        {
            if(umap.find(nums[i]) != umap.end()) 
            {
                for(auto x : umap[nums[i]]) 
                    if((i * x) % k == 0)
                        count++;
            }
            
            umap[nums[i]].push_back(i);
        }
        return count;
    }
};
