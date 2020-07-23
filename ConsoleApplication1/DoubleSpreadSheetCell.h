#pragma once

#include "SpreadSheetCell.h"

class DoubleSpreadSheetCell : public SpreadSheetCell
{
public:
	DoubleSpreadSheetCell();
	virtual void set(double inDouble);
	virtual void set(std::string& inString) override;
	virtual std::string getString() const override;
private:
	static std::string doubleToString(double inValue);
	static double stringToDouble(const std::string& inValue);
	double mValue;
};

