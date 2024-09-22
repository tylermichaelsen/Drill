// Chapter 4 Drill

#include "PPP.h"


int main() {
	try {
		if (true) then cout << "Success!\n";
		else cout << "Fail!\n";
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