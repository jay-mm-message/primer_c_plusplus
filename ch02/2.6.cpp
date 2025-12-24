#include <iostream>
using namespace std;

struct Sales_data {
	string bookNo;
	unsigned unit_sold = 0;
	double revenue = 0.0;

	Sales_data(string no, unsigned sold, double revenue) {
		this->bookNo = no;
		this->unit_sold = sold;
		this->revenue = revenue;
	}

	void p() {
		cout << this->bookNo << ' '
			 << this->unit_sold << ' '
			 << this->revenue
			<< endl;
	}
};

int main() {
	struct Sales_data sdata_1("0-201-78345-x", 3, 20.00);
	struct Sales_data sdata_2("0-201-78345-x", 2, 25.00);

	sdata_1.p();
	sdata_2.p();
	
	return 0;
}