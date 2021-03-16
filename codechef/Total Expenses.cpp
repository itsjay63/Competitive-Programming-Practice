//---------------------------------------------------------------------------------------
//-------------------Author : itsjaysuthar ----------------------------------------------
//---------------------------------------------------------------------------------------



#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	if (t>= 1 && t<=1000)
	{
	    int i= 0 ;
	    double a[t];
		while (i<t)
		{
            double q=0,p=0,sum=0;
			cin>>q>>p;
			if((q>=1 && q<=1000000)&&(p>=1 && p<=1000000))
			{
				if(q>1000)
                {
                    sum = q*p;
                    sum = sum * 0.9;
                    a[i]=sum;
				}
				else
				{
				    sum = q*p;
				    a[i]=sum;
				}
			}

			i++;
		}
		for(int j = 0;j<t;j++)
        {
            cout<<fixed<<a[j]<<setprecision(6)<<endl;
        }

	}
 		return 0;
}
