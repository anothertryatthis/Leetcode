class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> s;
        unordered_set<int> x(nums1.begin(), nums1.end());
        
        for(int i = 0; i < nums2.size(); i++){
            int temp = nums2[i];
            
            if(x.find(temp) != x.end()){
                s.push_back(temp);
                x.erase(temp);
            }
        }
        
        return s;
    }
};
