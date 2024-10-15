class Solution {
public:
    long long minimumSteps(string s) {
        long long swapball=0;
        int black=0;
        int n=s.length();

        for(int i=0;i<n;i++)
        {

            if(s[i]=='0')
            {
                swapball += (long long) black;
            }
            else{
                black++;
            }
        }
        return swapball;
    }
};