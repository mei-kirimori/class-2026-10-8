#include <iostream>
using namespace std;

const int MAX_NAME = 16;
int sum;

class  Student
{
public:
	char name[MAX_NAME + 1];
	int scoreJapanese;
	int scoreMath;
	int scoreEnglish;
	int scoreSociety;
	int scoreScience;


	void show();
	void average();
};
void Student::show()
{
	cout << "名前：" << name << endl
		<< "国語：" << scoreJapanese << "点"
		"、数学：" << scoreMath << "点"
		"、英語：" << scoreEnglish << "点"
		"社会：" << scoreSociety << "点"
		"理科" << scoreScience << "点" << endl;
}
void Student::average()
{
	int average = (scoreJapanese + scoreMath + scoreEnglish + scoreSociety + scoreScience) / 5;

	cout << "名前：" << name << endl
		<< "平均点は" << average << "点です" << endl;
	sum += average;
}
int main()
{
	int loop = 0;
	Student student[] =
	{
		{"赤井孝",73,98,86,79,90,},
		{ "笠井大介",64,45,40,35,53,},
		{ "吉田叶",76,78,69,80,73,},
	};
	
	int size = sizeof student / sizeof * student;
	
	for (int i = 0;i < size;++i,++loop)
	{
		student[i].show();
		student[i].average();
	}
	cout << "全体の全科目平均点は" << sum/loop << "点です" << endl;
}

