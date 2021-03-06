class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        unordered_map<int, char> m;
        
        for (int i = 0; i < nums1.size(); i++) 
            m[nums1[i]] |= 1;
        
        for (int i = 0; i < nums2.size(); i++) 
            m[nums2[i]] |= 2;
        
        for (int i = 0; i < nums3.size(); i++) 
            m[nums3[i]] |= 4;
        
        vector<int> res;
        for (auto [num, count] : m) {
            if ((!!(count & 1) + !!(count & 2) + !!(count & 4)) >= 2) 
                res.push_back(num);
        }
        
        return res;
    }
};


//Bit

class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        vector<int>f(110, 0);
        for (int n : nums1) f[n] |= 1<<0;
        for (int n : nums2) f[n] |= 1<<1;
        for (int n : nums3) f[n] |= 1<<2;
        
        vector<int>ret;
        for (int i = 1; i <= 100; i++) if (f[i] == 3 || f[i] >= 5) ret.push_back(i);
        return ret;
    }
};
