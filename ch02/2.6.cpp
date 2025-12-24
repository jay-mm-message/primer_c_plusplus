#include <iostream>
using namespace std;
#include "Sales_data.h"

int main() {
	struct Sales_data sdata_1("0-201-78345-x", 3, 20.00);
	struct Sales_data sdata_2("0-201-78345-x", 2, 25.00);

	sdata_1.p();
	sdata_2.p();

	return 0;
}
