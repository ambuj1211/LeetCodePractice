class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int ans = 0;
        long int sum = 0;
        vector<int> v(k,0);
        for(int i = 0;i<nums.size();i++)
        {
            sum+=nums[i];
            int rem = sum%k;
            rem<0?v[rem+k]++ : v[rem]++;
        }
        ans = v[0];
        for(int i = 0;i<k;i++)
        {
            ans += (v[i]*(v[i]-1))/2;
        }
        return ans;
    }
};