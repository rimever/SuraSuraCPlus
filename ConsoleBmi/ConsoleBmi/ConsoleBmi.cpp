﻿// ConsoleBmi.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <iomanip>
#include "getBmi.h"
using namespace std;



int main()
{
	double height;
	double weight;
	double bmi;

	cout << "身長(cm)を入力してください:";
	cin >> height;

	cout << "体重(kg)を入力してください:";
	cin >> weight;

	bmi = getBmi(height, weight);

    std::cout << "あなたのBMIは、" << fixed << setprecision(1) << bmi << "です。" << endl;
	return 0;
}
