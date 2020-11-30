#include <iostream>
using namespace std;
#include "getVolumeSurface.h"

int main()
{
	//変数の宣言
	double width;//幅
	double height;//高さ
	double depth;//奥行
	double volume;
	double surface;//解（ 体積 表面積）
	bool ans;

	//変数への格納
	while (true)
	{
		cout << "幅(m)の入力：";
		cin >> width;

		cout << "高さ(m)の入力：";
		cin >> height;

		cout << "奥行(m)の入力：";
		cin >> depth;

		//危険
		//if ((width || height || depth) >= 0) 
		if(width >= 0 || height >= 0 || depth >= 0)
		{
			break;
		}
		else 
		{
			cout << "値にマイナスの数字が入っています。" << endl << "もう一度入力しなおしてください。" << endl;
		}
	}

	//計算
	ans = getVolumeSurface(width, height, depth, &volume, &surface);

	if (ans == true)
	{
		cout << "体積は、" << volume  << endl;
		cout << "表面積は、" << surface << endl;
	}
	else
	{
		cout << "解無し。" << endl;
	}

	int stop;
	cout << endl << "終了するために数字キーを押した後、エンターキーを押してください。" << endl;
	cin >> stop;

	return 0;
}
