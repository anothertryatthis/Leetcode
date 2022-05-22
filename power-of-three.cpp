public boolean isPowerOfThree(int n) {
         
        while(n>=3){
            if(n%3!=0) return false;
            n/=3;
        }
        return n==1;
    }

//largest power of 3 method

class Solution {
public:
    bool isPowerOfThree(int n) {
        return (n>0 && 1162261467%n == 0);
    }
};
