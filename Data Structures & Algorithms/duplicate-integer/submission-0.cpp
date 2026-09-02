class Solution {
public:
    bool hasDuplicate(vector<int>& nums) 
    {
        unordered_map<int,int>hash;

        for(int i=0;i<nums.size();i++)
        {
            auto itr=hash.find(nums[i]);

            if(itr!=hash.end())
            {
                return true;
            }

            hash[nums[i]]=1;
        }

        return false;
    }
};