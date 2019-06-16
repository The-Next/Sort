#pragma once
#include<iostream>
#include<vector>
using namespace std;
int parent(int i) {
	return i / 2;
}
int left(int i) {
	return 2 * i;
}
int right(int i) {
	return 2 * i + 1;
}
void Maxheapify(vector<int>& A, int i, int length) {
	int largest;
	int l = left(i);// ���ӽڵ�����
	int r = right(i);// ���ӽڵ�����
	//cout<<i<<"  "<<l<<"  "<<r<<"  "<<A.size()<<endl;
	if (l<length && A[l]>A[i]) {//�������ж�ɸѡ��ǰ�ڵ��������ӽڵ�����ֵ
		largest = l;
	}
	else {
		largest = i;
	}
	if (r<length && A[r]>A[largest]) {
		largest = r;
	}
	//cout<<A[largest]<<endl;
	if (largest != i) {//��ǰ�ڵ����������������ֵ����
		int k = A[i];
		A[i] = A[largest];
		A[largest] = k;
		Maxheapify(A, largest, length);//���������ظ��˲���
	}
}
void buildmaxheap(vector<int>& A) {//��������
	int length = A.size();
	for (int i = A.size() / 2; i >= 1; i--){
		Maxheapify(A, i, length);
	}
}
/*������*/
void heapsort(vector<int>& A) {
	buildmaxheap(A);
	int length = A.size();
	//cout<<length<<endl;
	for (int i = length - 1; i >= 2; i--){
		//cout<<"key  "<<A[1]<<endl;
		int k = A[i];
		A[i] = A[1];
		A[1] = k;
		length -= 1;
		//cout<<length<<endl;
		Maxheapify(A, 1, length);
	}
}
/*
int main() {
	vector<int> n;
	n.push_back(0);
	n.push_back(4);
	n.push_back(1);
	n.push_back(3);
	n.push_back(2);
	n.push_back(16);
	n.push_back(9);
	n.push_back(10);
	n.push_back(14);
	n.push_back(8);
	n.push_back(7);
	heapsort(n);
	for (int i = 0; i < 11; i++)
	{
		cout << n[i] << endl;
	}

	return 0;
}
*/
