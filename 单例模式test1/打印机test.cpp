#include <iostream>
using namespace std;
#include <string.h>

class Printer
{
	Printer() 
	{
		m_iCount = 0;
	}
	Printer(const Printer& obj) {};
	static Printer* m_pInstance;
	int m_iCount;
public:
	static Printer* GetInstance()
	{
		return m_pInstance;
	}
	void show(string msg)
	{
		cout << msg << endl;
		m_iCount++;
	}
	void Getm_iCount()
	{
		cout << m_iCount << endl;
	}
};
Printer* Printer::m_pInstance = new Printer;


int main()
{
	Printer* p1 = Printer::GetInstance();
	p1->show("��ְ����");
	p1->show("��ְ����");
	p1->show("��������");
	p1->show("��������");
	p1->Getm_iCount();

	Printer* p2 = Printer::GetInstance();
	p2->show("�ݼ�����");
	
	p2->Getm_iCount();
}