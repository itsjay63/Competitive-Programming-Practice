//---------------------------------------------------------------------------------------
//-------------------Author : itsjaysuthar ----------------------------------------------
//---------------------------------------------------------------------------------------


#include<bits/stdc++.h>
using namespace std;
int main()
{

/*#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif*/
	int t = 0;
	cin >> t;
	if (t > 0) {
		for (int i = 1; i <= t; i++)
		{
			int a = 0, b = 0;
			cin >> a >> b;
			if (a < b)
			{
				cout << a << '\n';
			}
			else
			{
				int d = a / b;
				int r = a - (b * d);
				cout << r << '\n';
			}
		}
	}
	return 0;
}