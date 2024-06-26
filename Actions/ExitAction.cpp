#include "ExitAction.h"
#include "../ApplicationManager.h"


Exit::Exit(ApplicationManager* pApp) : Action(pApp)
{
	voice = "Sound\\EXIT.wav";
}

void Exit::ReadActionParameters() {}
void Exit::RedoAction()
{
}
void Exit::Execute()
{
	PlayActionVoice();
	if(UI.SoundEnabled)
	Sleep(1500);
	
	pManager->ExitProgram(); 
	exit(0);
}

void Exit::UndoAction()
{}
