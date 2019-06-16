#pragma once
#include<iostream>
using namespace std;
const int N = 204800;
void Merge(int* arr, int p, int q, int r) {
	int n1 = q - p + 1;//左数组长度
	int n2 = r - q;//右数组长度
	int *left = new int[n1 + 1], *right = new int[n2 + 1];//开辟新的左右数组
	for (int i = 0; i != n1; ++i) {
		left[i] = arr[p + i];//为左数组赋值
	}
	left[n1] = N;//左数组“哨兵”
	for (int j = 0; j != n2; ++j)
	{
		right[j] = arr[q + j + 1];//为右数组赋值
	}
	right[n2] = N;//右数组哨兵
	int i = 0, j = 0;
	for (int k = p; k != r + 1; ++k)//将左右数组归并至原数组
	{
		if (left[i] > right[j]) {
			arr[k] = right[j];
			++j;
		}
		else {
			arr[k] = left[i];
			++i;
		}
	}
}
/*归并排序*/
void MergeSort(int* arr, int p, int r) {
	//分治法，将数组分割，将复杂问题化简为数个简单问题
	if (p < r) {
		int q = (p + r) / 2;//数组分割标记，中间下标
		MergeSort(arr, p, q);//分割左边数组
		MergeSort(arr, q + 1, r);//分割右边数组
		Merge(arr, p, q, r);//进行归并排序
	}
}
/*
int main(int argc, char const* argv[])
{
	int arr[10] = { 300,60,22,16,85,89,30,99,103,55 };
	MergeSort(arr, 0, 9);

	for (int i = 0; i < 10; ++i)
	{
		cout << arr[i] << endl;
	}
	return 0;
}
*/
