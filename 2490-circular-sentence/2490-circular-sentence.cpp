class Solution {
public:
    bool isCircularSentence(string sentence) {
        int n = sentence.size();
        char s= sentence[0];
        char e = sentence[n-1];
        if(s!=e)
        {
            return false;
        }

        for(int i = 0;i<n;i++)
        {
            if(sentence[i]== ' ')
            {
                if(sentence[i-1]!= sentence[i+1])
                    return false;
            }
        }
        return true;
    }
};