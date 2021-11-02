// 抽象工厂.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
//产品球
class AbstractBall
{

public:
	AbstractBall() {};
	void play() {};
};

class Basketball :public AbstractBall
{
public:
	Basketball()
	{
		play();
	}
	void play()
	{
		printf("ZZD play basketball\n");
	}
};
class Football :public AbstractBall
{
public:
	Football()
	{
		play();
	}
	void play()
	{
		printf("ZZD play football\n");
	}
};

//产品衬衫
class ABstractShirt
{
public:
	ABstractShirt() {};
	void wearShirt() {};
};

class BasketballShirt : public ABstractShirt
{
public:
	BasketballShirt()
	{
		wearShirt();
	}
	void wearShirt()
	{
		printf("ZZD wear Basketball shirt\n\n");
	}
};
class FootballShirt : public ABstractShirt
{
public:
	FootballShirt()
	{
		wearShirt();
	}
	void wearShirt()
	{
		printf("ZZD wear Football shirt\n\n");
	}
};

//工厂
class AbstractFactory
{
public:
	virtual AbstractBall* getBall() = 0;
	virtual ABstractShirt* getShirt() = 0;
};

class BasketballFactory :public AbstractFactory
{
public:
	BasketballFactory()
	{
		printf("BasketballFactory\n");
	}

	AbstractBall* getBall()
	{
		printf("ZZD get basketball\n");
		return new Basketball();
	}

	ABstractShirt* getShirt()
	{
		printf("ZZD get basketball shirt\n");
		return new BasketballShirt();
	}
};
class FootballFactory :public AbstractFactory
{
public:
	FootballFactory()
	{
		printf("FootballFactory\n");
	}

	AbstractBall* getBall()
	{
		printf("ZZD get football\n");
		return new Football();
	}

	ABstractShirt* getShirt()
	{
		printf("ZZD get football shirt\n");
		return new FootballShirt();
	}
};

int main()
{
	printf("抽象工厂开始\n");

	AbstractFactory* fac = NULL;
	AbstractBall* ball = NULL;
	ABstractShirt* shirt = NULL;

	fac = new BasketballFactory();
	ball = fac->getBall();
	shirt = fac->getShirt();

	fac = new FootballFactory();
	ball = fac->getBall();
	shirt = fac->getShirt();




	system("pause");
	return 0;
}


