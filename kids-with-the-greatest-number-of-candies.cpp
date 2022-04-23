class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans(candies.size());
        int res, max = 0;
        
        for(int i = 0; i < candies.size(); i++){
            if(candies[i] > max){
                max = candies[i];
            }
        }
        
        res = max - extraCandies;
        
        for(int i = 0; i < candies.size(); i++){
            if(candies[i] >= res){
                ans[i] = true;
            }
            
            else{
                ans[i] = false;
            }
        }
        
        return ans;
    }
};
