//---------------------------------------------------------------------------------------
//-------------------Author : itsjaysuthar ----------------------------------------------
//---------------------------------------------------------------------------------------


#include<bits/stdc++.h>
using namespace std;

void roundo(double &ans){
    ans *= 100;
    ans += 0.5;
    ans = (int)ans;
    ans /= 100;
}

int main(){

    int t;
    cin>>t;
    while(t--)
    {
        double k1, k2, k3, v ,s,ans;
        cin>>k1>>k2>>k3>>v;
        s = double(k1*k2*k3*v);
        ans = 1.0*100/s;
        roundo(ans);
        cout<<(ans < 9.58?"YES":"NO")<<endl;
    }
    return 0;
}

