#include <iostream>
#include"Intarray.h"
using namespace std;

//void Show(IntArray array)
//{
//	for (int i = 0;i < array.Size();++i)
//	{
//		cout << array.Get(i) << ' ';
//	}
//	cout << endl;
//}

//int main()
//{
//	IntArray array0to9(10);
//	for (int i = 0;i < array0to9.Size();++i)
//	{
//		array0to9.Set(i, i);
//	}
//	Show(array0to9);
//}

int main()
{
	cout << "aaa" << endl;
	IntArray a(5);
	IntArray b(5);

	for (int i = 0, size = a.Size();i < size;++i)
	{
		int n;
		cin >> n;
		a.Set(i, n);
	}
	b = a;
	for (int i = 0, size = b.Size();i < size;++i)
	{
		b.Set(i, b.Get(i) * 2);
	}

	for (int i=0,size=a.Size();i<size;++i)
	{
		cout << a.Get(i) << "->" << b.Get(i) << endl;
	}
}