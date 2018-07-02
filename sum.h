/*
 * sum.h
 *
 *  Created on: 2018年7月1日
 *      Author: yilinliu
 */

#ifndef SUM_H_
#define SUM_H_

#include "common.h"
namespace sum {

class Solution {

public:
	vector<int> get_sum_index(int* a, int len, int target) {
		map<int, int> m;


		vector<int> x;
		for (int i=0; i<len; i++) {
			int key = a[i];
			m[key] = i;
			int left = target - key;

			map<int, int>::iterator iter = m.find(left);
			if (iter != m.end()) {
				x.push_back(min(iter->second+1, i+1));
				x.push_back(max(iter->second+1, i+1));
			}
		}

		// assuming there should be at least one solution for target
		if (x.empty()) {
			return vector<int>(2, -1);
		}
	}
};


void test() {
	Solution s;
	int a[] = {2,7,9,11};
	vector<int> x = s.get_sum_index(a, 4, 90);

	print_array(a, 4);

	print_vector(x);
}

}



#endif /* SUM_H_ */
