class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> num;
        vector<int> ans;
        for(int i =0;i<nums.size();i++)
        {
            num[nums[i]] = i;
        }
        for(int i = 0;i<nums.size();i++)
        {
            int value = target - nums[i];
            if(num.find(value)!= num.end())
            {
                if(num[value] != i)
                {
                    ans.push_back(i);
                    ans.push_back(num[value]);
                    return ans;
                }
            }
        }
        
        return {};
    }
};