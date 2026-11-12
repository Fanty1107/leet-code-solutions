#include <stdio.h>
#include <stdlib.h>

typedef struct ListNode ListNode;

struct ListNode{
    int data;
    ListNode *next;
};

ListNode *addTwoNumber(ListNode *l1, ListNode *l2){
    ListNode return_list = {.data = 0, .next = NULL};
    ListNode *tail = &return_list;
    int carry = 0;
    while(l1 != NULL || l2 != NULL || carry != 0){
        int v1 = (l1 != NULL) ? l1->data : 0; 
        int v2 = (l2 != NULL) ? l2->data : 0; 
        int sum = v1 + v2 + carry;
        carry = sum / 10;
        ListNode *new = malloc(sizeof(ListNode));
        new->data = sum % 10;
        new->next = NULL;

        tail->next = new;
        tail = new;

        if (l1 != NULL) l1 = l1->next;
        if (l2 != NULL) l2 = l2->next;
    }
    return return_list.next;
}

int main(void){
    ListNode l1 = {.data = 2, .next = NULL};
    ListNode l2 = {.data = 4, .next = NULL};
    ListNode l3 = {.data = 3, .next = NULL};
    l1.next = &l2;
    l2.next = &l3;

    ListNode l4 = {.data = 5, .next = NULL};
    ListNode l5 = {.data = 6, .next = NULL};
    ListNode l6 = {.data = 4, .next = NULL};
    l4.next = &l5;
    l5.next = &l6;

    return 0;
}
