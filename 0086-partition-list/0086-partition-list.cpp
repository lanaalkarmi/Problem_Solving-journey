
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
     // فكرتها تقسيم اللينكد ليست اللي عندي
  ListNode* dummy = new  ListNode(0);
   ListNode* p = dummy;// هاي الللي رح اتخرك و اضيف النودز من خلاله
    ListNode* curr1=head;// بوينتر للاعداد اللي قال من اكس 
     ListNode* curr2= head;// للاعداد اللي اكبر من اكس
     while (curr1 != nullptr){
if (curr1->val<x){
    p->next = new ListNode(curr1->val);
     p =p->next;
}
curr1= curr1->next;
     }
 while (curr2 != nullptr){
if (curr2->val>=x){
    p->next = new ListNode(curr2->val);
 p =p->next;
}
curr2= curr2->next;
     }

   
    return dummy->next;

}




};