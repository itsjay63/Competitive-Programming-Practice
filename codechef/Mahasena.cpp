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

    int n=0,o=0,e=0;
    cin>>n;
    int arr[n];
    if(n>=1 && n<=100)
    {

        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            if(a>=0 && a<=100)
            {
                arr[i]=a;
            }
        }

    }
    for(int i =0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            e=e+1;
        }
        else
        {
            o=o+1;
        }
    }
    if(e>o)
    {
        cout<<"READY FOR BATTLE"<<endl;
    }
    else
    {
        cout<<"NOT READY"<<endl;
    }

    return 0;
}
