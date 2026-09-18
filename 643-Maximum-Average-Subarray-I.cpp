class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) 
    {
        int sum=0;
        int summax;
        for(int i=0;i<k;i++)
        {
           sum+=nums[i];
        }
        summax=sum;
        for(int i=k;i<nums.size();i++)
        {
            sum=sum-nums[i-k]+nums[i];
            if(sum>summax)
            {
                summax=sum;
            }
        }
        return  (double)summax/k;
    }
};