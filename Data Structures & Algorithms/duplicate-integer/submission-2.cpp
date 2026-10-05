#include <unordered_set>
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
    std::unordered_set<int> hashset;
      for(int i : nums)
      {
        if(!hashset.contains(i))
        {
            hashset.insert(i);
        }
        else
        {
            return true;
        }
      }
      return false;
    }
};