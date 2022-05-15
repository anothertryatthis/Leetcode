class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int> s1, s2;
        
        for(auto it:nums1)
            s1.insert(it);
        
        for(auto it:nums2)
            s2.insert(it);
        
        vector<vector<int>> ans(2);
        
        for(auto it : s1)
        {
            if(s2.count(it) == 0)
                ans[0].push_back(it);
        }
        
        for(auto it : s2)
        {
            if(s1.count(it) == 0)
                ans[1].push_back(it);
        }
        
        return ans;
    }
};

//Better way of writing

class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> sa(begin(nums1), end(nums1)), sb(begin(nums2), end(nums2));
        vector<vector<int>> ans(2);
        for (int n : sa) {
            if (sb.count(n) == 0) ans[0].push_back(n);
        }
        for (int n : sb) {
            if (sa.count(n) == 0) ans[1].push_back(n);
        }
        return ans;
    }
};

//Using Bit-set

class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        bitset<2048> s1;
        for (int num : nums1) s1.set(num + 1024);
        bitset<2048> s2;
        for (int num : nums2) s2.set(num + 1024);
        
        vector<vector<int>> ans(2);
        for (int i = 0; i < size(s1); ++i) {
            const int p1 = s1.test(i);
            const int p2 = s2.test(i);
            if (p1 && !p2) {
                ans[0].push_back(i - 1024);
            } else if (!p1 && p2) {
                ans[1].push_back(i - 1024);
            }
        }
        return ans;
    }
};
