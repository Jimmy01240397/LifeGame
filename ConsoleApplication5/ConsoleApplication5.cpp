// ConsoleApplication5.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include "pch.h"
#include <iostream>
#include <string>
#include <Windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <list>

#define upx -17
#define upy 1
#define dox 16
#define doy -1
#define Rand 0
using namespace std;

struct Pos
{
	int x;
	int y;
};

void Set(string data[], int x, int y, string value)
{
	data[y][x * 2] = value[0];
	data[y][x * 2 + 1] = value[1];
}

bool Check(string data[], int x, int y, string value)
{
	return data[y][x * 2] == value[0] && data[y][x * 2 + 1] == value[1];
}

int main()
{
	string a[100];
	//unsigned int x = time(NULL);
	srand(time(NULL));
	for (int i = 0; i < 55; i++)
	{
		a[i] = "";
		for (int ii = 0; ii < 55; ii++)
		{
			//srand(rand() % rand());
			if (Rand == 0)
			{
				a[i] += "□";
			}
			else
			{
				int xx = rand() % 2;
				a[i] += (xx == 0) ? "□" : "■";
			}
			//x = rand();
		}
	}

	if (Rand == 0)
	{
		Set(a, (55 + 4 + upx) % 55, (55 + 5 + upy) % 55, "■");
		Set(a, (55 + 5 + upx) % 55, (55 + 5 + upy) % 55, "■");
		Set(a, (55 + 4 + upx) % 55, (55 + 6 + upy) % 55, "■");
		Set(a, (55 + 5 + upx) % 55, (55 + 6 + upy) % 55, "■");
		Set(a, (55 + 9 + upx) % 55, (55 + 5 + upy) % 55, "■");
		Set(a, (55 + 10 + upx) % 55, (55 + 4 + upy) % 55, "■");
		Set(a, (55 + 10 + upx) % 55, (55 + 6 + upy) % 55, "■");
		Set(a, (55 + 11 + upx) % 55, (55 + 3 + upy) % 55, "■");
		Set(a, (55 + 11 + upx) % 55, (55 + 7 + upy) % 55, "■");
		Set(a, (55 + 12 + upx) % 55, (55 + 4 + upy) % 55, "■");
		Set(a, (55 + 12 + upx) % 55, (55 + 5 + upy) % 55, "■");
		Set(a, (55 + 12 + upx) % 55, (55 + 6 + upy) % 55, "■");
		Set(a, (55 + 13 + upx) % 55, (55 + 2 + upy) % 55, "■");
		Set(a, (55 + 13 + upx) % 55, (55 + 3 + upy) % 55, "■");
		Set(a, (55 + 13 + upx) % 55, (55 + 7 + upy) % 55, "■");
		Set(a, (55 + 13 + upx) % 55, (55 + 8 + upy) % 55, "■");
		Set(a, (55 + 18 + upx) % 55, (55 + 3 + upy) % 55, "■");
		Set(a, (55 + 19 + upx) % 55, (55 + 3 + upy) % 55, "■");
		Set(a, (55 + 20 + upx) % 55, (55 + 3 + upy) % 55, "■");
		Set(a, (55 + 20 + upx) % 55, (55 + 5 + upy) % 55, "■");
		Set(a, (55 + 20 + upx) % 55, (55 + 6 + upy) % 55, "■");
		Set(a, (55 + 20 + upx) % 55, (55 + 7 + upy) % 55, "■");
		Set(a, (55 + 22 + upx) % 55, (55 + 8 + upy) % 55, "■");
		Set(a, (55 + 23 + upx) % 55, (55 + 8 + upy) % 55, "■");
		Set(a, (55 + 23 + upx) % 55, (55 + 7 + upy) % 55, "■");
		Set(a, (55 + 23 + upx) % 55, (55 + 5 + upy) % 55, "■");
		Set(a, (55 + 24 + upx) % 55, (55 + 5 + upy) % 55, "■");
		Set(a, (55 + 24 + upx) % 55, (55 + 6 + upy) % 55, "■");
		Set(a, (55 + 27 + upx) % 55, (55 + 6 + upy) % 55, "■");
		Set(a, (55 + 27 + upx) % 55, (55 + 5 + upy) % 55, "■");
		Set(a, (55 + 27 + upx) % 55, (55 + 1 + upy) % 55, "■");
		Set(a, (55 + 27 + upx) % 55, (55 + 0 + upy) % 55, "■");
		Set(a, (55 + 28 + upx) % 55, (55 + 6 + upy) % 55, "■");
		Set(a, (55 + 28 + upx) % 55, (55 + 5 + upy) % 55, "■");
		Set(a, (55 + 28 + upx) % 55, (55 + 1 + upy) % 55, "■");
		Set(a, (55 + 28 + upx) % 55, (55 + 0 + upy) % 55, "■");
		Set(a, (55 + 29 + upx) % 55, (55 + 1 + upy) % 55, "■");
		Set(a, (55 + 29 + upx) % 55, (55 + 2 + upy) % 55, "■");
		Set(a, (55 + 29 + upx) % 55, (55 + 3 + upy) % 55, "■");
		Set(a, (55 + 29 + upx) % 55, (55 + 4 + upy) % 55, "■");
		Set(a, (55 + 29 + upx) % 55, (55 + 5 + upy) % 55, "■");
		Set(a, (55 + 30 + upx) % 55, (55 + 2 + upy) % 55, "■");
		Set(a, (55 + 30 + upx) % 55, (55 + 4 + upy) % 55, "■");
		Set(a, (55 + 32 + upx) % 55, (55 + 2 + upy) % 55, "■");
		Set(a, (55 + 32 + upx) % 55, (55 + 3 + upy) % 55, "■");
		Set(a, (55 + 32 + upx) % 55, (55 + 4 + upy) % 55, "■");
		Set(a, (55 + 38 + upx) % 55, (55 + 3 + upy) % 55, "■");
		Set(a, (55 + 38 + upx) % 55, (55 + 4 + upy) % 55, "■");
		Set(a, (55 + 39 + upx) % 55, (55 + 3 + upy) % 55, "■");
		Set(a, (55 + 39 + upx) % 55, (55 + 4 + upy) % 55, "■");

		Set(a, (55 + 50 + dox) % 55, (55 + 49 + doy) % 55, "■");
		Set(a, (55 + 49 + dox) % 55, (55 + 49 + doy) % 55, "■");
		Set(a, (55 + 50 + dox) % 55, (55 + 48 + doy) % 55, "■");
		Set(a, (55 + 49 + dox) % 55, (55 + 48 + doy) % 55, "■");
		Set(a, (55 + 45 + dox) % 55, (55 + 49 + doy) % 55, "■");
		Set(a, (55 + 44 + dox) % 55, (55 + 50 + doy) % 55, "■");
		Set(a, (55 + 44 + dox) % 55, (55 + 48 + doy) % 55, "■");
		Set(a, (55 + 43 + dox) % 55, (55 + 51 + doy) % 55, "■");
		Set(a, (55 + 43 + dox) % 55, (55 + 47 + doy) % 55, "■");
		Set(a, (55 + 42 + dox) % 55, (55 + 50 + doy) % 55, "■");
		Set(a, (55 + 42 + dox) % 55, (55 + 49 + doy) % 55, "■");
		Set(a, (55 + 42 + dox) % 55, (55 + 48 + doy) % 55, "■");
		Set(a, (55 + 41 + dox) % 55, (55 + 52 + doy) % 55, "■");
		Set(a, (55 + 41 + dox) % 55, (55 + 51 + doy) % 55, "■");
		Set(a, (55 + 41 + dox) % 55, (55 + 47 + doy) % 55, "■");
		Set(a, (55 + 41 + dox) % 55, (55 + 46 + doy) % 55, "■");
		Set(a, (55 + 36 + dox) % 55, (55 + 51 + doy) % 55, "■");
		Set(a, (55 + 35 + dox) % 55, (55 + 51 + doy) % 55, "■");
		Set(a, (55 + 34 + dox) % 55, (55 + 51 + doy) % 55, "■");
		Set(a, (55 + 34 + dox) % 55, (55 + 49 + doy) % 55, "■");
		Set(a, (55 + 34 + dox) % 55, (55 + 48 + doy) % 55, "■");
		Set(a, (55 + 34 + dox) % 55, (55 + 47 + doy) % 55, "■");
		Set(a, (55 + 32 + dox) % 55, (55 + 46 + doy) % 55, "■");
		Set(a, (55 + 31 + dox) % 55, (55 + 46 + doy) % 55, "■");
		Set(a, (55 + 31 + dox) % 55, (55 + 47 + doy) % 55, "■");
		Set(a, (55 + 31 + dox) % 55, (55 + 49 + doy) % 55, "■");
		Set(a, (55 + 30 + dox) % 55, (55 + 49 + doy) % 55, "■");
		Set(a, (55 + 30 + dox) % 55, (55 + 48 + doy) % 55, "■");
		Set(a, (55 + 27 + dox) % 55, (55 + 48 + doy) % 55, "■");
		Set(a, (55 + 27 + dox) % 55, (55 + 49 + doy) % 55, "■");
		Set(a, (55 + 27 + dox) % 55, (55 + 53 + doy) % 55, "■");
		Set(a, (55 + 27 + dox) % 55, (55 + 54 + doy) % 55, "■");
		Set(a, (55 + 26 + dox) % 55, (55 + 48 + doy) % 55, "■");
		Set(a, (55 + 26 + dox) % 55, (55 + 49 + doy) % 55, "■");
		Set(a, (55 + 26 + dox) % 55, (55 + 53 + doy) % 55, "■");
		Set(a, (55 + 26 + dox) % 55, (55 + 54 + doy) % 55, "■");
		Set(a, (55 + 25 + dox) % 55, (55 + 53 + doy) % 55, "■");
		Set(a, (55 + 25 + dox) % 55, (55 + 52 + doy) % 55, "■");
		Set(a, (55 + 25 + dox) % 55, (55 + 51 + doy) % 55, "■");
		Set(a, (55 + 25 + dox) % 55, (55 + 50 + doy) % 55, "■");
		Set(a, (55 + 25 + dox) % 55, (55 + 49 + doy) % 55, "■");
		Set(a, (55 + 24 + dox) % 55, (55 + 52 + doy) % 55, "■");
		Set(a, (55 + 24 + dox) % 55, (55 + 50 + doy) % 55, "■");
		Set(a, (55 + 22 + dox) % 55, (55 + 52 + doy) % 55, "■");
		Set(a, (55 + 22 + dox) % 55, (55 + 51 + doy) % 55, "■");
		Set(a, (55 + 22 + dox) % 55, (55 + 50 + doy) % 55, "■");
		Set(a, (55 + 16 + dox) % 55, (55 + 51 + doy) % 55, "■");
		Set(a, (55 + 16 + dox) % 55, (55 + 50 + doy) % 55, "■");
		Set(a, (55 + 15 + dox) % 55, (55 + 51 + doy) % 55, "■");
		Set(a, (55 + 15 + dox) % 55, (55 + 50 + doy) % 55, "■");
	}
	while (true)
	{
		string qq = "";
		for (int i = 0; i < 55; i++)
		{
			qq += a[i] + "\n";
		}
		system("cls");
		cout << qq;
		list<Pos> changeLife;
		list<Pos> changeDeth;
		for (int i = 0; i < 55; i++){
			for (int ii = 0; ii < 55; ii++){
				int q = 0;
				for (int iii = -1; iii < 2; iii++){
					for (int iiii = -1; iiii < 2; iiii++){
						if (iii == 0 && iiii == 0){
							continue;
						}
						/*if (i + iii < 0 || i + iii >= 55)
						{
							continue;
						}
						if (ii + iiii < 0 || ii + iiii >= 55)
						{
							continue;
						}*/
						if (Check(a, (55 + ii + iiii) % 55, (55 + i + iii) % 55, "■")){
							q++;
						}
					}
				}
				if (Check(a, (55 + ii) % 55, (55 + i) % 55, "■")){
					if (q < 2 || q > 3){
						Pos aa;
						aa.x = ii;
						aa.y = i;
						changeDeth.push_back(aa);
					}
				}
				else{
					if (q == 3){
						Pos aa;
						aa.x = ii;
						aa.y = i;
						changeLife.push_back(aa);
					}
				}
			}
		}
		for (list<Pos>::iterator i = changeDeth.begin(); i != changeDeth.end(); ++i){
			Set(a, (*i).x, (*i).y, "□");
		}

		for (list<Pos>::iterator i = changeLife.begin(); i != changeLife.end(); ++i){
			Set(a, (*i).x, (*i).y, "■");
		}
		//Sleep(1);
	}
}

// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的秘訣: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案
