#include <iostream>
#include <list>

using namespace std;

/* List
 * 双方向連結リストを扱うSTLのクラス
 * list<利用する型名> 変数名　で宣言する
 * push_back() メソッドで末尾に、push_front() メソッドで先頭にデータを挿入する
 * イテレータオブジェクトを利用して線形処理ができる
 * list<利用する型名>::iterator itr　でイテレータを宣言する
 */

int main()
{
	list<int> lst;
	lst.push_back(1);  /* 末尾にデータを挿入 */ /* {1} */
	lst.push_back(2); /* 末尾にデータを挿入 */ /* {1, 2} */
	lst.push_front(3);  /* 先頭にデータを挿入 */  /* {3, 1, 2} */
	lst.push_back(4);  /* 末尾にデータを挿入 */ /* {3, 1, 2, 4} */
	lst.push_front(5);  /* 先頭にデータを挿入 */ /* {5, 3, 1, 2, 4} */

	/* イテレータの宣言 */
	list<int>::iterator itr;
	itr = lst.begin(); /* イテレータを先頭に設定 */ /* {5(<-itr), 3, 1, 2, 4} */
	itr++; /* イテレータの位置を加算 */ /* {5, 3(<-itr), 1, 2, 4} */
	lst.insert(itr, 6); /* 今の値の前に、新しい値の挿入 */ /* {5, 6, 3(<-itr), 1, 2, 4} */

	/* 一覧表示 */
	for (itr = lst.begin(); itr != lst.end(); itr++)
	{
		/* *itr で、指し示しているlistの要素の値を表示できる */
		cout << *itr << " -> ";
	}
	cout << endl;
	return 0;
}