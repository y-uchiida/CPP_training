#include <iostream>
#include <string> /* string型を利用する場合に追記 */

using namespace std;

int main()
{
	int n;
	std::string str; /* (データ型として)stringが使える */

	/* cinは、標準入力のストリーム
	 * >> の記号と組み合わせると、右辺の変数やファイルストリームに標準入力から受け取った文字列を渡せる
	 */
	std::cout << "please input number: ";
	std::cin >> n;
	std::cout << "inputed number: " << n << std::endl;

	cout << endl;

	/* 自動的に、可変長文字列としてstring 変数に文字列データを入れてくれる */
	std::cout << "please input string: ";
	std::cin >> str;
	std::cout << "inputed string: " << str << std::endl;

	return (0);
}