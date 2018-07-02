/*
 * search_range.h
 *
 *  Created on: 2018年7月1日
 *      Author: yilinliu
 */

#ifndef SEARCH_RANGE_H_
#define SEARCH_RANGE_H_

#include "common.h"

namespace search_range {

class Solution {
public:
	vector<int> search_range(int* arr, int len, int target) {

		vector<int> x;
		int low = 0;
		int high = len-1;

		while (low <= high) {
			int mid = low + (high - low)/2;
			if (arr[mid] >= target) {
				high = mid-1;
			} else {
				low = mid+1;
			}
		}

		cout << "low:" << low << ",high: " << high << endl;

		x.push_back(low);
		low = 0;
		high = len-1;
		while(low <= high) {
			int mid = low + (high-low)/2;
			if (arr[mid] <= target) {
				low = mid + 1;
			} else {
				high = mid - 1;
			}
		}
		x.push_back(high);
		cout << "low:" << low << ",high: " << high << endl;
		return x;
	}
};


void test() {
	Solution a;
	int arr[] = {1,2,2,3,4};
	int len = sizeof(arr)/sizeof(int);
	int target = 2;

	vector<int> x = a.search_range(arr, len, target);
	for (int i=0; i<x.size();i++) {
		cout << i << ":" << x.at(i) << endl;
	}
}

}



#endif /* SEARCH_RANGE_H_ */
