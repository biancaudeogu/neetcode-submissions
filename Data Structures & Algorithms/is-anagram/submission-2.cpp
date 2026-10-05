#include <map>
class Solution {
public:
    bool isAnagram(string s, string t) {
    std::map<char, int> maps;
    std::map<char, int> mapt;
    if(s.size() != t.size())
    {
        return false;
    }
    for(char c : s)
    {
        maps[c]++;
    }
    for(char c : t)
    {
        mapt[c]++;
    }
    return(maps == mapt);
    }
};
