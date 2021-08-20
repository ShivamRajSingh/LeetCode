#include "codeblock.h"

ListNode* removeNthFromEnd(ListNode* head, int n) {
        
    ListNode *curr,*nextNode;
    
    curr = nextNode = head;
    // n--;
    while(n--){
        nextNode = nextNode->next;
    }
    
    if(nextNode == NULL){
        return head->next;
    }
    
    while(nextNode ->next != NULL){
        curr = curr->next;
        nextNode = nextNode->next;
    }
    
    curr->next = curr->next->next;

    return head;
}
int main()
{
    ListNode* head = inputLL();
    int n;
    cout << "Enter the value for n : ";
    cin >> n;
    head = removeNthFromEnd(head, n);
    print(head);

}