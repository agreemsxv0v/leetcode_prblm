class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.size() != goal.size())
        return false;

    string concatenated = s + s; // Concatenate str1 with itself
    if(concatenated.find(goal) != string::npos)
        return 1;
    else
        return 0;
    }
};