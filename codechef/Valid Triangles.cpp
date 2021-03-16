//---------------------------------------------------------------------------------------
//-------------------Author : itsjaysuthar ----------------------------------------------
//---------------------------------------------------------------------------------------




#include<bits/stdc++.h>
using namespace std;

int main()
{ 
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	// #endif
	int t;
	cin>>t;
	if( t>= 1 && t<=1000)
	{
	    int i = 0 , num1 ,num2,num3 ,sum=0;
		while (i<t)
		{
		cin>>num1>>num2>>num3;
		if((num1>= 1 && num1<=180) && (num2>= 1 && num2<=180) && (num3>= 1 && num3<=180))
		{
			sum = num1 + num2 + num3;
			if(sum ==180)
			{
				cout<<"YES"<<endl;
			}
		    else
			{
				cout<<"NO"<<endl;
			}
		}
			i++;
		}
		
	}
 	return 0;

}