#ifndef _CSAMPLE_H_
#define _CSAMPLE_H_

class CSample
{
public:
	/* アクセサメソッドとして、getNumとsetNumを定義 */
	void setNum(int num);
	int getNum();

private:
	/* メンバ変数は、privateで宣言するのがオブジェクト指向では一般的 */
	int num;
};

#endif