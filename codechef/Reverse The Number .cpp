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
	int t;
	cin >> t;
	if (t >= 1 )
	{
		for (int i = 1; i <= t; i++)
		{
			int n, r, rn = 0;
			cin >> n;
			while (n != 0)
			{
				r = n % 10;
				rn = (rn * 10) + r;
				n = n / 10;
			}
			cout << rn << '\n';

		}
	}
	return 0;
}