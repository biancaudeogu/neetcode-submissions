#include <algorithm>
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        int left = 0;
        int right = 1;
        int repeat = 0;
        while(right < nums.size())
        {
            if(nums[left] == nums[right])
            {
                left+=2;
                right+=2;
            }
            else
            {
                break;
            }
        }
        return nums[left];
    }
};
