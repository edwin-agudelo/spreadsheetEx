#pragma once

#include <string>

class SpreadSheetCell
{
public:
	SpreadSheetCell();
	virtual ~SpreadSheetCell();
	//SpreadSheetCell(double initialValue);
	//SpreadSheetCell(const std::string& initialValue);
	//SpreadSheetCell(const SpreadSheetCell& src);
	//SpreadSheetCell& operator=(const SpreadSheetCell& rhs);
	//SpreadSheetCell operator+(const SpreadSheetCell& cell) const;
	//friend SpreadSheetCell operator+(const SpreadSheetCell& lhs, const SpreadSheetCell& rhs);
	//friend SpreadSheetCell operator-(const SpreadSheetCell& lhs, const SpreadSheetCell& rhs);
	//friend SpreadSheetCell operator*(const SpreadSheetCell& lhs, const SpreadSheetCell& rhs);
	//friend SpreadSheetCell operator/(const SpreadSheetCell& lhs, const SpreadSheetCell& rhs);
	//SpreadSheetCell& operator+=(const SpreadSheetCell& rhs);
	//SpreadSheetCell& operator-=(const SpreadSheetCell& rhs);
	//SpreadSheetCell& operator*=(const SpreadSheetCell& rhs);
	//SpreadSheetCell& operator/=(const SpreadSheetCell& rhs);
	//friend bool operator==(const SpreadSheetCell& lhs, const SpreadSheetCell& rhs);
	//friend bool operator>(const SpreadSheetCell& lhs, const SpreadSheetCell& rhs);
	//friend bool operator<(const SpreadSheetCell& lhs, const SpreadSheetCell& rhs);
	//friend bool operator!=(const SpreadSheetCell& lhs, const SpreadSheetCell& rhs);
	//friend bool operator>=(const SpreadSheetCell& lhs, const SpreadSheetCell& rhs);
	//friend bool operator<=(const SpreadSheetCell& lhs, const SpreadSheetCell& rhs);
	//void setValue(double inValue);
	//double getValue() const;
	//void setString(const std::string& inString);
	virtual std::string getString() const = 0;
	//void set(double inValue);
	virtual void set(std::string& inString) = 0;
	//enum class Colors { Red = 1, Green, Blue, Yellow };
	//void setColor(Colors color);
	//SpreadSheetCell add(const SpreadSheetCell& cell) const;
private:
	//static std::string doubleToString(double inValue) ;
	//static double stringToDouble(const std::string& inString) ;
	//double mValue;
	//std::string mString;
	//mutable int mNumAccess = 0;
	//Colors mColor = Colors::Red;
};

// Esto es una funcion global para la adicion de celdas
// Se comenta debido al cambio de capitulo
/*SpreadSheetCell operator+(const SpreadSheetCell& lhs, const SpreadSheetCell& rhs) {
	SpreadSheetCell newCell;
	newCell.set(lhs.mValue + rhs.mValue);
	return newCell;
}

SpreadSheetCell operator-(const SpreadSheetCell& lhs, const SpreadSheetCell& rhs) {
	SpreadSheetCell newCell;
	newCell.set(lhs.mValue - rhs.mValue);
	return newCell;
}

SpreadSheetCell operator*(const SpreadSheetCell& lhs, const SpreadSheetCell& rhs) {
	SpreadSheetCell newCell;
	newCell.set(lhs.mValue * rhs.mValue);
	return newCell;
}

SpreadSheetCell operator/(const SpreadSheetCell& lhs, const SpreadSheetCell& rhs) {
	if (rhs.mValue == 0)
		throw invalid_argument("Divided by zero");
	SpreadSheetCell newCell;
	newCell.set(lhs.mValue / rhs.mValue);
	return newCell;
}

bool operator==(const SpreadSheetCell& lhs, const SpreadSheetCell& rhs) {
	return (lhs.mValue == rhs.mValue);
}

bool operator>(const SpreadSheetCell& lhs, const SpreadSheetCell& rhs) {
	return (lhs.mValue > rhs.mValue);
}

bool operator<(const SpreadSheetCell& lhs, const SpreadSheetCell& rhs) {
	return (lhs.mValue < rhs.mValue);
}

bool operator!=(const SpreadSheetCell& lhs, const SpreadSheetCell& rhs) {
	return (lhs.mValue != rhs.mValue);
}

bool operator>=(const SpreadSheetCell& lhs, const SpreadSheetCell& rhs) {
	return (lhs.mValue >= rhs.mValue);
}

bool operator<=(const SpreadSheetCell& lhs, const SpreadSheetCell& rhs) {
	return (lhs.mValue <= rhs.mValue);
}
*/

