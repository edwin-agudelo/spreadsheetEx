#pragma once

#include <string>

class SpreadSheetCell
{
public:
	SpreadSheetCell();
	SpreadSheetCell(double initialValue);
	SpreadSheetCell(const std::string& initialValue);
	SpreadSheetCell(const SpreadSheetCell& src);
	SpreadSheetCell& operator=(const SpreadSheetCell& rhs);
	void setValue(double inValue);
	double getValue() const;
	void setString(const std::string& inString);
	const std::string& getString() const;
	void set(double inValue);
	void set(std::string& inString);
private:
	static std::string doubleToString(double inValue) ;
	static double stringToDouble(const std::string& inString) ;
	double mValue;
	std::string mString;
	mutable int mNumAccess = 0;
};

