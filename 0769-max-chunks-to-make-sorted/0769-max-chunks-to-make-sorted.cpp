class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int actualSum=0, expectedSum=0,chunks=0;

        for(int i=0;i<arr.size();i++){
            actualSum += arr[i];
            expectedSum += i;
            if(actualSum == expectedSum)
                chunks++;
        }
        return chunks;
    }
};