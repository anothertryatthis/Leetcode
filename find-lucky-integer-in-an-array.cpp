class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> x;
        vector<int> ans;
        int mx = -1;
        for(int i = 0; i < arr.size(); i++){
            x[arr[i]]++;
        }
        
        for(auto i : x){
            if(i.first == i.second){
                ans.insert(ans.begin(), i.first);
            }
        }
        
        if(ans.size() > 0){
            mx = *max_element(ans.begin(), ans.end());
            return mx;
        }
        else
            return -1;
        
    }
};

//Precise

class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> x;
        int mx = -1;
        for(int i = 0; i < arr.size(); i++){
            x[arr[i]]++;
        }
        for(auto i : x){
            if(i.first == i.second){
                mx = max(i.first, mx);
            }
        }
        return mx;
    }
};
