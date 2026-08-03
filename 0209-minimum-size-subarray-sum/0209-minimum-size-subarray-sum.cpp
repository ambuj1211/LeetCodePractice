class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int j =0;
        int count = 0;
        int ans = INT_MAX;
        long long sum=0;
        for(int  i = 0;i<n;i++)
        {
            sum+=nums[i];
            count++;
            while(sum>target && j<n)
            {
                
                if(sum>=target && ans > count)
                {
                    ans = count;
                }
                sum-= nums[j++];
                count--;
            }
            if(sum>=target && ans > count)
            {
                ans = count;
            }
        }
        while(j<n)
        {
            sum-=nums[j++];
            count --;
            if(sum>=target && ans>count)
                ans = count;
        }
        if(ans == INT_MAX)
            return 0;
        return ans;
    }
};