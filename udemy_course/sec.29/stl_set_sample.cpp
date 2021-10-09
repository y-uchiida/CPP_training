#include <iostream>
#include <string>
#include <set>
#include <vector>
#include <cstdio>

using namespace std;

/* Set
 * 集合を利用できるSTL
 * set <[型/クラス名]> [変数名]　で宣言する
 * setは、値の重複保存しないデータ構造
 * 同じ値が保存された場合、2つ目は保存しない
 */

int main() {
	set<string> names; /* string を保存するset を宣言する */

	names.insert("Tom");
	names.insert("Mike");
	names.insert("Mike"); /* Mike を2回保存してみる */
	names.insert("Bob");

	/* ループで全件表示しても、Mikeは1つしか出てこない */
	set<string>::iterator itr_set;
	for (itr_set = names.begin(); itr_set != names.end(); itr_set++) {
		cout << *itr_set << endl;
	}

	printf("\n");

	/* データがsetに含まれているかどうかを確認する... set::find(検索する値) */
	vector<string> searches = { "Bob", "Steve", "Tom", "Mike", "Thomas", "Fred" };
	int i;
	for (i = 0; i < searches.size(); i++) {
		itr_set = names.find(searches[i]);
		if (itr_set == names.end()) { /* 検索した値がsetに含まれていない場合、endを返してくる */
			cout << searches[i] << " is NOT exist in a set." << endl;
		}
		else {
			cout << searches[i] << " is exist a set." << endl;
		}
	}
	return 0;
}
