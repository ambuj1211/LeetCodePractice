class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        map<int,int> m;
        int ans = INT_MAX;
        for(int  i =0;i<cards.size();i++)
        {
            if(m.count(cards[i]))
            {
                if(ans>i-m[cards[i]]+1)
                    ans = i-m[cards[i]]+1;
            }
            m[cards[i]] = i;
        }
        if(ans == INT_MAX)
            return -1;
        return ans;
    }
};