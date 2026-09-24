class Solution {
public:
    void merge(vector<int>& nums,int start,int mid,int end)
    {
        int size1= mid-start+1;
        int size2= end-mid;

        vector<int>arr1(size1,0);
        vector<int>arr2(size2,0);

        int i=0,j=0;

        while(i<size1 && j<size2)
        {
            arr1[i]=nums[start+i];
            arr2[j]=nums[mid+1+j];

            i++;
            j++;
        }

        while(i<size1)
        {
            arr1[i]=nums[start+i];
            i++;
        }

        while(j<size2)
        {
            arr2[j]=nums[mid+1+j];
            j++;
        }
        i=0;j=0;int k=start;

        while(i<size1 && j<size2)
        {
            if(arr1[i]<=arr2[j])
            {
                nums[k]=arr1[i];
                i++;
            }

            else
            {
                nums[k]=arr2[j];
                j++; 
            }

            k++;
        }

        while(i<size1)
        {
            nums[k]=arr1[i];
            i++;
            k++;
        }

        while(j<size2)
        {
            nums[k]=arr2[j];
            j++;
            k++;
        }



    }

    void mergeSort(vector<int>& nums,int start,int end)
    {
        if(start>=end)
        {
            return;
        }

        int mid= start +(end-start)/2;

        mergeSort(nums,start,mid);
        mergeSort(nums,mid+1,end);
        merge(nums,start,mid,end);

    }


    vector<int> sortArray(vector<int>& nums) 
    {
        int n=nums.size()-1;

        mergeSort(nums,0,n);

        return nums;
    }
};