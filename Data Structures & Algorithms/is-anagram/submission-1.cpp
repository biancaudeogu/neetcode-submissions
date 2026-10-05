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
        if(!maps.contains(c))
        {
            maps.insert({c, 1});
        }
        else
        {
            maps.at(c)++;
        }
    }
    for(char c : t)
    {
        if(!mapt.contains(c))
        {
            mapt.insert({c, 1});
        }
        else
        {
            mapt.at(c)++;
        }
    }
    return(maps == mapt);
    }
};
