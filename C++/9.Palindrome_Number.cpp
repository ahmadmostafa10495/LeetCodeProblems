class Solution {
public:
    bool isPalindrome(int x) {
        string x_str = to_string(x); 
        for(int i = 0; i < (x_str.size() / 2); i++)
        {
            if(x_str[i] != x_str[x_str.size() - i - 1])
                return false;
        }
        return true;
    }
};