#pragma once
#include<iostream>
using namespace std;
/*�۰��������*/
void binaryinsertsort(int* a, int length) {
	int j,x, mid;      /*x�����洢��ǰ����������ݣ�mid�䵱�Ƚ�������е�*/
	int low, high;     /*low����Ҫ��a[i]���бȽϵ���������ĵ�һ��Ԫ������λ�á�high����Ҫ��a[i]���бȽϵ�������������һ��Ԫ������λ�á�*/
	for (int i = 1; i < length; i++){
		x = a[i];
		low = 0;      /*��һ�λ�������Ƚ����䣬�Ƚ�����ĵ�һ��Ԫ������λ��Ϊ0*/
		high = i - 1;   /*��һ�λ�������Ƚ����䣬�Ƚ���������һ��Ԫ������λ��Ϊn-1*/
		/*�Ƚϲ���a[i]���ʲ����λ��*/
		while (low <= high){
			mid = (low + high) / 2;
			if (x > a[mid]){
				low = mid + 1;
			}
			else{
				high = mid - 1;
			}
		}
		/*ȷ����λ�ú󣬽�λ��֮������ݺ��ƣ��������������*/
		for (j = i - 1; j > high; j--){
			a[j + 1] = a[j];
		}
		a[j + 1] = x;
	}
}