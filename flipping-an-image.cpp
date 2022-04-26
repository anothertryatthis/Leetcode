//Easy solution

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        vector<vector<int>> ans;
        int n = image.size();
        for(int i = 0; i < n; i++){
            vector<int> temp;
            for(int j = n-1; j >= 0; j--){
                temp.push_back(image[i][j]);
            }
            ans.push_back(temp);
        }
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(ans[i][j] == 0){
                    ans[i][j] = 1;
                }
                else if(ans[i][j] == 1){
                    ans[i][j] = 0;
                }
            }
        }
        return ans;
    }
};

//Optimized solution

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        for (int i=0; i<A.size(); i++) {
            reverse(A[i].begin(), A[i].end());
            for (int j=0; j<A[i].size(); j++) {
                A[i][j] ^= 0x1;
            }
        }
        return A;
    }
};
