/*
 * remove_element_in_sort.h
 *
 *  Created on: 2018年7月1日
 *      Author: yilinliu
 */

#ifndef REMOVE_ELEMENT_IN_SORT_H_
#define REMOVE_ELEMENT_IN_SORT_H_

#include "common.h"

namespace revmoe_element_in_sort {

class Solution {
public:
	// only keep one element if it is duplicated
	int remove_element_in_sort(int* arr, int len) {

		int j = 0;
		for (int i=1;i<len;i++) {
			// same element are in sequence,
			// element in position j will be the only one for duplicated elements
			// so keep j as the only element is sufficient
			if (arr[j] != arr[i]) {
				arr[++j] = arr[i];
			}
		}
		return j+1;
	}
};

void test() {
	Solution a;

	int arr[] = {1,2,3,3,4,5,5};
	int len = sizeof(arr)/sizeof(int);
	int left = a.remove_element_in_sort(arr, len);
	cout << "left:" << left << endl;

	for (int i=0;i<left;i++) {
		cout << i << ":" << arr[i] << endl;
	}


}

} // namespace



#endif /* REMOVE_ELEMENT_IN_SORT_H_ */
