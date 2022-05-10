//Probably the best solution

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int, int> m;
        set<int> s;
        for(auto i : arr){
            m[i]++;
        }
        int n = m.size();
        for(auto i : m){
            s.insert(i.second);
        }
        if(n == s.size()){
            return true;
        }
        else
            return false;
    }
};
