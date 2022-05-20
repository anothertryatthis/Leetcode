class Solution {
public:
    string sortSentence(string s) {
        vector<string>pos(10,"");
        
        for(int i=0; i<s.size(); i++){
            int j = i;
            string temp;
            while(!isdigit(s[j])){
                temp.push_back(s[j]);
                j++;
            }
            pos[s[j]-'0'] = temp;
            i = j+1;
        }
        
        string ans;
        
        for(int i=1; i<10; i++){
            if(pos[i].length()>0){
                ans+=pos[i];
                ans.push_back(' ');
            }
        }
        
        ans.pop_back();
        
        return ans;
    }
};

//Another solution

class Solution {
public:
    string sortSentence(string s) {
        map<int, string> mp;
        string cur = "";
        for (char c: s) {
            if (c == ' ' && cur != "") {
                string ncur = cur;
                char id = ncur.back();
                int idx = (id - '0');
                ncur.pop_back();
                mp[idx] = ncur;
                cur = "";
            }
            else 
                cur += c;
        }
        if (cur != "") {
                string ncur = cur;
                char id = ncur.back();
                int idx = (id - '0');
                ncur.pop_back();
                mp[idx] = ncur;
        }
    
        string ans = "";
        for (auto p: mp) {
            ans += p.second;
            ans += " ";
        }
        if (ans.back() == ' ')
            ans.pop_back();
        return ans;
    }
};
