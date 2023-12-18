#include "RedoActionClass.h"

RedoActionClass::RedoActionClass(ApplicationManager* pApp):Action(pApp)
{

}

void RedoActionClass::UndoAction()
{

}

void RedoActionClass::RedoAction()
{

}

void RedoActionClass::ReadActionParameters()
{
	PassedAction = pManager->HandleAndReturnRedoActions();
}

void RedoActionClass::Execute()
{
	ReadActionParameters();
	cout << "Passed Action:"<< PassedAction << endl;
	if (PassedAction)
	{
		PassedAction->RedoAction();
		pManager->AddForUndoAction(PassedAction,false);
		pManager->SetRedoActionToNull(PassedAction);
	}
}
