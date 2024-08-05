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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(!list2) return list1;
        if(!list1) return list2;
        ListNode* temp1 = list1;
        ListNode* temp2 = list2;
        ListNode* prev = NULL;
        while(temp1!=NULL && temp2!=NULL)
        {
            if(temp1->val<temp2->val){
                ListNode* head1 = temp1->next;
                if(prev==NULL){
                    temp1->next = temp2;
                    list2 = temp1;
                    prev = temp1;
                    temp1 = head1;
                }
                else{
                    prev->next = temp1;
                    if(temp1->next == NULL){
                        temp1->next = temp2;
                        break;
                    }
                    else{
                        temp1->next = temp2;
                        prev=temp1;
                        temp1 = head1;
                    }
                }
            }
            else{
                prev=temp2;
                if(temp2->next==NULL && temp1!=NULL){
                    temp2->next=temp1;
                    break;
                }
               temp2 = temp2->next;
            }
        }
        return list2;
    }
};