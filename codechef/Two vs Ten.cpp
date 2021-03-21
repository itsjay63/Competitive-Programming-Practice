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
    if(t>=1 && t<=1000)
    {
        int i=0;
        long long int arr[t];
        while(i<t)
        {
            unsigned long long int x;
            cin>>x;
            unsigned long long int count=0;
            if(x>=0 && x<=1000000000)
            {

                if(x%5 != 0)
                {
                    arr[i]= -1;
                }
                else
                {
                    while(x%10 != 0)
                        {
                            x =x *2;
                            count++;
                            arr[i]=count;
                        }
                        arr[i]=count;
                }

            }
            i++;
        }
        for(int i =0;i<t;i++)
    {
        cout<<arr[i]<<endl;
    }
    }

    return 0;
}
