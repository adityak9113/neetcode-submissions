class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        unordered_map<int,int>freqMap;

        for(int i=0;i<nums.size();i++)
        {
            freqMap[nums[i]]++;
        }

        vector<vector<int>>freqBucket(nums.size()+1);
        
        for(auto itr=freqMap.begin();itr!=freqMap.end();itr++)
        {
            int key=itr->first;
            int freq=itr->second;
            
            freqBucket[freq].push_back(key);
        }

        vector<int> ans;

        for(int i=nums.size();i>0;i--)
        {
            for(int j=0;j<freqBucket[i].size();j++)
            {
                ans.push_back(freqBucket[i][j]);

                if(ans.size()==k)
                {
                    return ans;
                }
            }
        }

        return ans;
        
    }
};
