class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        unordered_map<int,int> um;

        vector<int> dummy=arr;

        sort(dummy.begin(),dummy.end());
        dummy.erase(unique(dummy.begin(), dummy.end()), dummy.end());

        for (int i = 0; i < dummy.size(); i++) {
            um[dummy[i]] = i + 1;
        }

        for (int i = 0; i < arr.size(); i++) {
            arr[i] = um[arr[i]];
        }

        return arr;
    }
};