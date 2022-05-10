//Basic solution

class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> target;
        for(int i = 0; i < nums.size(); i++){
            target.insert(target.begin() + index[i], nums[i]);
        }
        return target;
    }
};

//Better approach

class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        int n = index.size();
    	for (int i = 0; i < n; i++) {
    		for (int j = 0; j < i; j++) {
    			if (index[j] >= index[i]) {
    				index[j]++;
    			}
    		}
    	}

    	vector<int> res(n);
    	for (int i = 0; i < n; i++) {
    		res[index[i]] = nums[i]; 
    	}

    	return res;
    }
};
