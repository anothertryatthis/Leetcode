//BRUTE FORCE
class Solution {
public:
    void reverseString(vector<char>& s) {
        reverse(s.begin(), s.end());  
    }
};


//Better solution
class Solution {
public:
    void reverseString(vector<char>& s) {
        int i = 0, j = s.size() - 1;
        while(i < j){
            char temp = s[i];
            s[i] = s[j];
            s[j] = temp;
            i += 1;
            j -= 1;
        }
    }
}
