#include "SpreadSheetCell.h"
#include <iostream>
#include <sstream>

using namespace std;

void SpreadSheetCell::setValue(double inValue) {
	mValue = inValue;
	mString = doubleToString(inValue);
}

double SpreadSheetCell::getValue() const {
	mNumAccess++;
	return mValue;
}

void SpreadSheetCell::setString(const string& inString) {
	mString = inString;
	mValue = stringToDouble(inString);
}

const string& SpreadSheetCell::getString() const {
	mNumAccess++;
	return mString;
}

double SpreadSheetCell::stringToDouble(const string& inString)  {
	double temp;
	istringstream istr(inString);
	istr >> temp;
	if (istr.fail() || !istr.eof()) {
		return 0;
	}
	return temp;
}

string SpreadSheetCell::doubleToString(double  inValue)  {
	ostringstream ostr;
	ostr << inValue;
	return ostr.str();
}

SpreadSheetCell::SpreadSheetCell(double initialValue) {
	setValue(initialValue);
}

SpreadSheetCell::SpreadSheetCell(const std::string& initialValue) {
	setString(initialValue);
}

SpreadSheetCell::SpreadSheetCell() {
	setValue(0);
}

SpreadSheetCell::SpreadSheetCell(const SpreadSheetCell& src) : mValue(src.mValue), mString(src.mString) {
}

SpreadSheetCell& SpreadSheetCell::operator=(const SpreadSheetCell& rhs) {
	if (this == &rhs) {
		return *this;
	}
	mValue = rhs.mValue;
	mString = rhs.mString;
	return *this;
}

void SpreadSheetCell::set(double inValue) {
	setValue(inValue);
}

void SpreadSheetCell::set(std::string& inString) {
	setString(inString);
}
