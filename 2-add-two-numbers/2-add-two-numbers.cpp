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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        auto x1 = l1 , x2 = l2 ;
        int k1 = 0 , k2 = 0 ;
        while(x1) x1 = x1->next , k1++ ;
        while(x2) x2 = x2->next , k2++ ;
        if(k1 < k2) swap(l1 , l2) ;
        
        auto p1 = l1 , p2 = l2  ;
        int c = 0 ;
        while(p2)
        {
            int x = p1->val , y = p2->val ;
            p1->val = (x+y+c)%10 ;
            c = (x+y+c)/10 ;
            p1 = p1->next ;
            p2 = p2->next ;
        }
        while(p1 && c)
        {
            int x = p1->val ;
            
            p1->val = (x+c)%10 ;
            
            c = (x+1)/10 ;
            p1 = p1->next ;
        }
        if(c)
        {
            auto xx = l1 ;
            while(xx->next)
            {
                xx = xx->next ;
            }
            ListNode* yy = new ListNode() ;
            yy->val = 1 ;
            xx->next = yy ;
            yy->next = NULL ;
            return l1 ;
        }
        else return l1 ;
        
    }
};