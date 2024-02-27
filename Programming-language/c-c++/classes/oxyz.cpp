#include <iostream>
#include <cmath> // sqrt, pow

class Coordinate {

	float x,y,z;
	
public:
	Coordinate() {
		x=y=z=0;
	}

	Coordinate(float x, float y){
		this->x = x;
		this->y = y;
		this->z = 0;
	}

	Coordinate(float x,float y, float z) {
		this->x = x;
		this->y = y;
		this->z = z;
	}

	// Coordinate(const Coordinate& copyme) { //khoi tao sao chep
	// 	x=copyme.x;
	// 	y=copyme.y;
	// 	z=copyme.z;
	// }

	// operator=(Coordinate copyme){
	// 	x = copyme.x;
	// 	y = copyme.y;
	// 	z = copyme.z;
	// }

	float Distance(Coordinate B) {
		return sqrt(pow(this->x-B.x,2)+pow(this->y-B.y,2)+pow(this->z-B.z,2));
	}

};


int main() {
	Coordinate A(8.88,8.5);
	Coordinate B(8.8,5.8);
	Coordinate C = B;
	B = A;

	std::cout<<"A->B: "<<A.Distance(B)<<std::endl;
	std::cout<<"A->C: "<<A.Distance(C)<<std::endl;
}