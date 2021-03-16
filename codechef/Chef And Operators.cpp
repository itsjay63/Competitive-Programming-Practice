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
	if( t>= 1 && t<=10000){
	    int i = 0 , num1 ,num2 ;
		while (i<t){
		cin>>num1>>num2;
		if ((num1>=1 && num1<=1000000001) && (num2>=1 && num2<=1000000001)){
			if (num1 > num2)
			cout<<">"<<endl;
		else if (num1 == num2)
			cout<<"="<<endl;
		else
			cout<<"<"<<endl;
		}
		
		i++;
		}

	}
	

 	return 0;

}