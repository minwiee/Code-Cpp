#include<bits/stdc++.h>
using namespace std;
int main(){
	string number;
	cin>>number;
	int res = number.find("084");
	string kkk = number.erase(res,3);
	cout<<kkk;
	return 0;
}
