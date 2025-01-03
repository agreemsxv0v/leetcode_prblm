class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        
        // int n=nums.size();

        // int ans=0;
        // for(int i=0;i<n-1;i++){
        //     int sum1=0;
        //     int sum2=0;

        //     for(int j=0;j<=i;j++){
        //         sum1 += nums[j];
        //     }

        //     for(int k=i+1;k<n;k++){
        //         sum2 += nums[k];
        //     }

        //     if(sum1 >= sum2){
        //         ans++;
        //     }
        //     else
        //         continue;

        // }
        // return ans;

        int n=nums.size();

        long long sum=0;
        for(int num:nums){
            sum += num;
        }

        long long leftSum=0;
        int ans=0;
        for(int i=0;i<n-1;i++){
            leftSum += nums[i];
            long long rightSum=sum - leftSum;

            if(leftSum >= rightSum){
                ans++;
            }

        }
        return ans;
    }
};