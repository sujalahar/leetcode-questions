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
    ListNode* addTwoNumbers(ListNode* &l1, ListNode* &l2) {
        ListNode*t1=l1;
        ListNode*t2=l2;
        ListNode*prev = NULL;
        int carry = 0; 
        while(t1!=NULL && t2!=NULL){
            ListNode*temp1 = t1;
            ListNode*temp2 = t2;
            int digitsum = temp1->val+temp2->val+ carry;
            t1->val = digitsum%10 ;
            carry = digitsum/10;
            prev = t1;
            t1 = t1->next;
            t2 = t2->next;
        }
        if(t1==NULL && t2==NULL){
            if(carry!=0)
            {
                ListNode*carr = new ListNode(carry);
                carr ->next = NULL;
                prev -> next = carr;
                return l1;
            }
            else{
                return l1;
            }
        }
        if(t2!=NULL && t1==NULL)
        {
            prev->next = t2;
        }
        while(t2!=NULL){
            ListNode*temp1 = t2;
            int digsum = temp1->val +carry;
            t2->val = (digsum)%10;
            carry = (digsum)/10;
            prev = t2;
            t2 = t2->next;
            if((carry!=0 && t1==NULL && t2==NULL))
            {
                ListNode*carr = new ListNode(carry);
                carr ->next = NULL;
                prev -> next = carr;
                return l1;
            }
        }
        while(t1!=NULL && t2==NULL){
            ListNode*temp1 = t1;
            int digsum = temp1->val + carry;
            t1->val = (digsum)%10;
            carry = (digsum)/10;
            prev = t1;
            t1 = t1->next; 
            if(carry!=0 && t1 == NULL && t2==NULL)
            {
                ListNode*carr = new ListNode(carry);
                prev -> next = carr;
                carr ->next = NULL;
                return l1;
            }            
        }
        return l1;
    }
};