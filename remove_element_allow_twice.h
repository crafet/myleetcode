/*
 * remove_element_allow_twice.h
 *
 *  Created on: 2018年7月1日
 *      Author: yilinliu
 */

#ifndef REMOVE_ELEMENT_ALLOW_TWICE_H_
#define REMOVE_ELEMENT_ALLOW_TWICE_H_

#include "common.h"

namespace remove_element_allow_twice {

class Solution {
public:
	// parameter arr is a sorted array
	int remove_element_allow_twice(int* arr, int len, int limit) {

		int j = 0;
		// only count < 2 will be recorded
		int count = 0;
		for (int i=1; i<len; i++) {
			if (arr[j] == arr[i]) {
				count ++;
				if (count < limit) {
					arr[++j] = arr[i];
				}
			} else {
				// another element
				arr[++j] = arr[i];

				// reset for new element
				count = 0;
			}
		} // for


		return j+1;
	}
};


void test () {

	Solution a;
	// sorted array for test
	int arr [] = {1,1,2,3,4,5,5,5,6,6,6,6,40};
	int len = sizeof(arr) / sizeof(int);
	int limit = 1;
	int left = a.remove_element_allow_twice(arr, len, limit);
	cout << "left:" << left << endl;

	for (int i=0; i<left; i++) {
		cout << i << ":" << arr[i] << endl;
	}
}
}

#endif /* REMOVE_ELEMENT_ALLOW_TWICE_H_ */
