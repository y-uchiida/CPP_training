#include <iostream>
#include "./CSample.cpp" /* cpp ファイル経由でヘッダでのクラス定義も読み込みされる */

using namespace std;

int main()
{
	CSample obj1; /* CSample クラスから、obj1 オブジェクトを生成 */
	CSample obj2; /* CSample クラスから、obj2 オブジェクトを生成 */

	obj1.set(1);
	obj2.set(2);

	cout << "obj1.m_num: " << obj1.get() << endl;
	cout << "obj2.m_num: " << obj2.get() << endl;
	cout << endl;

	return (0);
}