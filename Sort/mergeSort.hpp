#pragma once
#include<iostream>
using namespace std;
const int N = 204800;
void Merge(int* arr, int p, int q, int r) {
	int n1 = q - p + 1;//�����鳤��
	int n2 = r - q;//�����鳤��
	int *left = new int[n1 + 1], *right = new int[n2 + 1];//�����µ���������
	for (int i = 0; i != n1; ++i) {
		left[i] = arr[p + i];//Ϊ�����鸳ֵ
	}
	left[n1] = N;//�����顰�ڱ���
	for (int j = 0; j != n2; ++j)
	{
		right[j] = arr[q + j + 1];//Ϊ�����鸳ֵ
	}
	right[n2] = N;//�������ڱ�
	int i = 0, j = 0;
	for (int k = p; k != r + 1; ++k)//����������鲢��ԭ����
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
/*�鲢����*/
void MergeSort(int* arr, int p, int r) {
	//���η���������ָ���������⻯��Ϊ����������
	if (p < r) {
		int q = (p + r) / 2;//����ָ��ǣ��м��±�
		MergeSort(arr, p, q);//�ָ��������
		MergeSort(arr, q + 1, r);//�ָ��ұ�����
		Merge(arr, p, q, r);//���й鲢����
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
