class Solution {
public:
    int subarraySum(vector<int>& nums, int k) 
    {
        vector<int>subArraySum(nums.size(),0);
        unordered_map<int,int>hash;
        int count=0;
        subArraySum[0]=nums[0];
    

        for(int i=1;i<nums.size();i++)
        {
            subArraySum[i]=subArraySum[i-1]+nums[i];
        }
        
        for(int i=0;i<subArraySum.size();i++)
        {
            if(subArraySum[i]==k)
            {
                count++;
            }

            int valNeeded=subArraySum[i]-k;
            auto itr=hash.find(valNeeded);
            if(itr!=hash.end())
            {
                count=count+hash[valNeeded];
            }

            hash[subArraySum[i]]++;
        }
        
        return count;
    }
};