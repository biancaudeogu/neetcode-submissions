#include <vector>
#include <algorithm>
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++)
        {
            std::vector<int>::iterator it = std::find(nums.begin(), nums.end(), i);
            if(it == nums.end())
            {
                return i;
            }
        }
    }
};
