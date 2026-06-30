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
    ListNode* reverseList(ListNode* head) {
    ListNode*curr = head;// هاد البوينتر الاساسي اللي بحرك ع اساسه اللينكد ليست
     ListNode* prev = nullptr;
     // ListNode* nxt = curr->next; // هاد عشان بمسك باقي الليست لانو لما بدي احرك الكرنت اذا ما كنت رابطة رح تضيع 
while (curr!=nullptr){
ListNode* nxt = curr->next;
curr->next = prev;
prev = curr;
curr=nxt;

}
head = prev;
return head;
}
};