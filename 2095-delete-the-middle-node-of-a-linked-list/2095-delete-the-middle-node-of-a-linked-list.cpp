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
    ListNode* deleteMiddle(ListNode* head) {
         ListNode*p=head;
         if (head->next ==nullptr)return NULL;
int c=0;
while (p!= NULL){
    c++;
    p = p->next;
}
int mid = c/2;
ListNode*prev=head;
while (mid-1 !=0){
    
    prev = prev->next;
   mid--;

}
prev->next = prev->next->next;
return head;

  
    }
   
};