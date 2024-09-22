// Chapter 4 Drill

#include "PPP.h"


int main() {
	try {
		string s = "fool";
		if (s == "fool")
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