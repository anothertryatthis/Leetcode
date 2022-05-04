class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>out;
        for(int i = 0; i < nums1.size(); i++)
        {
            for(int j = 0; j < nums2.size(); j++)
            {
                if(nums1[i] == nums2[j])
                {
                    int max_val = -1;
                    for(int k = j; k < nums2.size(); k++)
                    {
                        if(nums2[k] > nums2[j])
                        {
                            max_val = nums2[k];
                            break;
                        }   
                    }
                    out.push_back(max_val);
                }
            }
        }
        return out;
    }
};

//Using stack and unordered set

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
               
        stack<int>st;
        unordered_map<int,int>mp; 
        for(int i=nums2.size()-1;i>=0;i--)
        {
            while(!st.empty() && st.top()<=nums2[i])
            {
                st.pop();
            }
            if(st.empty())
                mp[nums2[i]]=-1;
            else
                mp[nums2[i]]=st.top();
        
            st.push(nums2[i]);
        }
        vector<int>out;
        for(int i=0;i<nums1.size();i++)
        {
            out.push_back(mp[nums1[i]]);
        }
        return out;
        
    }
};
