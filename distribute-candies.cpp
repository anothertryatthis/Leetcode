class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n = candyType.size();
        unordered_map<int, int> x;
        
        for(int i = 0; i < n; i++){
            x[candyType[i]]++;
        }
        
        int maxCan = n / 2, m = x.size();
        if(m < maxCan){
            maxCan = m;
        }
        return maxCan;
        
    }
};

//Using Bitset

class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        bitset<200001> hash;
        
        for (int i: candyType)
           hash.set(i + 100000);
        
        return min(hash.count(), candyType.size() / 2);
        
    }
};
