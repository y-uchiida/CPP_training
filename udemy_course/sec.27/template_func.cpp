#include <iostream>
#include <string>

using namespace std;

/* テンプレート関数
 * 処理内容(演算子)が同一で、型が異なる場合に
 * あとからどの型のデータを利用するかを指定する形で記述する関数
 * ジェネリックプログラミングという考え方
 * テンプレートは、CPPでジェネリックプログラミングを行うための機能
 * Javaのジェネリクスに相当する
 * template <typename 仮の型名> と宣言しておき、ヘッダの中で仮の型名で処理を記述する
 */
template <typename T>
T add(T x, T y)
{
	return x + y;
}

int main()
{
	/* テンプレート関数を呼び出す際は、関数名の後にテンプレートを置き換える型名を記述する */
	cout << add<int>(4, 3) << endl;
	cout << add<string>("ABC", "DEF") << endl;

	/* プリミティブ型の場合は、置き換える型名を省略することができる */
	cout << add(1, 2) << endl;

	/* stringなど、クラスの場合は省略するとエラーになる */
	//	cout << add("abc", "def") << endl;

	/* テンプレートがひとつしか設定されていないところに、int と double など異なる型を設定するとエラーになる
	 * 2つの型を渡したい場合、 templateの仮型名も2つ用意しておかなければならない
	 * template <typename T, typename S>だと、2つ型を渡せる
	 */
	//	cout << add(1, 2.3) << endl; //  型が不一致した場合、使えない。
	return 0;
}