#include <iostream>
using namespace std;
int z(int n){
    int r = 0, num = n;
    while (num >= 5){
        num = (num << 1) / 10;
        r += num;
    }
    return r;
}

int main() {
	long int t;
	cin>>t;
	while(t--){
	    long int n;
	    cin>>n;
	    cout<<z(n)<<endl;
	}
	return 0;
}
