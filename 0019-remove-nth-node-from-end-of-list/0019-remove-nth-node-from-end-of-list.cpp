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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int length = 0;
        ListNode* temp = head;
        while(temp!=NULL){
            length++;
            temp=temp->next;
        }
        int position = length - n;
        if(position==0 && length==1)
        {
            return NULL;
        }
        if(position==0){
            ListNode* start = head;
            head = start->next;
            start->next = NULL;
            return head;
        }
        temp = head;
        ListNode*prev = NULL;
        while(position!=0){
            position--;
            prev=temp;
            temp = temp->next;
        }
        prev->next = temp->next;
        temp->next =NULL;
        return head;
    }
};