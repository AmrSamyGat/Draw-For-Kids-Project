#include "MoveAction.h"
#include "..\ApplicationManager.h"
#include "../GUI/Output.h"
#include "..\GUI\Input.h"

Move::Move(ApplicationManager* pApp) : Action(pApp)
{}

void Move::ReadActionParameters()
{
	Output* pOut = pManager->GetOutput();
	Input* pIn = pManager->GetInput();
	if (pManager->GetSelectedFigure() != NULL)
	{
		pOut->PrintMessage("Please set the new center of the selected figure");
		pIn->GetPointClicked(Pf.x, Pf.y);
		pOut->ClearStatusBar();
	}
	else
	{
		pOut->PrintMessage("No figure is selected");
	}
}

void Move::Execute()
{
	Output* pOut = pManager->GetOutput();
	ReadActionParameters();
	if (Pf.y < UI.ToolBarHeight)
	{
		pOut->PrintMessage("You can't click here");
	}
	else {
		if (pManager->GetSelectedFigure() != NULL)

			pManager->GetSelectedFigure()->Move(pOut, Pf);
	}
}
void Move::UndoAction()
{

}