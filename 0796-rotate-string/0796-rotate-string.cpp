class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size())
            return false;
        int n = s.size();
        if(s == goal)
            return true;
        
        for(int i = 1;i<n;i++)
        {
            string c = "";
            for(int j = 0;j<n;j++)
            {
                c +=s[(i+j)%n];
            }
            if(c == goal)
                return true;
        }
        return false;
    }
        
};