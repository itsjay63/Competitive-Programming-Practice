//---------------------------------------------------------------------------------------
//-------------------Author : itsjaysuthar ----------------------------------------------
//---------------------------------------------------------------------------------------

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double


int main(){
            ll r,o,c;
            cin>>r>>o>>c;
            if((c>=0 && c<=720)&&(o>=1 && o<=19)&&(c>=0 && c<=36*o)){
                o=36*(20-o);
                c=c+o;
                if(c>r){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
return 0;
}


