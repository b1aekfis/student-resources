/*
	Tính chất: một số N được biểu diễn bằng dãy nhị phân
	thì "số phủ định" của N sẽ là thập phân của dãy "phủ định" dãy
	nhị phân của N
	Ví dụ: Số 9 được biểu diễn dưới dạng nhị phân là 1001
	vậy "Số phủ định" của nó sẽ là số có dạng nhị phân là 0110 tức số 6
	Input:
	- số nguyên T là số bộ test (1<=T<=10^5)
	- T dòng tiếp theo là số nguyên N (0<=N<=10^9)
	Output:
	- gồm T dòng kết quả
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long LL;


LL spd(LL n) {
	int i=0;
	LL s=0;

	while (n>0) {
		if(n%2==0)
		s+=(LL)pow(2,i); // s+= 1*pow(2,i)
		n/=2;
		++i;

	} return s;
}

int T;
LL n;

int main() {
	cin >> T;

	while (T>0) {
		cin >> n;
		cout << spd(n);
		--T;
	}
	return 0;
}