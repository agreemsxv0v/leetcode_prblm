class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int m = spaces.size(), n = s.size();
        string ans(n + m, ' ');
        
        int j = 0; 
        for (int i = 0; i < n; i++) {
            if (j < m && i == spaces[j]) {
                ans[i+j] = ' '; 
                j++;     
            }
            ans[i+j]=s[i];
        }
        return ans;
    }
};