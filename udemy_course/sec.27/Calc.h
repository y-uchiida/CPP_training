#ifndef _CALC_H_
#define _CALC_H_

/* テンプレートクラス
 * クラス内に、テンプレートを持ったクラスのこと
 * 宣言時に仮型名を置換する型を指定する
 */
template <typename T>
class CCalc
{
private:
	T var_1;
	T var_2;

public:
	/* setter */
	inline void setVars(const T var_1, const T var_2)
	{
		this->var_1 = var_1;
		this->var_2 = var_2;
	};
	
	inline T add() const
	{
		return var_1 + var_2;
	}
};

#endif
