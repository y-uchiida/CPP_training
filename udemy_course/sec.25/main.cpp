#include <iostream>

using namespace std;

void ref(int &n);

int main()
{
	int n;
	n = 1000;

	printf("n in main before ref() call: %d(%p)\n\n", n, &n);

	/* 呼び出し側では、ふつうにnの値を渡しただけのつもりが... */
	ref(n);

	/* ref 実行後、nの値が変わっている
	 * ref() のほうで、参照を受け取るようになっているため。
	 * C言語のポインタ渡しと違って、呼び出し側で明示的に渡さなくても
	 * 値が書き換わる可能性があるので注意が必要
	 */
	printf("n in main after ref() call: %d(%p)\n", n, &n);

}

/* 引数に、& をつけることで参照として渡せる
 * 渡す側では普通に値を渡すだけなのに、参照を受け取る
 * ref() の中で変更した内容が、呼び出しもとの変数にも反映される
 */
void ref(int &n)
{
	n += 42;
	printf("n in ref: %d(%p)\n\n", n, &n);
}