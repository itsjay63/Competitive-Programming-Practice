//---------------------------------------------------------------------------------------
//-------------------Author : itsjaysuthar ----------------------------------------------
//---------------------------------------------------------------------------------------



#include<bits/stdc++.h>
using namespace std;

int main()
{

//	#ifndef ONLINE_JUDGE
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
//	#endif


    int t ;
    cin>>t;
    if (t>= 1 && t<=1000 )
    {
        int i =0;
        int arr[t];
        while (i<t)
        {
            int a,b,c,d;
            cin>>a>>b>>c>>d;
            if((a>=1 && a<=10000)&&(b>=1 && b<=10000)&&(c>=1 && c<=10000)&&(d>=1 && d<=10000))
            {
                if(a==b && c==d)
                {
                    arr[i]=1;
                }
                else if(a==c && b==d)
                {
                    arr[i]=1;
                }
                else if(a==d && b==c)
                {
                    arr[i]=1;
                }
                else
                {
                    arr[i]=0;
                }
            }

            i++;
        }
        for(int i = 0; i<t ; i++)
        {
            if(arr[i]==1)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }

    return 0;
}
