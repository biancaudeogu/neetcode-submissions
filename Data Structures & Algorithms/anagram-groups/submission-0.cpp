#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> pairs;
        vector<vector<string>> result;
        for(string s : strs)
        {
            string copy = s;
            sort(copy.begin(), copy.end());
            if(!pairs.contains(copy))
            {
                pairs.insert({copy, {s}});
            }
            else
            {
                pairs[copy].push_back(s);
            }
        }
        for(const auto& p : pairs)
        {
            result.push_back(p.second);
        }
        return result;
    }
};
