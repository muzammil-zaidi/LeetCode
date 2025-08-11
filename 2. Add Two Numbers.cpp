class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode dummy(0);
        ListNode* current = &dummy;
        int carry = 0;

        while (l1 != nullptr || l2 != nullptr || carry != 0) {
            int val1, val2;

            if (l1 != nullptr) {
                val1 = l1->val;
            } else {
                val1 = 0;
            }

            if (l2 != nullptr) {
                val2 = l2->val;
            } else {
                val2 = 0;
            }

            int sum = val1 + val2 + carry;
            carry = sum / 10;

            current->next = new ListNode(sum % 10);
            current = current->next;

            if (l1 != nullptr) {
                l1 = l1->next;
            }

            if (l2 != nullptr) {
                l2 = l2->next;
            }
        }

        return dummy.next;
    }
};
