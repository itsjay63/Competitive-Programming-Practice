//---------------------------------------------------------------------------------------
//-------------------Author : itsjaysuthar ----------------------------------------------
//---------------------------------------------------------------------------------------



#include<bits/stdc++.h>
using namespace std;

int sumn(int o)
{
    int sum=0;
    for(int i=1;i<=o;i++)
    {
        sum = sum + i;
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
    int arr[t];
    if(t>=1 && t<=16)
    {
        int i=0;
        while(i<t)
        {
            int d,n;
            cin>>d>>n;
            if((d>=1 && d<=4)&&(n>=1 && n<=4))
            {
                if(d==1)
                {
                    arr[i]=sumn(n);
                }
                else if(d==2)
                {
                    arr[i]=sumn(sumn(n));
                }
                else if(d==3)
                {
                    arr[i]=sumn(sumn(sumn(n)));
                }
                else if(d==4)
                {
                    arr[i]=sumn(sumn(sumn(sumn(n))));
                }
            }
        i++;
        }
    }
    for(int i =0;i<t;i++)
    {
        cout<<arr[i]<<endl;
    }

    return 0;
}
