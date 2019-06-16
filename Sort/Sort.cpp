/*
① 直接插入排序  1

② 折半插入排序  0

③ 希尔排序（增量选取5，3，1） 1

④ 冒泡排序 1

⑤ 快速排序 1

⑥ 简单选择排序 1

⑦ 堆排序 1

⑧ 二路归并排序 1
*/

#include"heapSort.hpp"
#include"insertSort.hpp"
#include"mergeSort.hpp"
#include"bubbleSort.hpp"
#include"shellSort.hpp"
#include"BinaryInsertSort.hpp"
int main(){
	int a[10] = { 10,9,8,7,6,5,4,3,2,1 };
    binaryinsertsort(a,10);
	for (int i = 0; i < 10; i++){
		cout << a[i] << endl;
	}
    cout << "Hello World!\n";
	return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
