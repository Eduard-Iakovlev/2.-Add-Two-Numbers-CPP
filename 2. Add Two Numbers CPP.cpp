#include <iostream>
#include <vector>
#include <windows.h>
#include "OutputTask.h"

using namespace std;

int main(){
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    vector<int> data_list1, data_list2, data_expected;
    int example = 0;
    OutputTask task;
    

	example++;
	data_list1 = { 2, 4, 3 };
	data_list2 = { 5, 6, 4 };
	data_expected = { 7, 0, 8 };
	task = OutputTask(data_list1, data_list2, data_expected, example);
	task.print();

    example++;
	data_list1 = { 0 };
	data_list2 = { 0 };
	data_expected = { 0 };
	task = OutputTask(data_list1, data_list2, data_expected, example);
	task.print();

	example++;
	data_list1 = { 9, 9, 9, 9, 9, 9, 9 };
	data_list2 = { 9, 9, 9, 9 };
	data_expected = { 8, 9, 9, 9, 0, 0, 0, 1 };
	task = OutputTask(data_list1, data_list2, data_expected, example);
	task.print();


    
}
