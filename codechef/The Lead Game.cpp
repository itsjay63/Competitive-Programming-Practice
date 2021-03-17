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
	cin>>t;
	if (t <= 10000)
	{
	    int i=0,sn1 = 0 , sn2 = 0,a[t],b[t];
	    while (i<t)
        {
            int n1,n2,difn=0;
            cin>>n1>>n2;
            if ((n1>=1 && n1<=1000)&&(n2>=1 && n2<=1000))
            {
                sn1 = sn1 + n1;
                sn2 = sn2 + n2;
                if (sn1>sn2)
                {
                    b[i]=1;
                }
                else
                {
                    b[i]=2;
                }
                difn = sn1 - sn2;
                if (difn > 0)
                {
                    a[i]=difn;
                }
                else
                {
                    a[i]=difn * -1;
                }

            }
          i++;
        }
        int j = *max_element(a,a+t);
        int k;
        for (int i = 0 ; i < t ; i++)
        {
            if (j == a[i])
            {
                k = i;
            }
        }
        int c = b[k];
        cout<<c<<" "<<j<<endl;

	}
 		return 0;
}
