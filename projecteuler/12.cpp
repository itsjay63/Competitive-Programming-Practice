//---------------------------------------------------------------------------------------
//-------------------Author : itsjaysuthar ----------------------------------------------
//---------------------------------------------------------------------------------------

#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long int sum=0,count=0;
    unsigned long int arr[15000];
    unsigned long int brr[15000];
    for(unsigned long int i=11000;i<=13000;i++)
    {
        sum=(i*(i+1))/2;
        arr[i]=sum;
        for(unsigned long int j=1;j<=arr[i];j++)
        {
            if(arr[i]%j==0)
            {
                count++;
            }
        }
        brr[i]=count;
        count=0;
    }
    for(unsigned long int k=11000;k<=13000;k++)
    {
        if(brr[k]>500)
        {
            cout<<k<<" : "<<arr[k]<<" : "<<brr[k]<<endl;
            break;
        }
    }
 	return 0;
}
