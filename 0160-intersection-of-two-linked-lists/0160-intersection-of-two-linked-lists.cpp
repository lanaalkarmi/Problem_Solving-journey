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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
     ListNode * a=headA;
      ListNode * b=headB;
int ca=0;
int cb=0;
while (a!=nullptr){
    ca++;
    a=a->next;
}
while (b!=nullptr){
    cb++;
    b = b->next;
}
int diff = abs(ca-cb);
a=headA;
b=headB;
if (ca>cb){
    while (diff!= 0){
        a=a->next;
        diff--;
    }
}
else if (ca<cb){
    while (diff!= 0){
        b=b->next;
        diff--;
    }
}
while (a!=b){//لسا ما تقاطعوا 
a=a->next;
b=b->next;
}
return a;
}



        
};