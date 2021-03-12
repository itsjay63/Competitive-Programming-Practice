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
			int arr[1000] = {0};
			int n;
			cin >> n;
			int r = n % 10;
			arr[0] = r;
			int j = 1;
			while (j > 0)
			{
				if (n == 0)
				{
					break;
				}
				else
				{
					n = n / 10;
					r = n % 10;
					arr[j] = r;
					j++;
				}
			}
			int sum = (arr[0] + arr[j - 2]);
			cout << sum << '\n';
		}
	}
	return 0;
}