/*
 * remove_element.h
 *
 *  Created on: 2018年7月1日
 *      Author: yilinliu
 */

#include <iostream>
using namespace std;

namespace remove_element {
class Solution {
	public:
	int remove_element(int* arr, int len, int e) {
		cout << "remove element" << endl;

		int j = -1;
		for (int i=0;i<len;i++) {
			if (arr[i] == e) {
				continue;
			}
			// if not equal, copy it to current position
			arr[++j] = arr[i];
		}

		return j+1;
	}
};


void test_remove_element () {
	Solution a;
	int arr[] = {1,2,23,4,5,6};
	int len = sizeof(arr)/sizeof(int);

	int new_len = a.remove_element(arr, len, 9);
	cout << "new_len:" << new_len << endl;
	cout << "test new output" << endl;
	for (int i=0;i<new_len;i++) {
		cout << i << ":" << arr[i] << endl;
	}
}
} // namespace


