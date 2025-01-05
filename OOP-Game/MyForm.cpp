#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

int main(array<System::String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    OOPGame::MyForm form;
    Application::Run(% form);

 //   Leaderboard^ leaderboard = gcnew Leaderboard();
 //   Player^ player = gcnew Player("John", 100);
 //   Player^ player2 = gcnew Player("Jane", 200);
 //   Player^ player3 = gcnew Player("Stefan", 930);
 //   Player^ player4 = gcnew Player("Andrei", 650);
 //   Player^ player5 = gcnew Player("UserGuest", 780);

 //   leaderboard->addPlayer(player);
 //   leaderboard->addPlayer(player2);
 //   leaderboard->addPlayer(player3); 
 //   leaderboard->addPlayer(player4);
 //   leaderboard->addPlayer(player5);

 //   List<Player^>^ players = leaderboard->readPlayers(); 
 //   leaderboard->sortPlayers(players); 
	//leaderboard->writePlayers(players);

    return 0;
}


