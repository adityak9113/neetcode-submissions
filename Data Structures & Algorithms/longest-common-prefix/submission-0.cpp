class Solution {
public:
    string commonPrefix(string a , string b) 
    {
        int i=0;
        int al=a.length();
        int bl=b.length();

        while(i<al && i<bl && a[i]==b[i])
        {
            i++;
        }

        return a.substr(0,i);
    }
    string longestCommonPrefix(vector<string>& strs) 
    {
        string ans=strs[0];
        for(int i=0;i<strs.size();i++)
        {
            ans=commonPrefix(ans,strs[i]);
        }
        return ans;
    }
};