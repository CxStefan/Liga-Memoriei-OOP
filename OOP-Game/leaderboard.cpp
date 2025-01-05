#include "leaderboard.h"
#include <fstream>

using namespace std;

void Leaderboard::addPlayer(Player^ player)
{
	players->Add(player);
}

void Leaderboard::writePlayers()
{
	String^ filePath = "leaderboard.txt";
	StreamWriter^ writer = gcnew StreamWriter(filePath,false);
	for each (Player^ player in players)
	{
		writer->WriteLine(player->getName() + " " + player->getScore());
	}
	writer->Close();
}

void Leaderboard::readPlayers()
{
    players->Clear();
    String^ filePath = "leaderboard.txt";
    if (System::IO::File::Exists(filePath)) {
        StreamReader^ reader = gcnew StreamReader(filePath);
        while (!reader->EndOfStream)
        {
            String^ line = reader->ReadLine();
            cli::array<String^>^ words = line->Split(' ');
            Player^ player = gcnew Player(words[0], Convert::ToInt32(words[1]));
            players->Add(player);
        }
        reader->Close();
    }
}

int ComparePlayers(Player^ p1, Player^ p2) 
{
    return p2->getScore().CompareTo(p1->getScore());
}

void Leaderboard::sortPlayers()
{
    players->Sort(gcnew Comparison<Player^>(ComparePlayers));
}
