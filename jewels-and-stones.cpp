//Easy approach O(N)

int numJewelsInStones(string jewels, string stones) {
    int num = 0;
    for (int i = 0; i < jewels.size(); i++){
        num += count(stones.begin(), stones.end(), jewels[i]);
    }
    return num;
}

//Optimal solution

class Solution {
public:
    bool list[58];
    int numJewelsInStones(string jewels, string stones) {
        
        int res = 0;
        unordered_set<char> n(jewels.begin(), jewels.end());
        
        for(char c : stones){
            if(n.count(c))
                res += 1;
        }
        
        return res;
    }
};

//Using ASCII (fastest)

class Solution {
public:
    
    bool list[58];
    
    int numJewelsInStones(string J, string S) {
        int cnt=0;
                
        for(int i=0; i < J.size(); i++)
            list[J[i]-65]=true;
        
        for(int i=0; i < S.size(); i++)
            if(list[S[i]-65])
                cnt++;
        
        return cnt;
    }
};
