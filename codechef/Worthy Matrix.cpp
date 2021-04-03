//---------------------------------------------------------------------------------------
//-------------------Author : itsjaysuthar ----------------------------------------------
//---------------------------------------------------------------------------------------

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double

int main()
{
    int t;
    cin>>t;
    if(t>=1 && t<=10){
    while(t--)
    {
        ll n,m,count=0;
        ld l,sum=0;
        cin>>n>>m>>l;
        if((n>=1 && n<=1000000)&&(m>=1 && m<=1000000)&&(n<=m)&&(l>=0 && l<=1000000000)){
        ll arr[n][m]={};
        ll arr2[n+1][m+1]={};
        for(ll i=1;i<n+1;i++)
        {
            for(ll j=1;j<m+1;j++)
            {
                ll c;
                cin>>c;
                if(c>=0 && c<=1000000000)
                    arr[i-1][j-1]=c;
                arr2[i][j] = arr2[i - 1][j] + arr2[i][j - 1] - arr2[i - 1][j - 1] + arr[i - 1][j - 1];
            }
        }
        ll k=1;
        while(k<n+1 && k<m+1)
        {
        for(ll i=k;i<n+1;i++)
        {
            for(ll j=k;j<m+1;j++)
            {

                if(i - k >= 0 and j - k >= 0)
                {
                    sum = arr2[i][j] - arr2[i][j - k] - arr2[i - k][j] + arr2[i - k][j - k];
                    if((sum/(k*k))>=l)
                            {
                                count++;
                            }
                }
            }
        }
        k++;
        }
        cout<<count<<endl;
        }
    }
    return 0;
    }
}


