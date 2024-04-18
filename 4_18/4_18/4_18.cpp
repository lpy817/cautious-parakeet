#define _CRT_SECURE_NO_WARNINGS 1
//作业内容
//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以喝多少汽水（编程实现）。
#include<iostream>
using namespace std;
int main()
{
	/*int money = 20;
	int num = money;
	int kong = num;
	int more = kong / 2;
	num = num + more;
	cout << num;*/
	int money=0;
	cin >> money;
	int more = money / 2;
	int num = money + more;
	cout << num;
	return 0;
}
