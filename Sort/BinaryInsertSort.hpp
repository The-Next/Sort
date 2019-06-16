#pragma once
#include<iostream>
using namespace std;
/*折半插入排序*/
void binaryinsertsort(int* a, int length) {
	int j,x, mid;      /*x用来存储当前待排序的数据，mid充当比较区间的中点*/
	int low, high;     /*low代表要与a[i]进行比较的有序区间的第一个元素所在位置。high代表要与a[i]进行比较的有序区间的最后一个元素所在位置。*/
	for (int i = 1; i < length; i++){
		x = a[i];
		low = 0;      /*第一次划分有序比较区间，比较区间的第一个元素所在位置为0*/
		high = i - 1;   /*第一次划分有序比较区间，比较区间的最后一个元素所在位置为n-1*/
		/*比较查找a[i]合适插入的位置*/
		while (low <= high){
			mid = (low + high) / 2;
			if (x > a[mid]){
				low = mid + 1;
			}
			else{
				high = mid - 1;
			}
		}
		/*确定好位置后，将位置之后的数据后移，插入待排序数据*/
		for (j = i - 1; j > high; j--){
			a[j + 1] = a[j];
		}
		a[j + 1] = x;
	}
}