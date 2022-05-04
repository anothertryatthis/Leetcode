class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int m = accounts.size();
        int n = accounts[0].size();
        int max = 0;
        
        for(int i = 0; i < m; i++){
            int tmp = 0;
            for(int j = 0; j < n; j++){
                tmp = tmp + accounts[i][j];
            }
            
            if(tmp > max){
                max = tmp;
            }
        }
        
        return max;
    }
};

//New one

