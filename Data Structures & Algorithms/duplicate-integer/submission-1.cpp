class Solution {
public:
    bool hasDuplicate(vector<int>& nums) 
    {
        unordered_set<int>hash;

        for(int i=0;i<nums.size();i++)
        {
            auto itr=hash.find(nums[i]);

            if(itr!=hash.end())
            {
                return true;
            }

            hash.insert(nums[i]);
        }

        return false;
    }
};