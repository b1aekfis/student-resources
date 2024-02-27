#include <iostream>
#include <vector>

using namespace std;

#define pb push_back

int n, x;
vector <int> v;

int main(){
	cin>>n>>x;
	int *a = new int[n];
	for(int i=0; i<n; ++i){
	  cin>>a[i];
	  if(a[i]!=x) v.pb(a[i]);
	}
	for(int i=0; i<n; i++) 
		cout<<a[i]<<" ";
	cout<<"\n";
	for(int i=0; i<v.size(); i++) 
		cout<<v[i]<<" ";
	return (0);
}