class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        unordered_map<int,int> m;
        int n = lowLimit - highLimit + 1, max = 0;
        for(int i = lowLimit; i <= highLimit; i++){
            int k = i, sum = 0;
            while(k != 0){
                sum += (k%10);
                k /= 10;
            }
            m[sum]++;
        }
        
        for(auto i : m){
            if((i.second) > max){
                max = (i.second);
            }
        }
        return max;
    }
};

//Since max number can be 99999 -> max sum can be 45

class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        int cnt[46] = {};
        for (auto i = lowLimit; i <= highLimit; ++i) {
            int sum = 0, n = i;
            while(n) {
                sum += n % 10;
                n /= 10; 
            }
            ++cnt[sum];
        }
        return *max_element(begin(cnt), end(cnt));
    }
};
