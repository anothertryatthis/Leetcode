class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> x;
        for(auto i : nums){
            x[i]++;
        }
        vector<int> ans;
        priority_queue<pair<int, int>> pq;
        
        for(auto i : x){
            pq.push(make_pair(i.second, i.first));
            if(pq.size() > (int)x.size() - k){
                ans.push_back(pq.top().second);
                pq.pop();

            }
        }
        return ans;
    }
};
