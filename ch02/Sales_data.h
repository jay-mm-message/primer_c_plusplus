#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <iostream>
struct Sales_data {
	std::string bookNo;
	unsigned unit_sold = 0;
	double revenue = 0.0;

	Sales_data(std::string no, unsigned sold, double revenue) {
		this->bookNo = no;
		this->unit_sold = sold;
		this->revenue = revenue;
	}

	void p() {
		std::cout << this->bookNo << ' '
			 << this->unit_sold << ' '
			 << this->revenue
			<< std::endl;
	}
};

#endif