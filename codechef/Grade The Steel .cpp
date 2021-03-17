//---------------------------------------------------------------------------------------
//-------------------Author : itsjaysuthar ----------------------------------------------
//---------------------------------------------------------------------------------------



#include<bits/stdc++.h>
using namespace std;

int main()
{


	// #ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	// #endif
	
	
    int t;
    cin>>t;
    int arr[t];
    if (t>=1 && t<=1000)
    {
        int i = 0;
        while(i<t)
        {
            float h,t,c;
            cin>>h>>c>>t;
            if((h>=0 and h<=10000)&&(t>=0 and t<=10000)&&(c>=0 and c<=10000))
            {
                 if((h>50) && (c<0.7) && (t>5600))
                 {
                    arr[i]=10;
                 }
                 else if(h>50 && c<0.7)
                 {
                    arr[i]=9;
                 }
                 else if(c<0.7 && t>5600)
                 {
                    arr[i]=8;
                 }
                 else if(h>50 && t>5600)
                 {
                    arr[i]=7;
                 }
                 else if(h>50 || c<0.7 || t>5600)
                 {
                    arr[i]=6;
                 }
                 else
                 {
                    arr[i]=5;
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
