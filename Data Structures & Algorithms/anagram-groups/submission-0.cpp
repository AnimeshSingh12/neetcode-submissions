class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> res;
        for(auto i:strs)
        {
            string temp = i;
            sort(temp.begin(),temp.end());
            res[temp].push_back(i);
        }
        vector<vector<string>> result;
        for(auto pair:res)
        {
            result.push_back(pair.second);
        }
        return result;
    }
};