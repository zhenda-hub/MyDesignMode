// 单例模式test1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;


class ChairMan
{
	ChairMan() {};
	ChairMan(const ChairMan& obj) {};
	static ChairMan* pINSTANCE;
public:
	static ChairMan* GetInstance()
	{
		return pINSTANCE;
	}
};
ChairMan* ChairMan::pINSTANCE = new ChairMan;//静态变量，类外初始化

int main1()
{
	
    /*ChairMan c1;
	ChairMan c2;
	ChairMan *pc = new ChairMan;*/
	/*ChairMan* p1 = ChairMan::pINSTANCE;
	ChairMan* p2 = ChairMan::pINSTANCE;

	if (p1 == p2)
	{
		cout << "p1p2相等" << endl;
	}
	else
	{
		cout << "p1p2不相等" << endl;

	}*/
	ChairMan* p1 = ChairMan::GetInstance();
	ChairMan* p2 = ChairMan::GetInstance();
	//ChairMan* p3 = new ChairMan(*p1);//使用p1的值来复制p3, 需要禁用
	if (p1 == p2)
	{
		cout << "p1p2相等" << endl;
	}
	else
	{
		cout << "p1p2不相等" << endl;

	}

	/*if (p1 == p3)
	{
		cout << "p1p3相等" << endl;
	}
	else
	{
		cout << "p1p3不相等" << endl;

	}*/
    return 0;
}

