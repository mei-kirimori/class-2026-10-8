#include<iostream>
using namespace std;

class Integer
{
public:
	int m_value;
	double m_dValue;

	Integer();
	Integer(int num);
	Integer(int num, double dnum);
	void Show();
};

Integer::Integer()
{
	m_value = 0;
	m_dValue = 0;
}
Integer::Integer(int num)
{
	m_value = num;
}
Integer::Integer(int num, double dnum)
{
	m_value = num;
	m_dValue = dnum;
}
void Integer::Show()
{
	cout << m_value << endl;
	cout << m_dValue << endl;	
}

int main()
{
	Integer a;
	Integer b(200);
	Integer c(200, 11.11);
	a.Show();
	b.Show();
	c.Show();
}