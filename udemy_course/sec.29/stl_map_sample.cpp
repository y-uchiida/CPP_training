#include <iostream>
#include <string>
#include <map>

using namespace std;

/* Map
 * 連想配列を利用できるSTL
 * map <[キーに使う型/クラス名], [値に使う型/クラス名]> [変数名]　で宣言する
 */

int main() {
	map <string, int> score; /* キーにstring, バリューにint を取るmap連想配列 scoreを作成 */
	map<string, int>::iterator itr_map; /* イテレータ */

	score["Tom"] = 100;          /* Tomの点数  : 100 */
	score["Bob"] = 80;           /* Bobの点数  :  80 */
	score["Mike"] = 120;         /* Mikeの点数 : 120 */

	/* イテレータを利用して、scoreの内容を順番に出力する
	 * mapの先頭要素はmap::begin, 末尾要素はmap::endで取得できる
	 * 末尾の要素と一致するまで、イテレータをインクリメントしていくことで全件操作できる 
	 */
	for (itr_map = score.begin(); itr_map != score.end(); itr_map++) {
		cout << itr_map->first << ": " << itr_map->second << endl;
	}
	return (0);
}
