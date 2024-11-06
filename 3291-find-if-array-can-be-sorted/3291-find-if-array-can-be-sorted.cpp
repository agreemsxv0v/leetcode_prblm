#define f(x) __builtin_popcount(x)
class Solution {
public:
    bool canSortArray(vector<int>& nums) {
        // const uint8_t n = nums.size();
        // uint16_t pmax = 0, cmin = 0, cmax = 0;
        // uint8_t pcnt = 0;
        // for (const uint16_t v : nums) {
        //     if (const uint8_t ccnt = popcount(v); pcnt == ccnt) {
        //         cmin = min(cmin, v);
        //         cmax = max(cmax, v);
        //     } else if (cmin < pmax) {
        //         return false;
        //     } else {
        //         pmax = cmax;
        //         cmin = cmax = v;
        //         pcnt = ccnt;
        //     }
        // }
        // return cmin >= pmax;


        stable_sort(begin(nums), end(nums), [&](int a, int b) { return f(a) == f(b) && a < b; });
        return is_sorted(begin(nums), end(nums));
    }
};