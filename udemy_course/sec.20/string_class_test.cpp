#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s; /* stringはクラスで、sはオブジェクト */

	/* 値を直接代入することができる...C言語ではできなかった */
	s = "This is string value";

	/* string オブジェクトのメソッド、appendは文字列末尾に値を追記できる */
	s.append(", and append words");

	/* length() メソッドで、文字数をカウントして表示できる */
	cout << "s = " << s << " (" << s.length() << " chars)" << endl;

	/* c_str() メソッドは、文字列のポインタを返す */
	printf("s.c_str(): %s\n", s.c_str());
	

	return (0);
}
