#include "StringSpreadSheetCell.h"

StringSpreadSheetCell::StringSpreadSheetCell() : mValue("#NOVALUE") { }

void StringSpreadSheetCell::set(std::string& inString) {
	mValue = inString;
}

std::string StringSpreadSheetCell::getString() const {
	return mValue;
}
