//---------------------------------------------------------------------------------------
//-------------------Author : itsjaysuthar ----------------------------------------------
//---------------------------------------------------------------------------------------



#include<bits/stdc++.h>
using namespace std;

int ans(int j)
{
    int sum =0;
    if(j%2==0)
    {
        for(int i=0;i<=j;i+=2)
        {
            sum = sum +(i*i);
        }
    }
    else
    {
        for(int i =1;i<=j;i+=2)
        {
            sum = sum +(i*i);
        }
    }
    return sum;
}
int main()
{
	/*#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif*/
	
	
    int t;
    cin>>t;
    if(t>=1 && t<=100)
    {
        while(t--)
        {
            int n;
            cin>>n;
            if(n>=1 && n<=1000)
            {

                cout<<ans(n)<<endl;
            }
        }
    }


    return 0;
}
