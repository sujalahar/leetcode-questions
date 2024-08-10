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
    bool isPalindrome(ListNode* head) {
        stack<int>st;
        ListNode* f = head;
        bool key = true;
        int len = 0;
        while(f){
            f=f->next;
            len++;
        }
        f = head;
        int half =len/2;
        while(half--){
            st.push(f->val);
            f=f->next;
        }
        if(len%2!=0){
            f=f->next;
        }
        
        while(f){
            if(st.top()!=f->val){
            return false;
            }
            f=f->next;
            st.pop();
        }
        return true;
    }
};