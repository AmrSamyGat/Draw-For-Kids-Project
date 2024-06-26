#ifndef _CCircle_H
#define _CCircle_H
#include "../Figures/CFigure.h"

class CCircle :public CFigure {
private:
	Point point1;
	int radius; // Because it doesn't always depend on Second Point
	static int Count; // number of figures of this type
public:
	CCircle(Point, int ,GfxInfo FigureGfxInfo);
	virtual Point GetFigureCenter();
	virtual void Draw(Output* pOut) const;
	virtual void RefineShape();
	virtual void Move(Point Pm);
	virtual bool CheckSelection(int x, int y);
	virtual void Save(ofstream& OutFile);
	//CCircle* SaveCopyOfFigure();
	
	static void DecreaseCount();
	static void IncreaseCount();
	virtual void ResizeByDragging(Point& P1);
	virtual void PrintInfo(Output* pOut);

	static int GetCount();
};


#endif // !1

