class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        map<int, int> x;
        int sum = 0;
        for(int i = 0; i < nums.size(); i++){
            x[nums[i]]++;
        }
        for(int i = 0; i < nums.size(); i++){
            if(x[nums[i]] == 1){
                sum = sum + nums[i];
            }
        }
        
        return sum;
    }
};

//Shorter version

int sumOfUnique(vector<int>& nums) {
    unordered_map<int, int> m;
    int res = 0;
    for (auto n : nums) {
        int cnt = ++m[n];
        res += cnt == 1 ? n : cnt == 2 ? -n : 0;
    }
    return res;
}
