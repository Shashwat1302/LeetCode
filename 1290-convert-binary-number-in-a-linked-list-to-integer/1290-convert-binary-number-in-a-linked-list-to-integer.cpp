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
    int getDecimalValue(ListNode* head) {
    int ans = 0,cnt   = 0;
    ListNode* tmp  = head;
    if(head==NULL)
        return 0;
    while(head!=NULL)
    {
        cnt++;
        head = head->next;
    }
    cnt--;
    while(tmp!=NULL)
    {
        ans = ans+(tmp->val)*pow(2,cnt);
        cnt--;
        tmp = tmp->next;
    }
    
    return ans;
        
    }
};