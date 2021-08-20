 #include "codeblock.h"
 ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    if(l1 == NULL){
        return l2;
    }
    if(l2 == NULL){
        return l1;
    }
    
    ListNode *l3 = new ListNode();
    ListNode *temp = l3;
    
    while(l1 != NULL && l2 != NULL){
        if(l1->val == l2->val){
            temp->next = l1;
            l1 = l1->next;
            temp = temp->next;
            temp->next = l2;
            l2 = l2->next;
        }else if (l1->val < l2->val){
            temp->next = l1;
            l1 = l1->next;
        }else{
            temp->next = l2;
            l2 = l2->next;
        }
        temp = temp->next;
    }
    
    if(l1 != NULL){
        temp->next = l1;
    }
    if(l2 != NULL){
        temp->next = l2;
    }
    l3 = l3->next;
    return l3;
}
int main()
{
    ListNode *l1 = inputLL();
    ListNode *l2 = inputLL();
    ListNode *l3 = mergeTwoLists(l1,l2);
    print(l3);
}