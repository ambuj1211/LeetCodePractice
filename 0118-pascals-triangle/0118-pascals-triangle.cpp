class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> sol;

        for(int i = 1;i<=numRows;i++)
        {
            vector<int> helper;
            for(int j = 0;j<i;j++)
            {
                if(j==0 || j==(i-1)) 
                    helper.push_back(1);
                else
                {
                    int num = sol[i-2][j-1] + sol[i-2][j];
                    helper.push_back(num);
                }
            }
            sol.push_back(helper);
        }
        return sol;
    }
};