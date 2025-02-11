#include "ListNode.h"

void ListNode::list_init(vector<int> data_list) {
	ListNode* temp = this;
	for (int i = 0; i < data_list.size(); i++) {
		temp->val = data_list[i];
		if (i < data_list.size() - 1) {
			temp->next = new ListNode();
			temp = temp->next;
		}
	}
}
