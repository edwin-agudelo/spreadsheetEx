#include "SpreadSheet.h"

//int SpreadSheet::sCounter;

/*SpreadSheet::SpreadSheet(const SpreadSheetApplication& theApp, int inWidth, int inHeigh) :
	mWidth(inWidth < kMaxWidth ? inWidth : kMaxWidth), 
	mHeight(inHeigh < kMaxHeight ? inHeigh : kMaxHeight),
	mTheApp(theApp){
	mId = sCounter++;
	mCells = new SpreadSheetCell * [mWidth];
	for (int i = 0; i < mHeight; i++) {
		mCells[i] = new SpreadSheetCell[mHeight];
	}
}

bool SpreadSheet::inRange(int val, int upper) {
	if (val >= upper)
		return false;
	return true;
}

void SpreadSheet::setCellAt(int x, int y, const SpreadSheetCell& cell) {
	if (!inRange(x, mWidth) || !inRange(y, mHeight)) {
		throw std::out_of_range("");
	}
	mCells[x][y] = cell;
}

SpreadSheetCell& SpreadSheet::getCellAt(int x, int y) {
	if (!inRange(x, mWidth) || !inRange(y, mHeight)) {
		throw std::out_of_range("");
	}
	return mCells[x][y];
}

SpreadSheet::~SpreadSheet() {
	for (int i = 0; i < mWidth; i++){
		delete [] mCells[i];
	}
	delete mCells;
	mCells = nullptr;
}

SpreadSheet::SpreadSheet(const SpreadSheet& src) : mTheApp(src.mTheApp) {
	/*mWidth = src.mWidth;
	mHeight = src.mHeight;
	mCells = new SpreadSheetCell * [mWidth];
	for (int i = 0; i < mHeight; i++) {
		mCells[i] = new SpreadSheetCell[mHeight];
	}
	for (int i = 0; i < mWidth; i++)
		for (int j = 0; j < mHeight; j++)
			mCells[i][j] = src.mCells[i][j];*//*

	// Esto es una mejora
	mId = sCounter++;
	copyFrom(src);
}

SpreadSheet& SpreadSheet::operator=(const SpreadSheet& rhs) {
	// Valido si es el mismo
	if (this == &rhs)
		return *this;

	// Limpio la memoria para asignar
	for (int i = 0; i < mWidth; i++) {
		delete mCells[i];
	}
	delete mCells;
	mCells = nullptr;

	// Copio el contenido
	/*mWidth = rhs.mWidth;
	mHeight = rhs.mHeight;
	mCells = new SpreadSheetCell * [mWidth];
	for (int i = 0; i < mHeight; i++) {
		mCells[i] = new SpreadSheetCell[mHeight];
	}
	for (int i = 0; i < mWidth; i++)
		for (int j = 0; j < mHeight; j++)
			mCells[i][j] = rhs.mCells[i][j];*/ /*
	copyFrom(rhs);

	return *this;
}

void SpreadSheet::copyFrom(const SpreadSheet& src) {
	mWidth = src.mWidth;
	mHeight = src.mHeight;
	mCells = new SpreadSheetCell * [mWidth];
	for (int i = 0; i < mWidth; i++) {
		mCells[i] = new SpreadSheetCell[mHeight];
	}
	for (int i = 0; i < mWidth; i++) {
		for (int j = 0; j < mHeight; j++) {
			mCells[i][j] = src.mCells[i][j];
		}
	}
}

int SpreadSheet::getId() {
	return mId;
}

void SpreadSheetCell::setColor(Colors color) {
	mColor = color;
}
*/