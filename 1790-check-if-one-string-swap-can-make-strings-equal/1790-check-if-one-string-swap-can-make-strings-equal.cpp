class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1.length() != s2.length())
            return false;
        
        int count=0;
        int i=-1, j=-1;

        for(int k=0;k<s1.length(); k++){
            if(s1[k] != s2[k]){
                count++;

                if(i==-1){
                    i=k;
                }else{
                    j=k;
                }
            }
        }
        if(count==0){
            return true;
        }
        else if(count == 2 && s1[i] == s2[j] && s1[j] == s2[i]){
            return true;
        }
        return false;
    }
};