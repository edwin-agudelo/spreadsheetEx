#pragma once

#include "SpreadSheetCell.h"

class StringSpreadSheetCell : public SpreadSheetCell
{
public:
	StringSpreadSheetCell();
	virtual void set(std::string& inString) override;
	virtual std::string getString() const override;
private:
	std::string mValue;
};

