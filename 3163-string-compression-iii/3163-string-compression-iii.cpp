class Solution {
public:
    string compressedString(string word) {
        string ans="";
        char c = word[0];
        int count = 1;
        for(int i = 1;i<word.size();i++)
        {
            if(c != word[i])
            {
                while(count>9)
                {
                    char a = '0'+ 9;
                    ans += a;
                    ans += c;
                    count=count-9;
                }
                char a = '0'+ count;
                ans += a;
                ans += c;
                count = 1;
                c = word[i];
            }
            else
            {
                count++;
            }
        }
        while(count>9)
                {
                    char a = '0'+ 9;
                    ans += a;
                    ans += c;
                    count=count-9;
                }
                char a = '0'+ count;
                ans += a;
                ans += c;
        return ans;
    }
};