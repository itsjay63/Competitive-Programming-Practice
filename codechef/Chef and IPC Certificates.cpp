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
	
	int n,m,k;
	cin>>n>>m>>k;
	int count=0;
	if((n>=1 && n<=1000)&&(k>=1 && k<=1000)&&(m>=1 && m<=1000000)){
		while(n--){
			int arr[k+1];
			int sum=0;
			for(int i=0;i<k+1;i++){
				int a;
				cin>>a;
				arr[i]=a;
			}
			for(int i=0;i<k;i++){
				sum=sum+arr[i];
			}
			if(sum>=m && arr[k]<=10){
				count++;
				
			}
		}
	}
	cout<<count<<endl;
 	return 0;
}