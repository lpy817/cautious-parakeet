#define _CRT_SECURE_NO_WARNINGS 1
//��ҵ����
//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Ժȶ�����ˮ�����ʵ�֣���
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
