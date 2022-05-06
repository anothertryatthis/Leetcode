class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int, int> m;
        if(n == 1)
            return true;
        
        while(n != 1){
            if(m[n] == 0){
                m[n]++;
            }
            else
                return false;
            int sum = 0;
            while(n != 0){
                sum = sum + ((n%10) * (n%10));
                n = n/10;
            }
            
            n = sum;
            
        }
        
        return true;
        
    }
};

//Floyd's Cycle detection algorithm

class Solution {
public:
    int next(int n)
    {
        int sum = 0;
        
        while(n != 0)
        {
            sum += pow(n % 10,2);
            n = n / 10;
        }
        
        return sum;
    }

public:
    bool isHappy(int n) {
        int slow = next(n);
        int fast = next(next(n));
        
        while(slow != fast)
        {
            slow = next(slow);
            fast = next(next(fast));
        }
        
        return fast == 1 ;
    }
};
