#pragma once
#include<iostream>
using namespace std;
void exch(int* a, int i, int j) {
	int swap = a[i];
	a[i] = a[j];
	a[j] = swap;
}
/*Ï£¶ûÅÅÐò*/
void shellsort(int* a,int length) {
	int h = 1;
	while (h < length/3){
		h = 3 * h + 1;
	}
	while ( h>=1 ){
		for (int i = h; i < length; i++){
			for (int j = i;  j >= h&&(a[j]<a[j-h]);  j-=h){
				exch(a, j, j - h);
			}
		}
		h = h / 3;
	}
}