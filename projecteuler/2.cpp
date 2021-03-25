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
	 int num1=1, num2=2;
    unsigned long sum=0,sum1=0;
    while(sum<4000000)
    {

        sum=num1+num2;
        if(sum%2==0)
        {
            sum1=sum1+sum;
        }
        num1=num2;
        num2=sum;
    }
    cout<<sum1+2<<endl;

 	return 0;

}