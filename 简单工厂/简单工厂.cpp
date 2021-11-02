// 简单工厂.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>


using namespace std;

class AbstractProduct
{
public:
	AbstractProduct() {}

	void printName() {};//抽象方法

	void play() {};
};

class Basketball :public AbstractProduct
{
public:
	Basketball()
	{
		printName();
		play();
	}

	void printName()
	{
		printf("ZZD get Basketball\n");
	}

	void play()
	{
		printf("ZZD play Basketball\n");
	}

};
class Football :public AbstractProduct
{
public:
	Football()
	{
		printName();
		play();
	}

	void printName()
	{
		printf("ZZD get Football\n");
	}

	void play()
	{
		printf("ZZD play Football\n");
	}

};
class Volleyball :public AbstractProduct
{
public:
	Volleyball()
	{
		printName();
		play();
	}

	void printName()
	{
		printf("ZZD get Volleyball\n");
	}

	void play()
	{
		printf("ZZD play Volleyball\n");
	}

};


//factory
class AbstractFactory
{
public:
	virtual AbstractProduct* getSportProduct() = 0;//???

	//AbstractProduct *getSportProduct(string productName)
	//{
	//	AbstractProduct* pro = NULL;
	//	if (productName == "Basketball")
	//	{
	//		pro = new Basketball();//父类指针 = new 子类
	//	}
	//	else if (productName == "Football")
	//	{
	//		pro = new Football();
	//	}
	//	else if (productName == "Volleyball")
	//	{
	//		pro = new Volleyball();
	//	}
	//	return pro;
	//}

};

class BasketballFactory :public AbstractFactory
{
public:
	BasketballFactory()
	{
		cout << "BasketballFactory" << endl;
	}

	AbstractProduct* getSportProduct()
	{

		return new Basketball();
	}

};
class FootballFactory :public AbstractFactory
{
public:
	FootballFactory()
	{
		cout << "FootballFactory" << endl;
	}

	AbstractProduct* getSportProduct()
	{

		return new Football();
	}

};
class VolleyballFactory :public AbstractFactory
{
public:
	VolleyballFactory()
	{
		cout << "VolleyballFactory" << endl;
	}

	AbstractProduct* getSportProduct()
	{

		return new Volleyball();
	}

};


int main()
{
	//简单
	cout << "简单工厂模式" << endl;
	/*Factory *fac = new Factory();
	AbstractProduct *product = NULL;

	product = fac->getSportProduct("Basketball");
	product = fac->getSportProduct("Football");
	product = fac->getSportProduct("Volleyball");*/

	//方式
	AbstractFactory* fac = NULL;
	AbstractProduct* product = NULL;

	fac = new BasketballFactory();
	product = fac->getSportProduct();
	fac = new FootballFactory();
	product = fac->getSportProduct();
	fac = new VolleyballFactory();
	product = fac->getSportProduct();


	system("pause");
	return 0;
}




