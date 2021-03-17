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
    if (t>=1 && t<=1000)
    {
        int i = 0;
        double gs[t];
        while (i<t)
        {
            double salary,hra,da;
            cin>>salary;
            if (salary>=1 && salary<=100000)
            {
                if(salary<1500)
                {
                    hra = salary * 0.1;
                    da = salary * 0.9;
                    gs[i] = salary + hra + da;
                }
                else
                {
                    hra = 500;
                    da = 0.98 * salary;
                    gs[i]= salary + hra + da;
                }
            }

            i++;
        }
        for(int i = 0 ; i<t;i++)
        {
            cout << fixed<<gs[i]<<setprecision(2)<<endl;
        }
    }

 		return 0;
}
