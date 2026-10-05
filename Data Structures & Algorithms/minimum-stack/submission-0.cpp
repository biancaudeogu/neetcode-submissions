#include <vector>
#include <algorithm>

class MinStack {
private:
std::vector<int> s;
public:
    MinStack() 
    {
        std::vector<int> s;
    }
    
    void push(int val) 
    {
        s.push_back(val);
    }
    
    void pop() 
    {
        s.pop_back();
    }
    
    int top() 
    {
        return s[s.size() - 1];
    }
    
    int getMin() 
    {
        std::vector<int>::iterator min_it = std::min_element(s.begin(), s.end());
        return *min_it;
    }
};
