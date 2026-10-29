#include<iostream>
using namespace std;

class subjectscore
{
public:
	int mathScore;
	
	int englishScore;
	subjectscore();
	
	int sum();
	
	void setJapaneseScore();
	void showJapaneseScore();
private:
	int japaneseScore;
};
void subjectscore::setJapaneseScore()
{
	cin >> japaneseScore;
}
void subjectscore::showJapaneseScore()
{
	cout << japaneseScore << endl;
}
subjectscore::subjectscore()
{
	mathScore = 0;
	japaneseScore = 0;
	englishScore = 0;
}

int subjectscore::sum()
{
	{
		return mathScore + japaneseScore + englishScore;
	}
}

int main()
{
	 subjectscore student[5];
	 for (int i = 0;i < 5;++i)
	 {
		 cout << i+1 << "番目の人の数学のスコアを入力してください" << endl;
		 cin >> student[i].mathScore;
		 cout << i + 1 << "番目の人の国語のスコアを入力してください" << endl;
		 student[i].setJapaneseScore();
		 cout << i + 1 << "番目の人の英語のスコアを入力してください" << endl;
		 cin >> student[i].englishScore;
	 }
	 
	 for (int i = 0;i <5;++i)
	 {
		 cout << i+1 << "番目の人の成績は" << endl;
		 cout << "数学:" << student[i].mathScore << endl;
		 cout << "国語:"; student[i].showJapaneseScore();       //ここバリきもくておもろい
		 cout << "英語:" << student[i].englishScore << endl;
		 cout << "成績の合計pointは" << student[i].sum() << endl;
	 }
}

