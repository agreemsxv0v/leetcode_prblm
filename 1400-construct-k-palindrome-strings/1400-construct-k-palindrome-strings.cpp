class Solution {
public:
    bool canConstruct(string s, int k) {
        if(s.length() < k)
            return false;
        sort(s.begin(),s.end());

        int oldCount=0;

        for(int i=0;i < s.length();){
            char cur=s[i];
            int count=0;

            while(i < s.length() && s[i] == cur){
                count++;
                i++;
            }
            if(count % 2 != 0)
                oldCount++;
        }
        return oldCount <= k;
    }
};