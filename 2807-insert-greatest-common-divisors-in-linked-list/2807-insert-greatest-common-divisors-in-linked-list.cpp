/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* createLinkedListFromVector(vector<int>& ans) {
    if (ans.empty()) return nullptr; // If vector is empty, return nullptr
    
    // Create the head of the linked list
    ListNode* head = new ListNode(ans[0]);
    ListNode* current = head;

    // Loop through the vector and create nodes
    for (size_t i = 1; i < ans.size(); ++i) {
        current->next = new ListNode(ans[i]);
        current = current->next;
    }
    
    return head;
}
    int gcd(int a,int b)
    {
        if(a>b)
        {
            while(b!=0)
            {
                int tem = b;
                b = a%b;
                a = tem;
            }
        }
        else
        {
            a = a^b;
            b = a^b;
            a = a^b;
            while(b!=0)
            {
                int tem = b;
                b = a%b;
                a = tem;
            }
        }
        return a;
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* tem;
        tem = head;
        vector<int> a,ans;
        while(tem != nullptr)
        {
            a.push_back(tem->val);
            tem = tem->next;
        }
        for(int i = 1;i<a.size();i++)
        {
            int t1 = a[i-1];
            int t2 = a[i];
            int g = gcd(t1,t2);
            ans.push_back(t1);
            ans.push_back(g);
        }
        ans.push_back(a[a.size()-1]);
        head = createLinkedListFromVector(ans);
        return head;
    }
};