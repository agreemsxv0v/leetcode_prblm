class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        int n=arr.size();
        for(int i=0;i<=n/2;i++)
        {
            for(int j=n-1;j>=n/2;j--)
            {
                int sum=arr[i]+arr[j];
                if(arr[i] < 0)
                    continue;
                if(arr[j] < 0)
                    continue;
                if(sum % k == 0)
                    return true;
                break;
            }
        }
        return false;
    }
};