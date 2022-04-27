//Brute force - Time limit exceeded

class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int ma = 0;
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                ma = max(ma, min(height[i], height[j]) * (j - i));
            }
        }
        return ma;
    }
};

//O(N) Solution

class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size() - 1, l = 0;
        int ma = 0;
        
        while(l < n){
            ma = max(ma, min(height[l], height[n]) * (n - l));
            if (height[l] < height[n]){
                l++;
            }
            else{
                n--;
            }
        }
        return ma;
    }
};
