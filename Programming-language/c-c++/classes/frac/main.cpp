#include <iostream>
#include "frac.hpp"

using namespace std;
using namespace yakito;

int main(){

	frac f1 = {2, 4};
	frac f2 (2, 4);

	(f1 + f2).output();
}