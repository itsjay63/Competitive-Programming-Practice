//---------------------------------------------------------------------------------------
//-------------------Author : itsjaysuthar ----------------------------------------------
//---------------------------------------------------------------------------------------



#include<bits/stdc++.h>
using namespace std;

int numc(int n)
{
    int i,co=0;
    while (n>0)
    {
        i=n%10;
        if(i == 0 || i == 6 || i == 9)
        {
            co = co + 6;
        }
        else if ( i == 1 )
        {
            co = co + 2;
        }
        else if ( i == 2 || i == 3 || i == 5)
        {
            co = co +5;
        }
        else if ( i == 4 )
        {
            co = co + 4;
        }
        else if ( i == 7 )
        {
            co = co + 3;
        }
        else
        {
            co = co + 7;
        }
        n = n/10;

    }
    return co;
}


int main()
{


/*#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif*/



    int t;
    cin>>t;
    if (t>=1 && t<=1000)
    {
        int i = 0;
        int arr[t];
        while (i<t)
        {
            int a,b,sum=0;
            cin>>a>>b;
            if ((a>=1 && a<= 1000000)&& (b>=1 && b<= 1000000))
            {
                sum = a+b;
                arr[i]= numc(sum);

            }
            i++;
        }
        for(int i = 0;i<t;i++)
        {
            cout<<arr[i]<<endl;
        }
    }

 		return 0;
}
