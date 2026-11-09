#include <vector>
using namespace std;
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefix(n);
        vector<int> postfix(n);
        vector<int> result(n);
        for(int i = 0; i < n; i++)
        {
            if(i == 0)
            {
                prefix[i] = nums[i];
            }
            else
            {
                prefix[i] = nums[i] * prefix[i-1];
            }
        }
        for(int i = n-1; i >= 0; i--)
        {
            if(i == n-1)
            {
                postfix[i] = nums[i];
            }
            else
            {
                postfix[i] = nums[i] * postfix[i+1];
            }
        }
        for(int i = 0; i < n; i++)
        {
            if(i == 0)
            {
                result[i] = postfix[i+1];
                continue;
            }

            if(i == n-1)
            {
                result[i] = prefix[i-1];
                continue;
            }
            result[i] = prefix[i-1] * postfix[i+1];
        }
        return result;
    }
};
