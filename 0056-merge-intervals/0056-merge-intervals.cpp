class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        //Brute Force Approach (sort and compare end and start)
        sort(intervals.begin(),intervals.end(),[](const vector<int>&a, const vector<int>&b){
            if(a[0]==b[0]) return a[1]<b[1];
            return a[0]<b[0];
        });
        int n = intervals.size();
        vector<vector<int>> ans;
        vector<int> end = intervals[0];
        for(int i = 1;i<n;i++)
        {
            if(end[1]>=intervals[i][0])
            {

                end[1] = max(end[1],intervals[i][1]);
            }
            else
            {
                ans.push_back(end);
                end = intervals[i];
            }
        }
        ans.push_back(end);
        return ans;
    }
};