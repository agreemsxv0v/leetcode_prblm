class Solution {
public:
    long long minimumSteps(string s) {
        long long swapball=0;

        int n=s.length();

        for(int i=0;i<n;i++)
        {
            int j=i+1;

            if(s[i] == '1' && s[j]=='0')
            {
                swap(s[i],s[j]);
                swapball++;
            }
            else{
                continue;
            }
        }
        return swapball;
    }
};