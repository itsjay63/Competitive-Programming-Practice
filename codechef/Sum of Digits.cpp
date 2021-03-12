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
	int t, sum;
	cin >> t;
	if (t > 0)
	{
		for (int i = 1; i <= t; i++)
		{
			int n = 0;
			cin >> n;
			sum = 0;
			while (n != 0)
			{
				int r = n % 10;
				sum = sum + r;
				n = n / 10;
			}
			cout << sum << '\n';


		}
	}

	return 0;
}
