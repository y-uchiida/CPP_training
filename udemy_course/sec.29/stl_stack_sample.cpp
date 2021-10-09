#include <iostream>
#include <stack>
#include <queue>

/* Stack
 * LIFOなデータ構造を利用できるSTL
 */

using namespace std;

int main() {
	/* int 型を保持するstackを宣言 */
	stack<int> stk;
	int data[] = { 1, 2, 3 };   //  登録するデータ
	
	/* stack::push(値) でデータを追加する */
	for (int i = 0; i < 3; i++) {
		stk.push(data[i]);
	}

	while (!stk.empty()) {
		/* popで、最後に追加した要素を削除する
		 * popは、削除しかしない(ほかの言語だと、値を取り出して削除だったりするけど、C++のstackは削除のみ)
		 * そのため、データを利用したい場合はあらかじめtopで要素を取得し、そのあとにpopする
		 */
		cout << stk.top() << " -> ";
		stk.pop();
	}
	cout << "[end]" << endl;

	return (0);
}
