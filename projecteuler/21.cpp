//---------------------------------------------------------------------------------------
//-------------------Author : itsjaysuthar ----------------------------------------------
//---------------------------------------------------------------------------------------

#include<bits/stdc++.h>
using namespace std;

int fact1(int n)
{
    int sum=0;
    for(int j=1;j<n;++j)
    {
        if(n%j==0)
        {
            sum=sum+j;
        }
    }
    return sum;
}


int main()
{
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	// #endif

	int i=1,sum=0;
	while(i<=10000)
    {
        int a=0,b=0;
        a=fact1(i);
        b=fact1(a);
        if(i==b && a!=b)
        {
            sum=sum+i;
        }
        i++;
    }
    cout<<sum<<endl;
 	return 0;
}
