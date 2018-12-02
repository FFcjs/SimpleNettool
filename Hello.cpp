// ConsoleApplication1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <thread>
using namespace std;
class TA
{
public:
	int &mi;
	TA(int &i) :mi(i) 
	{
		cout << "构造函数执行" << endl;
	}
	TA(const TA &oTA) :mi(oTA.mi)
	{
		cout << "拷贝构造函数执行" << endl;
	}
	~TA()
	{
		cout << "析构函数执行" << endl;
	}
	void operator()()
	{
		/*cout << "子线程开始运行" << endl;
		cout << "子线程执行结束" << endl;*/
		cout << "mi=" << mi << endl;
		cout << "mi=" << mi << endl;
		cout << "mi=" << mi << endl;
		cout << "mi=" << mi << endl;
	}
};
void myprint()
{
	cout << "子线程开始运行" << endl;
	cout << "子线程执行结束1" << endl;
	cout << "子线程执行结束2" << endl;
	cout << "子线程执行结束3" << endl;
	cout << "子线程执行结束4" << endl;
	cout << "子线程执行结束5" << endl;
	cout << "子线程执行结束6" << endl;
	cout << "子线程执行结束7" << endl;
	cout << "子线程执行结束8" << endl;
	cout << "子线程执行结束9" << endl;
}

int main()
{
    std::cout << "Hello World!\n";
	/*int i = 6;
	TA oTA(i);
	thread mythread(oTA);
	mythread.detach();
	cout << "主线程执行结束" << endl;
	cout << "主线程执行结束" << endl;
	cout << "主线程执行结束" << endl;
*/

	auto mylamthread = []
	{
		cout << "子线程开始运行" << endl;
		cout << "子线程执行结束1" << endl;
	};
	thread mythread2(mylamthread);
	mythread2.join();
	cout << "主线程执行结束" << endl;
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
//   测试
