class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> set;
        int right = 0, left = 0, n = s.size(), result = 0;
        
        while(right < n && left < n)
        {
            if(set.find(s[left]) == set.end())
            {
                //found
                set.insert(s[left++]);
                result = max(left - right, result);
            }
            else
            {
                set.erase(s[right++]);
            }
        }
        
        return result;
    }
};