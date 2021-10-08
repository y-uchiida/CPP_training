#include <iostream>
#include <string>
#include <vector>

using namespace std;

/* Vector
 * 可変長配列を扱うSTLのクラス
 * vector<利用する型> 変数名 で宣言する
 * 使い方は、配列とほとんど同じ
 * 新しく要素に値を追加したい場合、vector変数.push_back(追加する値) を利用する
 */
int main()
{
	int i;

	/* int型vectorに値を入れてみる */
	vector<int> vct_1;
	vct_1.push_back(1);
	vct_1.push_back(2);
	vct_1.push_back(3);

	/* string型vectorに値を入れてみる */
	vector<string> vct_2;
	vct_2.push_back("ABC");
	vct_2.push_back("DEF");

	for (i = 0; i < vct_1.size(); i++)
	{
		cout << "vct_1[" << i << "]=" << vct_1[i] << endl;
	}
	cout << endl;
	for (i = 0; i < vct_2.size(); i++)
	{
		cout << "vct_2[" << i << "]=" << vct_2[i] << endl;
	}
	return 0;
}