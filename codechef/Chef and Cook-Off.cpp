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
	
	int n;
	cin>>n;
	if(n>=1 && n<=5000){
	while(n--){
		int arr[5];
		int count=0;
		for(int i=0; i<5;i++){
			int a;
			cin>>a;
			arr[i]=a;
		}
		for(int i =0; i<5;i++){
			if(arr[i]==1){
				count++;
			}
		}
		switch(count){
			case 0:
				cout<< "Beginner"<<endl;
				break;
			case 1:
				cout<<"Junior Developer"<<endl;
				break;
			case 2:
				cout<<"Middle Developer"<<endl;
				break;
			case 3:
				cout<<"Senior Developer"<<endl;
				break;
			case 4:
				cout<<"Hacker"<<endl;
				break;
			case 5:
				cout<<"Jeff Dean"<<endl;
				break;
		}
		
	  }
	}	
 	return 0;
 	
}