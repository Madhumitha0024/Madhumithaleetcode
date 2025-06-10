/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
         ListNode *s=node;
        node=node->next;
        while(node != NULL)
        {
            s->val=node->val;
            if(node->next == NULL)
            {
                s->next=NULL;
                break;
            }
            s=node;
            node=node->next;}
    }
};