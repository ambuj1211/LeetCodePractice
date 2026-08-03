class Solution {
public:
    long long minEnd(int n, int x) {
        double m = log(n)/log(2);
        int y = ceil(m);
        vector<int> a;
        while(x )
        {
            int r = x%2;
            a.push_back(r);
            x = x/2;
        }
        n = n-1;
        long long int ans = 0;
        long long j = 1;
        for(int i=0;i<a.size();i++)
        {
            if(a[i] == 0)
            {
                int r = n%2;
                a[i] = r;
                n = n/2;
            }
            ans += (a[i]*j);
            j = j*2;
        }
        int i = a.size();
        while(n)
        {
            int r = n%2;
            a.push_back(r);
            n = n/2;
            ans += (a[i]*(j));
            j *=2;
            i++;
        }
        return ans;
    }
};