class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        int ans = 0;
        int maxFrequency = INT_MIN;
        unordered_map<int,vector<int>> m;
        
        for(int i = 0; i < nums.size(); i++) {
            m[nums[i]].push_back(i);
        }
        
        for(auto& p : m) {
           int frequency = p.second.size();
           int len = p.second.back()-p.second.front()+1;
           if (frequency > maxFrequency) {
               maxFrequency = frequency;
               ans = len;
           }
           else if(frequency == maxFrequency) {
               ans = min(ans,len);
           }
        }
        return ans;
    }
};

//Better SC, worse TC

class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        int cnt[50000][2]; 
        memset(cnt, -1, sizeof(cnt));
        int maxFreq = 0, minLen = INT_MAX;
    
        for(int i = 0; i < nums.size(); i++) {
            if(cnt[nums[i]][0] == -1)
                cnt[nums[i]][0] = i, cnt[nums[i]][1] = 1; 
            else
                cnt[nums[i]][1]++;
            if(cnt[nums[i]][1] > maxFreq)
                maxFreq = cnt[nums[i]][1], minLen = i - cnt[nums[i]][0] + 1;
            else if (cnt[nums[i]][1] == maxFreq)
                minLen = min(minLen, i - cnt[nums[i]][0] + 1);
        }
        return minLen;
    }
};
