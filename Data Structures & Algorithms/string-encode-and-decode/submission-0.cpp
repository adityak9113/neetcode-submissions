class Solution {
public:

    string encode(vector<string>& strs) 
    {
        string ans="";
        for(int i=0;i<strs.size();i++)
        {
            int l=strs[i].length();
            ans=ans+to_string(l)+"#"+strs[i];
        }

        return ans;
    }

    vector<string> decode(string s) 
    {
        int index=0;
        vector<string>vec;

        while(index<s.length())
        {
            string len_str="";
            while(s[index]!='#')
            {
                len_str=len_str+s[index];
                index++;
            }
            int len_num=stoi(len_str);
            index++;
            string str=s.substr(index,len_num);
            vec.push_back(str);
            index=index+len_num;
        }

        return vec;
    }
};
