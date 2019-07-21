#pragma once
#include "../GUI/GUI.h"

//TODO: Implement Bearing Off

class Game
{
	GUI *pGUI;

	// Board
	Cell mCell[24];
	
	vector <int> mMoves;
	
	bool mBearingOff[2];

	PROGRAM_MODE mMode;

	void ResetAllCells(STATUS PLAYER);
	void ShowMoves(int click, STATUS PLAYER);
	void ShowBearingOffMoves(STATUS PLAYER);
	
	void FillMoves();
	void RemoveChosenMove(int chosenCell, int previousCell, STATUS PLAYER);
	void DoMove(int previousCell, int chosenCell, STATUS PLAYER);

	void CheckBearingOff();

public:
	Game();

	void Play();
	
	~Game();
};
