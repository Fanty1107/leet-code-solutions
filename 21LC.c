#include <stdio.h>
#include <stdlib.h>

struct ListNode{
    int val;
    struct ListNode *next;
};
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode dummy; 
    struct ListNode *tail = &dummy; 
    dummy.next = NULL;

    while (list1 != NULL && list2 != NULL) {
        if (list1->val <= list2->val) {
            tail->next = list1;
            list1 = list1->next;
        } else {
            tail->next = list2;
            list2 = list2->next;
        }
        tail = tail->next;
    }
    tail->next = (list1 != NULL) ? list1 : list2;
    return dummy.next; 
}

int main(){
    struct ListNode *head;
    head = malloc(sizeof(struct ListNode));
    head->val = 1;
    head->next = malloc(sizeof(struct ListNode));
    head->next->val = 2;
    head->next->next = malloc(sizeof(struct ListNode));
    head->next->next->val = 4;
    head->next->next->next = NULL;

    struct ListNode *heat;
    heat = malloc(sizeof(struct ListNode));
    heat->val = 1;
    heat->next = malloc(sizeof(struct ListNode));
    heat->next->val = 3;
    heat->next->next = malloc(sizeof(struct ListNode));
    heat->next->next->val = 4;
    heat->next->next->next = NULL;

    struct ListNode *merged= mergeTwoLists(head, heat);

    for (struct ListNode *cur = merged; cur != NULL; cur = cur->next) {
        printf("%d\n", cur->val);
    }
    return 0;
}
