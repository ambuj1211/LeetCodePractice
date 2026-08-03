class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minn = prices[0];
        int maxx = INT_MIN;
        for(auto i : prices)
        {
            minn = min(minn,i);
            maxx= max(maxx, i-minn);
        }
        if(maxx<0) return 0;
        return maxx;
    }
};