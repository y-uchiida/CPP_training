#include <iostream>
#include "CSample.cpp"

using namespace std;

/* カプセル化
 * オブジェクト指向の原則の一つで、オブジェクト内の状態を
 * 外部から直接変更できないようにすること
 * メンバ変数はprivateメソッドで宣言しておき、
 * メンバ変数へのアクセスは、getXXやsetXXといったアクセサメソッドを用いる
 */

int main()
{
	/* CSample クラスのオブジェクトを宣言 */
	CSample s;

	/* setNum()でnumメンバに値を代入 */
	s.setNum(1000);

	/* getNumでnumメンバの値を取り出す */
	cout << s.getNum() << endl;
	return (0);
}