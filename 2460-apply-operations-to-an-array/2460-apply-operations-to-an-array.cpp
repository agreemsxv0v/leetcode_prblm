class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) { 
        int n=nums.size();
        // int writeindex=0;
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1] && nums[i] != 0){
                nums[i] *= 2;
                nums[i+1]=0;
            }
        }

        int nonzero=0;
        for(int i=0;i<n;i++){
            if(nums[i] != 0){
                nums[nonzero]=nums[i];
                nonzero++;
            } 
        }

        while(nonzero < n){
            nums[nonzero++]=0;
        }
        return nums;
    }
};