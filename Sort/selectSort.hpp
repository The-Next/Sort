#pragma once
#include<iostream>
using namespace std;
void exch(int* a, int i, int j) {
	int swap = a[i];
	a[i] = a[j];
	a[j] = swap;
}
/*ѡ������*/
void selectsort(int* a, int length) {
	for (int i = 0; i < length; i++){//��a[i]��a[i+1...length]����СԪ�ؽ���
		int min = i;//��СԪ������
		for (int j = i+1; j < length; j++){
			if (a[j] < a[min]) {
				min = j;
			}
		}
		exch(a, i, min);
	}
}