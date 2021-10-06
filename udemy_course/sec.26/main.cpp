#include <iostream>

#include "A.cpp"
#include "B.cpp"

using namespace std;

/* クラス間相互参照
 * あるクラスのプロパティとして、別のクラスのインスタンスを持つ例
 * Aを呼び出し元とし、コンストラクタでBのインスタンスも生成している
 * このほかに、A, B ともにmainから生成し、
 * setAとか setBのセッターメソッドを通じてプロパティにセットするという方法もある
 * 
 */

int main() {
	/* インスタンス aを作成 */
	A a;
	a.foo();
	a.bar(); /* aを通じて、Bのインスタンスのbazメソッドが実行される */
	return 0;
}