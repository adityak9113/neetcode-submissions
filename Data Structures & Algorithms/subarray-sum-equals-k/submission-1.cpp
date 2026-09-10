class Solution {
public:
    int subarraySum(vector<int>& nums, int k) 
    {
       vector<int>prefixSum(nums.size(),0);
       unordered_map<int,int>prefixSumCounts;
       prefixSum[0]=nums[0];
       int count=0;

       for(int i=1;i<nums.size();i++)
       {
        prefixSum[i]=prefixSum[i-1]+nums[i];
       } 

       for(int i=0;i<prefixSum.size();i++)
       {
            if(prefixSum[i]==k)
            {
                count++;
            }

            int valNeeded=prefixSum[i]-k;
            auto itr=prefixSumCounts.find(valNeeded);

            if(itr!=prefixSumCounts.end())
            {
                count=count+prefixSumCounts[valNeeded];
            }

            prefixSumCounts[prefixSum[i]]++;

       }

       return count;
    }
};