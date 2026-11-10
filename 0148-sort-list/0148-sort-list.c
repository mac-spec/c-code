/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* sortList(struct ListNode* head) {
    if (head == NULL || head->next == NULL)
        return head;
    struct ListNode *slow = head;
    struct ListNode *fast = head->next;
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    struct ListNode *second = slow->next;
    slow->next = NULL;
    struct ListNode *left = sortList(head);
    struct ListNode *right = sortList(second);
    struct ListNode dummy;
    struct ListNode *tail = &dummy;
    dummy.next = NULL;
    while (left != NULL && right != NULL) {
        if (left->val < right->val) {
            tail->next = left;
            left = left->next;
        }
        else {
            tail->next = right;
            right = right->next;
        }
        tail = tail->next;
    }
    if (left != NULL)
        tail->next = left;
    else
        tail->next = right;
    return dummy.next;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna