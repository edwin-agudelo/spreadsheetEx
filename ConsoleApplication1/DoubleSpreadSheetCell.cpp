#include "DoubleSpreadSheetCell.h"
#include <limits>
#include <sstream>

DoubleSpreadSheetCell::DoubleSpreadSheetCell() : mValue(std::numeric_limits<double>::quiet_NaN()) { }

void DoubleSpreadSheetCell::set(double inValue) {
	mValue = inValue;
}

void DoubleSpreadSheetCell::set(std::string& inString) {
	mValue = stringToDouble(inString);
}

std::string DoubleSpreadSheetCell::getString() const {
	return doubleToString(mValue);
}

double DoubleSpreadSheetCell::stringToDouble(const std::string& inString) {
	double temp;
	std::istringstream istr(inString);
	istr >> temp;
	if (istr.fail() || !istr.eof()) {
		return 0;
	}
	return temp;
}

std::string DoubleSpreadSheetCell::doubleToString(double  inValue) {
	std::ostringstream ostr;
	ostr << inValue;
	return ostr.str();
}
