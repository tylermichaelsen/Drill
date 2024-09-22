// Chapter 4 Drill

#include "PPP.h"


int main() {
	try {
		string res = 7;
		vector<int> v(10); v[5] = res;
		cout << "success!\n";
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