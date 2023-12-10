#ifndef _ADD_HEXAGON_ACTION_H
#define _ADD_HEXAGON_ACTION_H
#include"Actions/Action.h"
#include"CHexagon.h"
#include"ApplicationManager.h"
#include"GUI/Input.h"
#include"GUI/Output.h"
#include "DeleteAction.h"
class AddHexagonAction:public Action 
{
private:
	Point center;
	GfxInfo HexagonGfxInfo;
public:
	AddHexagonAction(ApplicationManager* pApp);

	//Reads hexagon parameters
	virtual void ReadActionParameters();
	virtual void UndoAction();
	//Add hexagon to the ApplicationManager
	virtual void Execute();


};



#endif // !1

