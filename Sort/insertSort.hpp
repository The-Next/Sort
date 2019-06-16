#pragma once
#include<iostream>
using namespace std;
/*
int main(int argc, char const* argv[])
{
	void insertSort(int* a, int length);
	int a[5] = { 9,7,90,6,87 };
	insertSort(a, 5);
	for (int i = 0; i < 5; i++) {
		cout << a[i] << endl;
	}
	return 0;
}
*/
	/*插入排序*/
void insertSort(int* a, int length) {
	int key, i;
	for (int j = 1; j < length; j++) {//从第二个开始遍历，直到最后一个
		key = a[j];//标记当前需要插入的数
		i = j - 1;//i作为指针，遍历j之前的数
		while (i >= 0 && a[i] > key) {
			//开始遍历，如果遍历到的数比key大，就把这个数向后移一位，知道循环完毕或者碰到比key小的数
			a[i + 1] = a[i];
			i = i - 1;
		}
		a[i + 1] = key;//将key插入
	}
}