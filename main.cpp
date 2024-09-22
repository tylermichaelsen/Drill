// Chapter 4 Drill

#include "PPP.h"


int main() {
	try {
		int x = 2000;
		char c = x; 
		if (c != 2000)
			cout << "Success!\n";
		return 0;
	}

	catch (exception& e) {
		cerr << "error: " << e.what() << '\n';
		return 1;
	}

	catch (...) {
		cerr << "Oops: unknown exception!\n";
		return 2;
	}
}