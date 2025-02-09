class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        unordered_map<int,int> freq;
        long long goodpair=0,n=nums.size();

        for(int i=0;i<n;i++){
            int key=nums[i]-i;

            goodpair += freq[key];
            freq[key]++;
        }

        return (n*(n-1))/2-goodpair;
    }
};