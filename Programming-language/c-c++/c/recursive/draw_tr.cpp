#include <iostream>

void draw_tr(int size, int const n=1) {

	for(int i=0; i<n; i++) {
		if(n<10&&i>0&&i<(n-1))
			std::cout<<"  ";
		else std::cout<<"* ";
	} std::cout<<std::endl;

	// for(int i=0; i<n; i++)
	// 	std::cout<<"* ";
	// std::cout<<std::endl;

	if(n<size)
		draw_tr(size, n+1);
 
	for(int i=0; i<n; i++) {
		if(n<10&&i>0&&i<(n-1))
			std::cout<<"  ";
		else std::cout<<". ";
	} std::cout<<std::endl;
	
	// for(int i=0; i<n; i++)
	// 	std::cout<<". ";
	// std::cout<<std::endl;
}

int main() {
	draw_tr(10);
}