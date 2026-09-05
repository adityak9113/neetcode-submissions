class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        unordered_map<string,vector<string>>anags;
        vector<vector<string>>res;
        for(auto &word:strs)
        {
            string key=word;

            sort(key.begin(),key.end());

            anags[key].push_back(word);
        }

        for(auto itr:anags)
        {
            res.push_back(itr.second);
        }

        return res;
    }
};
