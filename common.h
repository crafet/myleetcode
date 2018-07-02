/*
 * common.h
 *
 *  Created on: 2018年7月1日
 *      Author: yilinliu
 */

#ifndef COMMON_H_
#define COMMON_H_

#include <iostream>
#include <vector>
#include <map>
using namespace std;



void print_vector(vector<int>&x) {
	cout << "==== print vector ====" << endl;
	for(int i=0; i<x.size(); i++) {
		cout << i << ":" << x.at(i) << ",";
	}
	cout << endl;
}

void print_array(int* x, int len) {
	cout << "==== print array ====" << endl;
	for(int i=0; i<len; i++) {
		cout << i << ":" << x[i] << ",";
	}
	cout << endl;
}
#endif /* COMMON_H_ */
