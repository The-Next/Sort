#pragma once
#include<iostream>
using namespace std;
void exch(int* a, int i, int j) {
	int swap = a[i];
	a[i] = a[j];
	a[j] = swap;
}
/*选择排序*/
void selectsort(int* a, int length) {
	for (int i = 0; i < length; i++){//将a[i]与a[i+1...length]的最小元素交换
		int min = i;//最小元素索引
		for (int j = i+1; j < length; j++){
			if (a[j] < a[min]) {
				min = j;
			}
		}
		exch(a, i, min);
	}
}