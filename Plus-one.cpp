class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int s = digits.size();
        
        if(digits[s-1] != 9){
            digits[s-1]++;
            return digits;
        }
        
        else{
            int count = 1;
            int sl = s-1;
            
            while(sl >= 0){
                if(digits[sl] + count == 10)
                  {
                    digits[sl] = 0;
                    count = 1;
                }
                else{
                    digits[sl] = digits[sl] + count;
                    count = 0;
                    break;
                }
                sl--;
            }
        
            if(count == 1){
                digits.insert(digits.begin(), 1);
            }
        }
        return digits;
    }
};
