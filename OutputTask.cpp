#include "OutputTask.h"
#include <iostream>
#include <vector>

using namespace std;

OutputTask::OutputTask(vector<int> data_list1, vector<int> data_list2, vector<int> data_expected, int example){
	l1 = new ListNode();
	l2 = new ListNode();
	expected = new ListNode();
	output = new ListNode();
	l1->list_init(data_list1);
	l2->list_init(data_list2);
	expected->list_init(data_expected);
	this->example = example;
}

void OutputTask::run() {
	output = solution.addTwoNumbers(l1, l2);
}

void OutputTask::print(){
	cout << " ============ Тест " << example << " ============" << endl;
	cout << " Входные данные: " << endl;
	cout << " l1 = ";
	printList(l1);
	cout << " l2 = ";
	printList(l2);
	cout << " Ожидаемый результат: ";
	printList(expected);
	cout << " Полученный результат: ";
	run();
	printList(output);
	cout << " ============ Проверка ==================" << endl;
	compare(expected, output) ? cout << " Тест пройден" : cout << " Тест не пройден";
	cout << endl;
	cout << " ========================================\n" << endl;

}

void OutputTask::printList(ListNode* list){
	ListNode* temp = list;
	while (temp != nullptr) {
		cout << temp->val;
		if (temp->next != nullptr) {
			cout << " -> ";
		}
		temp = temp->next;
	}
	cout << endl;
}

bool OutputTask::compare(ListNode* list1, ListNode* list2){
	while (list1 != nullptr && list2 != nullptr) {
		if (list1->val != list2->val) {
			return false;
		}
		list1 = list1->next;
		list2 = list2->next;
	}
	return true;
}

