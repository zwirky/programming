#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string a,b;
	int c=0;
	while(cin>>a){
		b=a;
		reverse(b.begin(),b.end());
		c+=a==b;
	}
	cout<<c<<endl;
	return 0;
}
