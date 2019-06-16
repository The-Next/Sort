#pragma once
#include<iostream>
using namespace std;
void bubbsort(int* a, int length) {
	int temp;
	for (int i = 0; i < length; i++){
		for (int j = length-1;  j > i;  j--){
			if (a[j]<a[j-1]){
				temp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = temp;
			}
		}
	}
}