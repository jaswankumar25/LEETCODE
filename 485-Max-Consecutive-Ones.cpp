class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) 
    {
        int maxi=0;
        int bmax=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                maxi++;
                bmax=max(maxi,bmax);
            }
            else
            {
                maxi=0;
            }
            
        }
        return bmax;
    }
};