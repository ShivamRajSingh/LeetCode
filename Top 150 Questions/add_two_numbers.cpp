#include "codeblock.h"

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode *dummy = new ListNode();
    
    ListNode* temp = dummy;
    
    int carry = 0;
    int sum = 0;
    
    while(l1!= NULL || l2 != NULL || carry){
        sum = 0;
        
        if(l1 != NULL){
            sum += l1->val;
            l1 = l1->next;
        }
        
        if(l2 != NULL){
            sum += l2->val;
            l2 = l2->next;
        }
        sum += carry;
        
        carry = sum/10;
        
        sum = sum % 10;
        
        ListNode* newNode = new ListNode();
        
        newNode->val = sum;
        temp->next = newNode;
        temp = temp->next;
    }
    
    
    return dummy->next;
    
}

int main()
{
    ListNode* l1 = inputLL();
    ListNode *l2 = inputLL();
    ListNode *l3 = addTwoNumbers(l1,l2);
    print(l3);
    
}