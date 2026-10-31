//Did not use recursion here

struct ListNode* reverseList(struct ListNode* head) {
    if(head == NULL || head->next == NULL){
        return head;
    }
    struct ListNode* mid = head->next;
    struct ListNode* adv = mid->next;
    head->next = NULL;
    while(mid->next != NULL){
        mid->next = head;
        head = mid;
        mid = adv;
        adv = adv->next;
    }
    mid->next = head;
    head = mid;
    return head;
}
