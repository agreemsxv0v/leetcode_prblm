class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size()*grid.size();
        unordered_set<int> seen;
        int a;
        for(auto & row:grid){
            for(auto& num: row){
                if(seen.count(num) != 0)
                    a=num;
                seen.insert(num);
            }
        }
        int b;
        for(int num=1;num <= n;num++)
        {
            if(seen.find(num) == 0)
                b=num;   
        }
        return {a,b};
    }
};