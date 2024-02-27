#include <numeric>
#include "frac.hpp"

using namespace std;

/* members of yakito::frac */
using namespace yakito;

frac::frac(){
	x = 0;
	y = 1;
}

frac::frac(int x){
	this->x = x;
	y = 1;
}

frac::frac(int x, int y){
	this->x = x;
	this->y = y;
}

frac frac::operator+(frac other){
	frac new_Frac = {x*other.y + other.x*y, y*other.y};
	new_Frac.simplify();
	return new_Frac;
}

frac frac::operator-(frac other){
	frac new_Frac = {x*other.y - other.x*y, y*other.y};
	new_Frac.simplify();
	return new_Frac;
}

frac frac::operator*(frac other){
	frac new_Frac = {x*other.x, y*other.y};
	new_Frac.simplify();
	return new_Frac;
}

frac frac::operator/(frac other){
	frac new_Frac = {x*other.y, y*other.x};
	new_Frac.simplify();
	return new_Frac;
}

void frac::simplify(){
	int va=gcd(x, y);
	x/=va;
	y/=va;
}

void frac::output(){
	y!=1? cout << x << "/" << y : cout << x;
}