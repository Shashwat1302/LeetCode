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
    ListNode* middleNode(ListNode* head) {
        int count=0,counter=0;
        for(ListNode* trav=head;trav;trav=trav->next){
            count++;
        }
        for(ListNode* trav=head;trav;trav=trav->next){
            if(counter==count/2){
                return trav;
            }
            counter++;
        }
        return NULL;
        
    }
};