// 160. Intersection of Two Linked Lists
// Easy
/* Given the heads of two singly linked-lists headA and headB, return the node at which the two lists intersect. 
 If the two linked lists have no intersection at all, return null. 
*/


#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    if (headA == NULL || headB == NULL) {
        return NULL;
    }

    struct ListNode *ptrA = headA;
    struct ListNode *ptrB = headB;

    while (ptrA != ptrB) {
        if (ptrA == NULL) {
            ptrA = headB;
        } else {
            ptrA = ptrA -> next;
        }

        if (ptrB == NULL) {
            ptrB = headA;
        } else {
            ptrB = ptrB -> next;
        }
    }

    return ptrA;
}

struct ListNode* createLinkedList(int arr[], int n) {
    if (n == 0) {
        return NULL;
    }

    struct ListNode* head = (struct ListNode*)malloc(sizeof(struct ListNode));
    head -> val = arr[0];
    head -> next = NULL;
    struct ListNode* current = head;
    for (int i = 1; i < n; i++) {
        struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
        newNode->val = arr[i];
        newNode->next = NULL;
        current->next = newNode;
        current = newNode;
    }
    return head;
}

struct ListNode* getNodeAt(struct ListNode* head, int index) {
    struct ListNode* current = head;
    int count = 0;
    while (current != NULL && count < index) {
        current = current->next;
        count++;
    }
    return current;
}

void printLinkedList(struct ListNode* head) {
    struct ListNode* current = head;
    while (current != NULL) {
        printf("%d -> ", current->val);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    // Example 1
    struct ListNode* listA1 = createLinkedList((int[]){4, 1, 8, 4, 5}, 5);
    struct ListNode* listB1 = createLinkedList((int[]){5, 6, 1, 8, 4, 5}, 6);
    struct ListNode* intersectNode1 = getNodeAt(listA1, 2); // Node with value 8
    struct ListNode* tempB1 = getNodeAt(listB1, 3);     // Node with value 8
    if (tempB1 != NULL) {
        tempB1->next = intersectNode1;
    }

    printf("List A1: ");
    printLinkedList(listA1);
    printf("List B1: ");
    printLinkedList(listB1);

    struct ListNode* intersection1 = getIntersectionNode(listA1, listB1);
    if (intersection1) {
        printf("Intersection node (Example 1): %d\n", intersection1->val);
    } else {
        printf("No intersection (Example 1)\n");
    }
    printf("\n");

    // Example 2
    struct ListNode* listA2 = createLinkedList((int[]){1, 9, 1, 2, 4}, 5);
    struct ListNode* listB2 = createLinkedList((int[]){3, 2, 4}, 3);
    struct ListNode* intersectNode2 = getNodeAt(listA2, 3); // Node with value 2
    struct ListNode* tempB2 = getNodeAt(listB2, 1);     // Node with value 2
    if (tempB2 != NULL) {
        tempB2->next = intersectNode2;
    }

    printf("List A2: ");
    printLinkedList(listA2);
    printf("List B2: ");
    printLinkedList(listB2);

    struct ListNode* intersection2 = getIntersectionNode(listA2, listB2);
    if (intersection2) {
        printf("Intersection node (Example 2): %d\n", intersection2->val);
    } else {
        printf("No intersection (Example 2)\n");
    }
    printf("\n");

    // Example 3
    struct ListNode* listA3 = createLinkedList((int[]){2, 6, 4}, 3);
    struct ListNode* listB3 = createLinkedList((int[]){1, 5}, 2);

    printf("List A3: ");
    printLinkedList(listA3);
    printf("List B3: ");
    printLinkedList(listB3);

    struct ListNode* intersection3 = getIntersectionNode(listA3, listB3);
    if (intersection3) {
        printf("Intersection node (Example 3): %d\n", intersection3->val);
    } else {
        printf("No intersection (Example 3)\n");
    }
    printf("\n");

    // Example with no intersection from the problem description
    struct ListNode* listA4 = createLinkedList((int[]){2, 6, 4}, 3);
    struct ListNode* listB4 = createLinkedList((int[]){1, 5}, 2);

    printf("List A4: ");
    printLinkedList(listA4);
    printf("List B4: ");
    printLinkedList(listB4);

    struct ListNode* intersection4 = getIntersectionNode(listA4, listB4);
    if (intersection4) {
        printf("Intersection node (Example 4): %d\n", intersection4->val);
    } else {
        printf("No intersection (Example 4)\n");
    }
    printf("\n");

    return 0;
}