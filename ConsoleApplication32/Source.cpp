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
/*/11.	Вычислить значение логического выражения при всех возможных значениях логических величин X и Y :
a.не(X и не Y) или X;
b.Y и не X или не Y
c.не Y и не X или Y*/

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
/*/a.Записать логические выражения, которые имеют значение "Истина" только при выполнении указанных условий :
i.х > 2 и у > 3;
ii.х > 1 или y> -2;
iii.х >= 0 и у < 5;
iv.х > 3 или x < -1;
v.х > 3 и x < 10;*/

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
/*/b.Записать условие, которое является истинным, когда:
i.каждое из чисел А и В больше 100;
ii.только одно из чисел А и В четное;
iii.хотя бы одно из чисел А и В положительно;
iv.каждое из чисел А, В, С кратно трем;
v.только одно из чисел А, В и С меньше 50;
vi.хотя бы одно из чисел А, В, С отрицательно.*/
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
/*/c.Записать условие, которое является истинным, когда:
i.каждое из чисел X и Y нечетное;
ii.только одно из чисел X и Y меньше 20;
iii.хотя бы одно из чисел X и Y равно нулю;
iv.каждое из чисел X, Y, Z отрицательное;
v.только одно из чисел X, Y и Z кратно пяти;
vi.хотя бы одно из чисел X, Y, Z больше 100.*/
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