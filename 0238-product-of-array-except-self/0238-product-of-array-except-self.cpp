class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // int product=1;
        // vector<int> ans;
        // for(int i=0;i<nums.size();i++)
        // {
        //     product *= nums[i];
        // }
        // for(int i=0;i<nums.size();i++)
        // {
        //     if(nums[i] < 0)
        //     {
        //         ans.push_back(0);
        //     }
        //     ans.push_back(product/nums[i]);
        // }
        // return ans;
        int n = nums.size();
    vector<int> leftProduct(n, 1); // to store product of elements to the left of each element
    vector<int> rightProduct(n, 1); // to store product of elements to the right of each element
    vector<int> result(n);

    // Calculate product of elements to the left of each element
    for (int i = 1; i < n; ++i) {
        leftProduct[i] = leftProduct[i - 1] * nums[i - 1];
    }

    // Calculate product of elements to the right of each element
    for (int i = n - 2; i >= 0; --i) {
        rightProduct[i] = rightProduct[i + 1] * nums[i + 1];
    }

    // Multiply corresponding elements from left and right products
    for (int i = 0; i < n; ++i) {
        result[i] = leftProduct[i] * rightProduct[i];
    }

    return result;
    }
};