#include <bits/stdc++.h>

using namespace std;

float a,b,c;

int main() {
	a=-5;
	b=3;
	c=2;

	// a=0 pt co vo so nghiem
	if(a==0&&b==0&&c==0) {
		cout<<"pt vo so nghiem";
		return 0;
	}
	
	// pt co dang bx+c=0
	if(a==0) { 										
		if(b==0) {
			cout<<"pt vo nghiem";
			return 0;
		} cout<<-c/b;
		return 0;
	}

	// a!=0
	float dd=pow(b,2)-(4*a*c);
	if(dd<0){
		cout<<"pt vo nghiem";
	}
	else if(dd==0){ // nghiem kep
		cout<<-b/(2*a);
	}
	else { // dd>0, pt co hai nghiem phan biet
		float x1, x2;
		x1=(-b+sqrt(dd))/(2*a);
		x2 = (-b-sqrt(dd))/(2*a);
		cout<<x1<<"\n"<<x2;
	}
}