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
 #include <stack>
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack<int>s;
 ListNode* n = head;
 while (n!= NULL){
    s.push(n->val);
    n = n->next;
    
 }
 n = head;
 while (n!= NULL){
    if (n->val !=s.top() ){
        return false;
    }
        n = n->next;
        s.pop();
 }
    
return true;
 }
    
};