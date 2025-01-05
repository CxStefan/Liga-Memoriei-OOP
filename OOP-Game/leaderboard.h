#ifndef LEADERBOARD_H
#define LEADERBOARD_H

#include "player.h"
#include <fstream>
#include <iostream>
using namespace System;
using namespace System::IO;
using namespace System::Collections::Generic;

public ref class Leaderboard
{
public:
	Leaderboard() { this->players = gcnew List<Player^>(); }
	void addPlayer(Player^ player);
	void sortPlayers();
	void readPlayers();
	List<Player^>^ getPlayers() { return players; }
	void writePlayers();
private:
	List<Player^>^ players;
};

#endif

