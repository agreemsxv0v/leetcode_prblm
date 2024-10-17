class Solution {
public:
    int maximumSwap(int num) {
        string numstr=to_string(num);

        int n=numstr.size();

        vector<int> last(10,-1);

        for(int i=0;i<n;i++)
        {
            last[numstr[i] - '0']=i;
        }

        for(int i=0;i<n;i++){
            for(int d=9;d> numstr[i] - '0';d--){
                if(last[d] > i){
                    swap(numstr[i], numstr[last[d]]);
                    return stoi(numstr);
                }
            }
        }
        return num;
    }
};