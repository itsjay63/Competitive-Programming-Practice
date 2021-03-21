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
    int arr[t];
    if(t>=1 && t<=20000)
    {
        int i = 0;
        while(i<t)
        {
            int m,h;
            cin>>m>>h;
            if((m>=1 && m<=10000)&&(h>=1 && h<=100))
            {
                int ans;
                ans = (m /(h*h));
                if(ans<=18)
                {
                    arr[i]=1;
                }
                else if(ans>=19 && ans<=24)
                {
                    arr[i]=2;
                }
                else if(ans>=25 && ans<=29)
                {
                    arr[i]=3;
                }
                else if(ans>=30)
                {
                    arr[i]=4;
                }
            }
            else 
            {
                break;
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
