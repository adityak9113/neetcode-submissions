class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        if(s.length()!=t.length())
        {
            return false;
        }
        unordered_map<int,int>freqMap;

        for(int i=0;i<s.length();i++)
        {
            auto itr=freqMap.find(s[i]);

            if(itr!=freqMap.end())
            {
                freqMap[s[i]]++;
            }

            else
            {
                freqMap[s[i]]=1;
            }
        }
        for(int i=0;i<t.length();i++)
        {
            auto itr=freqMap.find(t[i]);

            if(itr!=freqMap.end())
            {
                freqMap[t[i]]--;
            }
            else
            {
                freqMap[t[i]]=1;
            }
        }

        for(auto itr=freqMap.begin();itr!=freqMap.end();itr++)
        {
            cout<<"itr->first="<<itr->first<<" itr->second="<<itr->second<<endl;
            if(freqMap[itr->first]!=0)
            {
                return false;
            }
        }

        return true;



    }
};
