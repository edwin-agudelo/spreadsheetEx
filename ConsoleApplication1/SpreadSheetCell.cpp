#include "SpreadSheetCell.h"
#include <iostream>
#include <sstream>

using namespace std;

// Se comenta por cambio de capitulo
/*void SpreadSheetCell::setValue(double inValue) {
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
<<<<<<< HEAD
=======

SpreadSheetCell SpreadSheetCell::add(const SpreadSheetCell& cell) const{
	SpreadSheetCell newCell;
	newCell.set(mValue + cell.mValue);
	return newCell;
}

SpreadSheetCell SpreadSheetCell::operator+(const SpreadSheetCell& cell) const {
	SpreadSheetCell newCell;
	newCell.set(mValue + cell.mValue);
	return newCell;
}

SpreadSheetCell& SpreadSheetCell::operator+=(const SpreadSheetCell& rhs) {
	set(mValue + rhs.mValue);
	return *this;
}

SpreadSheetCell& SpreadSheetCell::operator-=(const SpreadSheetCell& rhs) {
	set(mValue - rhs.mValue);
	return *this;
}

SpreadSheetCell& SpreadSheetCell::operator*=(const SpreadSheetCell& rhs) {
	set(mValue * rhs.mValue);
	return *this;
}

SpreadSheetCell& SpreadSheetCell::operator/=(const SpreadSheetCell& rhs) {
	if (rhs.mValue == 0) {
		throw invalid_argument("Divided by zero");
	}
	set(mValue + rhs.mValue);
	return *this;
}
*/

// Nuevo constructor para manejar herencia
SpreadSheetCell::SpreadSheetCell() { }
SpreadSheetCell::~SpreadSheetCell() { }
>>>>>>> 3a45af060e26a3913d14c9eada27da59d82f2c4d
