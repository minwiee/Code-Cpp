#include<iostream>
using namespace std;
int main(){
    int test;
    cin>>test;
    int i,j;
    for(i = 1; i <= test; i++){
        long long n;
        cin>>n;
        int sum= n*(n+1)/2;
        cout<<sum<<endl;
    }
    return 0;
}
