class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        int x = (1<<maximumBit )-1;
        int n = nums.size();
        vector<int> ans(n,0);
        ans[n-1] = nums[0]^x;
        for(int i = 1;i<n;i++)
        {
            ans[n-1-i] = ans[n-i]^nums[i];
        }
        return ans;
    }
};