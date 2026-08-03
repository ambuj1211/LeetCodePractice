class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> a(m+n,0);
        int i = 0,j=0,k=0;
        while(m!=0 && n!=0)
        {
            if(nums1[i]<= nums2[j])
            {
                a[k++] = nums1[i++];
                m--;
            }
            else
            {
                a[k++] = nums2[j++];
                n--;
            }
        }
        while(m>0)
        {
            a[k++] = nums1[i++];
            m--;
        }
        while(n>0)
        {
            a[k++] = nums2[j++];
            n--;
        }
        for(int i = 0;i<a.size();i++)
        {
            nums1[i] = a[i];
        }
    }
};