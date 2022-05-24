class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        map<pair<int,int>,int> seen;
        int result = 0;
        for(auto& v:dominoes){
            if(v[0] > v[1]){
                swap(v[0], v[1]);
            }
            result += seen[make_pair(v[0],v[1])]++;
        }
        return result;
    }
};

//Algorithm: Using the limit of digit as 9, clubbing it in binary

class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        unordered_map<int, int> dict;
        int count = 0;
        for (vector<int> d: dominoes) {
            int a = (d[0] << 4) | d[1], b = (d[1] << 4) | d[0];
            count += (a == b ? 0 : dict[b]) + dict[a]++;
        }
        return count;
    }
};
