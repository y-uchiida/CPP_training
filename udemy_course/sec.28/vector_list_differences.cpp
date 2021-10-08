#include <iostream>
#include <string>
#include <vector>
#include <list>

using namespace std;

/* Vector と Listのちがい
 * Vectorは可変長配列であり、要素番号によってデータの順番を管理する
 * Listは双方向連結リストなので、要素番号というものはない
 * 要素番号を用いてランダムアクセスが高速に行えるVector
 * リスト内のデータの追加・削除が柔軟に行えるList
 * それぞれの利点が生きる場面を考えて使い分ける
 */

int main()
{
	vector<string> vct;
	list<string> lst;
	vector<string>::iterator itr_vct;
	list<string>::iterator itr_lst;

	vct.push_back("HELLO");
	vct.push_back("WORLD");
	lst.push_back("hello");
	lst.push_back("world");
	lst.push_back("!");

	/* vectorでのイテレータ */
	for (itr_vct = vct.begin(); itr_vct != vct.end(); itr_vct++)
	{
		cout << *itr_vct << endl;
	}

	itr_lst = lst.begin();
	lst.remove(*itr_lst); /* Listでは、要素の削除ができる(ここでは先頭の"hello"を削除) */
	for (itr_lst = lst.begin(); itr_lst != lst.end(); itr_lst++)
	{
		cout << *itr_lst << endl;
	}
}