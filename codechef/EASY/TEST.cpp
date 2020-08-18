#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> num;
	int n=0;
	while(n!=42){
	    cin>>n;
	    if(n!=42){
	    num.push_back(n);
	    }
	}
	for (auto i : num) {
	    cout<<i<<endl;
	}
	return 0;
}
