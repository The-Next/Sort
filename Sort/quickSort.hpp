#pragma once
#include<iostream>
using namespace std;
void exch(int* a, int i, int j) {
	int swap = a[i];
	a[i] = a[j];
	a[j] = swap;
}
/*三向切分快速排序*/
void quicksort(int*a, int lo, int hi) {
	if (hi <= lo)return;
	int lt = lo, i = lo + 1, gt = hi;
	int v = a[lo];
	while (i <= gt){
		if (a[i] < v) {
			exch(a, lt++, i++);
		}
		else if(a[i] > v){
			exch(a, i, gt++);
		}
		else{
			i++;
		}
	}
	quicksort(a, lo, lt - 1);
	quicksort(a, gt+1, hi);
}
