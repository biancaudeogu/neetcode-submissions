class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
      for(int i = 0; i < nums.size(); i++)
      {
        int cnt = count(nums.begin(), nums.end(), nums[i]);
        if(cnt > 1)
        {
            return true;
        }
      } 
      return false; 
    }
};