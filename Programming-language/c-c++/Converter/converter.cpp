#include <vector>
#include "converter.hpp"

using namespace std;

string to_Hr[] = { "", "muoi", "tram" };

string to_Tr[] = { "", "nghin", "trieu", "ty", "nghin ty"};

string ones[] = { "khong", "mot", "hai", "ba", "bon", "nam", "sau", "bay", "tam", "chin" };

void setV(vector<int>& V, long long int& n) {
	for (int i=0; i<3; i++) {
		if(n==0){
			return;
		}
		V.push_back(n%10);
		n/=10;
	}
}

//int to words converter
string int_to_words_vi(long long int n) {

	string str, pre="";

	if(n==0){
		return "khong";
	}

	if(n<0){
		n=abs(n);
		pre+="am ";
	}

	string s="";
	int i=0;

	while (true) {

		to_Hr[0]=to_Tr[i++]; // ith time goes into "for": to_Hr[] = { "to_Tr[i++]", "muoi", "tram" };

		str = "";
		vector<int> V; // the default value of a vector is 0
		setV(V, n); // max size of V is 3 V[0] V[1] V[2], O(1)

		for(int index=V.size()-1; index>=0 && V[0]+V[1]+V[2]!=0; --index){

			if (!( 
				(index==1 && V[index]==1) // !teens 
				|| (index==1 && V[index]==0) // !and
				|| (index==0 && V[index]==0) // !**0

				)){
					str+=ones[V[index]] + " ";
				}
			
			if (index==1 && V[index]==0) {
				if(V[0]!=0){
					str+="le ";
				}
			}
			else {
				str+=to_Hr[index] + " ";
			}
		}

		str+=s;

		// O(log_10(n))
		if (n==0){
			break;
		}

		s=str;
	}
		
	return pre+str;
}


/*
 *
 *			I/o		: 17
 *			avoid	: "mot" muoi bay viet nam dong
 *			i/O		: muoi bay viet nam dong
 *
 *			I/o		: 404
 *			avoid	: bon tram "khong" le bon viet nam dong
 *			i/O		: bon tram le bon viet nam dong
 *
 *			I/o		: 400
 *			avoid	: bon tram "khong" "khong" viet nam dong
 *			i/O		: bon tram viet nam dong
 *
 */