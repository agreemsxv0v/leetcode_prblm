class Solution {
public:
    string compressedString(string word) {
        int len=word.size();

        string ans="";
        int count=1;
        char ch=word[0];
        for(int i=1;i<len;i++){
            if(word[i] == ch && count < 9)count++;
            else{
                ans.push_back(count+'0');
                ans.push_back(ch);
                ch = word[i];
                count = 1;
            }
        }
        ans.push_back(count + '0');
        ans.push_back(ch);
        return ans;
    }
    
};