#pragma once
#include "ListNode.h"
#include "Solution.h"	
#include <vector>


class OutputTask{
public:
	OutputTask() = default;
	OutputTask(vector<int> data_list1, vector<int> data_list2, vector<int> data_expected, int example);
	void run();
	void print();
	void printList(ListNode* list);
	bool compare(ListNode* list1, ListNode* list2);
private:
	ListNode* output;
	ListNode* l1;
	ListNode* l2;
	ListNode* expected;
	Solution solution;	
	int example;
};

