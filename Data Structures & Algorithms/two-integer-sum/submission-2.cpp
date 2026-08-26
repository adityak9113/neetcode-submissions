class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        unordered_map<int,int>hash;
        vector<int>res;
        for(int i=0;i<nums.size();i++)
        {
            int val=target-nums[i];
            auto itr=hash.find(val);

            if(itr!=hash.end())
            {
                if(hash[val]>i)
                {
                    res.push_back(i);
                    res.push_back(hash[val]);
                }

                else
                {
                    res.push_back(hash[val]);
                    res.push_back(i);                  
                }

                break;
            }

            cout<<"33 hash["<<nums[i]<<"]="<<hash[nums[i]]<<endl;
            hash[nums[i]]=i;

        }

        return res;
    }
};
