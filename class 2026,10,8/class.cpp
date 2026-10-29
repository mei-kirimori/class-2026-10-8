//#include <iostream>
//using namespace std;
//
//const int max_name = 16;
//
//class student
//{
//	char name[max_name + 1];
//	int scorejapanese;
//	int scoremath;
//	int scoreenglish;
//};
//
//void show(const student& student)
//{
//	cout << "名前：" << student.naem<<endl
//		<< "国語：" << student.scorescorejapanese<<
//		"、数学：" << student.scoremath<<
//		"、英語：" << student.scoreenglish<< "点" << endl;
//}
//
//int main()
//{
//	student student[] =
//	{
//		{"赤井孝",73,98,86},
//		{ "笠井大介",64,45,40 },
//		{ "吉田叶",76,78,69 },
//	};
//
//	int size = sizeof student / sizeof * student;
//
//	for (int i = 0;i < size;++i)
//	{
//		student[i].show();
//	}
//}