#ifndef FRAC_HPP
#define FRAC_HPP

#include <iostream>

using namespace std;

namespace yakito{
	class frac{
		int x, y;

		public: // members function

		// constructor overloading
		frac(); // default constructor
		frac(int); // constructor with a parameter
		frac(int, int); // constructor with full parameters

		// operator overloading
		frac operator+(frac);
		frac operator-(frac);
		frac operator*(frac);
		frac operator/(frac);

		// members
		void simplify();
		void output();
	};
}

#endif // FRAC_HPP