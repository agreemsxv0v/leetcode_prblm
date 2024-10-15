class Solution {
public:
    long long minimumSteps(string s) {
        long long swapball=0;
        long long black=0;
        int n=s.length();

        for(int i=0;i<n;i++)
        {

            if(s[i]=='0')
            {
                swapball += black;
            }
            else{
                black++;
            }
        }
        return swapball;
    }
};