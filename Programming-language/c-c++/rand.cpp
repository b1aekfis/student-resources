/*
 *
 * SAMPLE:
 * v1 = rand() % 100; // v1 in the range 0 to 99
 * v2 = rand() % 100 + 1; // v2 in the range 1 to 100
 *
 * // v3 in the range 1985 to 2014
 * v3 = rand() % 30 + 1985;
 * v3 = 1985 + rand() % (2014-1985)+1
 *
 * RECIPES (standard): n in the range x to y
 * n = x + rand() % (y - x + 1)
 *
 * Learn more : 
 * http://www.cplusplus.com/reference/cstdlib/rand/
 *
 */

#include <iostream>
#include <cstdlib> /* rand, srand */
#include <ctime> /* time */

int Rand(int , int );


int main() {
	srand(time(0));
	int n;

	// random: 0 -> 99
	n = rand() % 100;
	std::cout << n << "\n";

	// random: 17 -> 9999
	n = Rand(17, 9999);
	std::cout << n;
}

int Rand(int x, int y) {
	return x + rand() % ((y - x) + 1);
}