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
	int n, k, sum = 0;
	cin >> n;
	cin >> k;
	if (n > 0)
	{
		for (int i = 1; i <= n; i++)
		{
			int t = 0;
			cin >> t;
			if (t % k == 0)
			{
				sum++;
			}
		}
	}
	cout << sum;
	return 0;
}