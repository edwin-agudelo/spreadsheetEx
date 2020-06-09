#include "SpreadSheetCell.h"
#include <iostream>
#include <sstream>

using namespace std;

void SpreadSheetCell::setValue(double inValue) {
	mValue = inValue;
	mString = doubleToString(inValue);
}

double SpreadSheetCell::getValue() const {
	return mValue;
}

void SpreadSheetCell::setString(const string& inString) {
	mString = inString;
	mValue = stringToDouble(inString);
}

const string& SpreadSheetCell::getString() const {
	return mString;
}

double SpreadSheetCell::stringToDouble(const string& inString) const {
	double temp;
	istringstream istr(inString);
	istr >> temp;
	if (istr.fail() || !istr.eof()) {
		return 0;
	}
	return temp;
}

string SpreadSheetCell::doubleToString(double  inValue) const {
	ostringstream ostr;
	ostr << inValue;
	return ostr.str();
}

