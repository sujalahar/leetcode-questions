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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head) return 0;
        if(k==0) return head;
        ListNode* temp = head;

        int length = 0;
        while(temp!=NULL){
            length++;
            temp = temp->next;
        }

        k = k%length;
        if(k==0) return head;
        length -=k;
        temp = head;
        ListNode*prev = NULL;
        while(length){
            prev=temp;
            temp=temp->next;
            length--;
        }
        prev->next = NULL;
        ListNode* head1 = temp;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next = head;
        return head1;
    }
};