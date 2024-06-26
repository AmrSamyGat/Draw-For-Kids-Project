#ifndef ADD_RECT_ACTION_H
#define ADD_RECT_ACTION_H

#include "..\Actions\Action.h"

#include "..\ApplicationManager.h"
#include "..\GUI\input.h"
#include "..\GUI\Output.h"
#include "../Figures/CRectangle.h"
#include "../Actions/DeleteAction.h"
#include "../Figures/CFigure.h"

//Add Rectangle Action class
class AddRectAction: public Action
{
private:
	Point P1, P2; //Rectangle Corners
	GfxInfo RectGfxInfo;
	CFigure* LastDrawnRect;
	CFigure* copyLastDrawnRect;
public:
	AddRectAction(ApplicationManager *pApp);
	virtual void RedoAction();
	//Reads rectangle parameters
	virtual void ReadActionParameters();
	virtual void PlayRecordingFunc();
	virtual void UndoAction();
	//Add rectangle to the ApplicationManager
	virtual void Execute() ;
};

#endif