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
	
	unsigned long count,a=0,b=0;
    unsigned long i = 1;
    while(i<=1000000)
    {
        unsigned long k = i,count=0,j;
        while(k != 1)
        {
            if(k%2 == 0)
            {
                k=k/2;
                count++;
            }
            else
            {
                k = (k*3)+1;
                count++;
            }
        }
        b=count+1;
        if(b>a)
        {
            a=b;
            j=i;
        }
        //cout<<i<<" "<<j<<" "<<a<<endl;
        i++;
    }

 	return 0;
}
