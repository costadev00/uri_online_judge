#include <bits/stdc++.h>
using namespace std;
int main(){
	
	int a,b,c,d;
	while(cin >> a>>b>>c>>d){
		if(a==c && b!=d)
			cout<<'V'<<endl;
		else if(a!=c &&b==d)
			cout<<'V'<<endl;
		else
			cout<<'F'<<endl;
	}
}
	
