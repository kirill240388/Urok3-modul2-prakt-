#include<stdlib.h>
#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
int task;
cin >> task;
if (task == 1)
/*/11.	��������� �������� ����������� ��������� ��� ���� ��������� ��������� ���������� ������� X � Y :
a.��(X � �� Y) ��� X;
b.Y � �� X ��� �� Y
c.�� Y � �� X ��� Y*/

{
	int x, y;
	cin >> x;
	cin >> y;
	cout << !(x && !y) || x;
	cout << endl;
	cout << (y && !x) || !y;
	cout<<endl;
	cout << (!y && !x) || y;
	cout << endl;
}
if (task == 2)
/*/a.�������� ���������� ���������, ������� ����� �������� "������" ������ ��� ���������� ��������� ������� :
i.� > 2 � � > 3;
ii.� > 1 ��� y> -2;
iii.� >= 0 � � < 5;
iv.� > 3 ��� x < -1;
v.� > 3 � x < 10;*/

{
	int x, y;
	cin >> x;
	cin >> y;
	if (x > 2 && y > 3)
		cout << "true" << endl;
	else if (x > 1 || y > -2)
		cout << "true" << endl;
	else if (x >= 0 && y < 5)
		cout << "true" << endl;
	else if (x > 3 || x < -1)
		cout << "true" << endl;
	else if (x > 3 && x < 10)
		cout << "true" << endl;
	else
		cout << "false" << endl;
}
if (task == 3)
/*/b.�������� �������, ������� �������� ��������, �����:
i.������ �� ����� � � � ������ 100;
ii.������ ���� �� ����� � � � ������;
iii.���� �� ���� �� ����� � � � ������������;
iv.������ �� ����� �, �, � ������ ����;
v.������ ���� �� ����� �, � � � ������ 50;
vi.���� �� ���� �� ����� �, �, � ������������.*/
{
	int a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;
	if (a&&b > 100)
		cout << "true" << endl;
	else if (a % 2 == 0 || a % 2 == 0)
		cout << "true" << endl;
	else if ((a >= 0 || b >= 0) || (a >= 0 && b >= 0))
		cout << "true" << endl;
	else if (a % 3 == 0 && b % 3 == 0 && c % 3 == 0)
		cout << "true" << endl;
	else if (a < 50 || b < 50 || c < 50)
		cout << "true" << endl;
	else if ((a < 0 && b < 0 && c < 0) || (a < 0 || b < 0 || c < 0) || ((a < 0 && (b < 0)) || (c < 0)) || ((a < 0 || (b < 0 && c < 0)) || ((a < 0 && c < 0) || b < 0)))
		cout << "true" << endl;
	else
		cout << "false" << endl;

}
if (task == 4)
/*/c.�������� �������, ������� �������� ��������, �����:
i.������ �� ����� X � Y ��������;
ii.������ ���� �� ����� X � Y ������ 20;
iii.���� �� ���� �� ����� X � Y ����� ����;
iv.������ �� ����� X, Y, Z �������������;
v.������ ���� �� ����� X, Y � Z ������ ����;
vi.���� �� ���� �� ����� X, Y, Z ������ 100.*/
{
	int x, y, z;
	cin >> x;
	cin >> y;
	cin >> z;
	if (x % 2 == 0 && y % 2 == 0)
		cout << "true" << endl;
	else if (x < 20 || y < 20)
		cout << "true" << endl;
	else if ((x == 0 && y == 0) || (x == 0 || y == 0))
		cout << "true" << endl;
	else if (x < 0 && y < 0 && z < 0)
		cout << "true" << endl;
	else if (x % 5 == 0 || y % 5 == 0 || z % 5 == 0)
		cout << "true" << endl;
	else if ((x < 0 && y < 0 && z < 0) || (x < 0 || y < 0 || z < 0) || ((x < 0 && (y < 0)) || (z < 0)) || ((x < 0 || (y < 0 && z < 0)) || ((x < 0 && z < 0) || y < 0)))
		cout << "true"<<endl;
}


system("pause");
return 0;
}