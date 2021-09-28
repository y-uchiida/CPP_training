#include <iostream>

using namespace std;

int main()
{
	/* int や float など、組み込みの型に対してもnew が使える */
	int *num;
	int i;
	float *flt;

	flt = new float(3.14);
	cout << "flt: " << *flt << endl;

	/* わたってきているのはポインタなので、メモリアドレスも見られる */
	printf("address of flt: %p\n", flt);

	num = new int[42];
	i = 0;
	while (i < 42)
	{
		num[i] = i;
		i++;
	}

	/* オブジェクトと同じく、deleteしておく必要あり
	 * その際、配列が対象の場合はdelete[] と記述する
	 */
	delete flt;
	delete[] num;
	return (0);
}