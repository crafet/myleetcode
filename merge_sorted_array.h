/*
 * merge_sorted_array.h
 *
 *  Created on: 2018年7月1日
 *      Author: yilinliu
 */

#ifndef MERGE_SORTED_ARRAY_H_
#define MERGE_SORTED_ARRAY_H_
#include "common.h"
namespace merget_sorted_array {

/**
 *
 */
class Solution {
public:
	//assuming a has enough size for two arrays, then a.capacity > a.size + b.size
	void merge_sorted_array(int* a, int alen, int* b, int blen) {

		int m = alen - 1;
		int n = blen - 1;
		// m >> n

		// last position for new array
		int cur = alen + blen - 1;
		while (m >=0 && n >= 0) {
			if (a[m] >= b[n]) {
				a[cur--] = a[m--];

			} else {
				a[cur--] = b[n--];

			}
		}

		cout << "cur:" << cur << ",m:" << m << ",n:" << n << endl;
		// the longest one left
		while (m >= 0) {
			a[cur--] = a[m--];
		}
		while (n >= 0) {
			a[cur--] =a[n--];
		}

	}
};

void print(int* x, int len) {
	cout <<"========" << endl;
	cout << "capacity:" << len << endl;
	for(int i=0; i < len; i++) {
		cout << x[i] << ",";
	}
	cout << endl;
}

void test() {
	Solution s;
	int arr[10] = {1,2,3,4,5};
	int alen = sizeof(arr)/sizeof(int);
	//vector<int> a(arr, arr+len_a);

	int brr[] = {2,3,4,5,6};
	int blen = sizeof(brr)/sizeof(int);
	//vector<int> b(brr, brr+len_b);

	//a.reserve(len_a+len_b);

	print(arr, 10);

	//!set 5 here, not alen, which is 10;
	// a bit tricky
	s.merge_sorted_array(arr, 5, brr, blen);
	print(arr, 10);
}

} // namespace




#endif /* MERGE_SORTED_ARRAY_H_ */
