class Solution {
public:
unordered_map<string, int> um;

    // int solve(string& s, int ind) {
    //     if (ind >= s.size()) {
    //         return 0;
    //     }

    //     int extra = INT_MAX;
    //     string tmp = "";       
    //     for (int i = ind; i < s.size(); i++) {
    //         tmp += s[i];

    //         if (um.find(tmp) != um.end()) {
    //             extra = min(extra, solve(s, i + 1));
    //         }
    //     }
    //     extra = min(extra, 1 + solve(s, ind + 1)); 
    //     return extra;
    // }

    int solve(string s) {
        if (s.empty()) {
            return 0;
        }

        int extra = INT_MAX;
        string tmp = "";

        for (int i = 0; i < s.size(); i++) {
            tmp += s[i];
            if (um.find(tmp) != um.end()) {
                extra = min(extra, solve(s.substr(i + 1)));
            }
        }

        extra = min(extra, 1 + solve(s.substr(1)));
        return extra;
    }
    
    int minExtraChar(string s, vector<string>& dictionary) {
        for (auto& val : dictionary) {
            um[val]++;
        }
        return solve(s); 
    }
};