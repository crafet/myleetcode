/*
 * plus_one.h
 *
 *  Created on: 2018年7月1日
 *      Author: yilinliu
 */

#ifndef PLUS_ONE_H_
#define PLUS_ONE_H_

namespace plus_one {

#include "common.h"

class Solution {
public:
	void plus_one(vector<int>& digits) {

		// + 1
		int len = digits.size();
		int c = 1;
		for (int i=len-1; i >=0; i--) {
			int t = digits[i] + c;
			digits[i] = t %10;
			c = t / 10;
			if (c == 0) {
				break;
			}
		}

		if (c > 0) {
			digits.insert(digits.begin(), c);
		}
	}
};

void test () {
	Solution a;
	int arr[] = {1,3,5,6,7,5,6,4,3,1,3,9};
	int len = sizeof(arr) / sizeof(int);
	vector<int> digits(arr, arr + len);
	cout <<"digits size:" << digits.size() << endl;

	for (int i=0; i<digits.size();i++) {
		cout << digits[i];
	}
	cout << endl;
	a.plus_one(digits);

	cout << "after plus one" << endl;
	for (int i=0; i<digits.size();i++) {
		cout << digits[i];
	}
	cout << endl;
}
}




#endif /* PLUS_ONE_H_ */
