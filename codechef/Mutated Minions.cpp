//---------------------------------------------------------------------------------------
//-------------------Author : itsjaysuthar ----------------------------------------------
//---------------------------------------------------------------------------------------




#include<bits/stdc++.h>
using namespace std;

int main()
{
//	#ifndef ONLINE_JUDGE
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
//	#endif
	int t;
	cin>>t;
	if( t>= 1 && t<=100)
	{
	    int i = 0 , n ,k ,num , num1;
		while (i<t)
		{
		    int count=0;
			cin>>n>>k;
			if((n>=1 && n<=100)&&(k>=1 && k<=100))
			{
				int a[n];
				for(int i=0;i<n;i++)
				{
					cin>>num;
					a[i]=num;
				}
				for(int i =0;i<n;i++)
				{
					num1 =  a[i]+k;
					a[i] = num1;
				}
				for(int i =0; i<n;i++)
				{
					if(a[i]%7==0)
					{
						count++;
					}
				}
				cout<<count<<endl;
			}

			i++;
		}

	}


 		return 0;
}
