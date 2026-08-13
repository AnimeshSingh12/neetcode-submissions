class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      std::unordered_set<char> charSet;

      int left = 0 ; 
      int right =0 ;
      int maxLength = 0 ;


      for(right = 0 ; right<s.length();right++)
      {
        while(charSet.count(s[right]))
        {
            charSet.erase(s[left]);
            left++;
        }
        charSet.insert(s[right]);
        maxLength = max(maxLength,right-left+1);
      } 

      return maxLength; 
    }
    
};
