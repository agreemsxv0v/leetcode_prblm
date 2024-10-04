class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        long long sum=0;
        int n=skill.size();

        long long left=0,right=n-1;

        sort(skill.begin(),skill.end());
        int totalskill=skill[0]+skill[n-1];
        

        
        while(left < right){

            if(skill[left] + skill[right] != totalskill){
                return -1;
            }
            sum += (long long)skill[left] * skill[right];
            left++;
            right--;


        }
        return sum;
    }
};