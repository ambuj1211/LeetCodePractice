class Solution {
public:
    string removeDigit(string number, char digit) {
        string s="";
        int count = 0,n =0;
        for(int i =0;i<number.size();i++)
        {
            if(number[i]==digit)
                n++;
        }
        for(int i = 0;i<number.size();i++)
        {
            if(number[i] == digit && count<1)
            {
                if(n==1||number[i+1]>digit)
                {
                    count++;
                    continue;
                }
                n--;
                
            }
            s +=number[i];
        }
        return s;
    }
};