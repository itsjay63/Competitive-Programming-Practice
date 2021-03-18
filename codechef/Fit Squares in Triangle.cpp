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
    if(t>=1 && t<=1000)
    {
        int i=0;
        while (i<t)
        {

            int b;
            cin>>b;
            if(b>=1 && b<= 10000)
            {
                b=b-2;
                b=b/2;
                arr[i]=(b*(b+1))/2;
            }

            i++;
        }
    }
    for(int i=0;i<t;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
