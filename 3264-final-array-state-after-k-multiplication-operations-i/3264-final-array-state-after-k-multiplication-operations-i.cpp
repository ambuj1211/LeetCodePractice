class Solution {
public:
    int find_min(vector<int> nums)
    {
        int min = INT_MAX;
        for(int i = 0;i< nums.size();i++)
        {
            if(min > nums[i])
                min = nums[i];
        }
        return min;
    }
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        
        for(int i = 0;i<k;i++)
        {
            int min = find_min(nums);
            for(int i = 0;i<nums.size();i++)
            {
                if(nums[i] == min)
                {
                    nums[i] = nums[i]*multiplier;
                    break;
                }
            }
        }
        return nums;

    }
};