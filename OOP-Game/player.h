#ifndef PLAYER_H
#define PLAYER_H

using namespace System;
using namespace System::IO;

public ref class Player
{
public:
	Player() { this->name = ""; this->score = 0; }
	Player(String^ name, int score) { this->name = name; this->score = score; }
	unsigned long long getScore() { return score; }
	String^ getName() { return name; }
	void setName(String^ name) { this->name = name; }
	void setScore(unsigned long long score) { this->score = score; }
private:
	String^ name;
	unsigned long long score;
};

#endif

