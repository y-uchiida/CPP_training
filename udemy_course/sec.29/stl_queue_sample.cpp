#include <iostream>
#include <stack>
#include <queue>

/* Queue
 * FIFOなデータ構造を利用できるSTL
 */

using namespace std;

int main() {
	/* int 型を保持するqueueを宣言 */
	queue<int> que;
	int data[] = { 1, 2, 3 };   //  登録するデータ

	/* queue::push(値) でデータを追加する */
	for (int i = 0; i < 3; i++) {
		que.push(data[i]);
	}

	while (!que.empty()) {
		/* popで、最初に追加した要素を削除する
		 * popは、削除しかしない(ほかの言語だと、値を取り出して削除だったりするけど、C++では削除のみ)
		 * そのため、データを利用したい場合はあらかじめfrontで要素を取得し、そのあとにpopする
		 */
		cout << que.front() << " -> ";
		que.pop();
	}
	cout << "[end]" << endl;
	return 0;
}
