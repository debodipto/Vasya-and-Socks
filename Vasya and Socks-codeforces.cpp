#include <iostream>
using namespace std;

int main() {
int n,k;
cin>>n>>k;
int current=0;
int lastbuy=0;
while(n>0){
	++current;
	--n;
	if(current-lastbuy==k){
		++n;
		lastbuy=current;
	}
}
cout<<current;
	return 0;
}
