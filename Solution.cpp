#include "Solution.h"

ListNode* Solution::addTwoNumbers(ListNode* l1, ListNode* l2){
	int overflow = 0;
	ListNode* result = new ListNode();
	ListNode* temp = result;
	while (l1 != nullptr || l2 != nullptr) {
		int sum = (l1 != nullptr ? l1->val : 0) + (l2 != nullptr ? l2->val : 0) + overflow;
		overflow = sum / 10;
		temp->val = sum % 10;
		if (l1 != nullptr) l1 = l1->next;
		if (l2 != nullptr) l2 = l2->next;
		if (l1 != nullptr || l2 != nullptr) {
			temp->next = new ListNode();
			temp = temp->next;
		}
	}
	if (overflow > 0) {
		temp->next = new ListNode(overflow);
	}
    return result;
}
