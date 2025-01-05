#ifndef MYFORM_H
#define MYFORM_H

#include "card.h"
#include "deck.h"
#include "player.h"
#include "leaderboard.h"
#include <iostream>
#include <fstream>


using namespace System::Collections::Generic;

namespace OOPGame {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class MyForm : public System::Windows::Forms::Form
    {
    public:
        MyForm(void)
        {
            initializeRevealTimer();
            InitializeComponent();
			username->Hide();
			Enter_user->Hide();
			Ok_user->Hide();
			back->Hide();
			leaderboardListView->Hide();
        }

    protected:
        ~MyForm()
        {
            if (components)
            {
                delete components;
            }
        }

    private: System::Windows::Forms::Timer^ revealTimer;

    private: System::Windows::Forms::Button^ playbutton;
    private: System::Windows::Forms::Button^ LeaderboardButton;
    private: System::Windows::Forms::Label^ ScoreLabel;
    private: System::Windows::Forms::Label^ TimerLabel;
    private: System::Windows::Forms::Label^ timeText;
    private: System::Windows::Forms::Timer^ gameTimer; // gameTimer declared so this will be our game Timer
    private: System::Windows::Forms::Panel^ panel;

    private: System::Windows::Forms::ListView^ leaderboardListView;
    private: System::Windows::Forms::ColumnHeader^ columnHeader1;
    private: System::Windows::Forms::ColumnHeader^ columnHeader2;

    private: System::Windows::Forms::Button^ button10;
    private: System::Windows::Forms::Button^ button9;
    private: System::Windows::Forms::Button^ button8;
    private: System::Windows::Forms::Button^ button7;
    private: System::Windows::Forms::Button^ button6;
    private: System::Windows::Forms::Button^ button5;
    private: System::Windows::Forms::Button^ button4;
    private: System::Windows::Forms::Button^ button3;
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::Button^ button1;

    private: List<Card^>^ cards;
    private: System::Windows::Forms::TextBox^ username;
    private: System::Windows::Forms::Label^ Enter_user;
    private: System::Windows::Forms::Button^ Ok_user;
    private: System::Windows::Forms::Button^ back;









    private: System::ComponentModel::IContainer^ components;

    private:


#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
            this->playbutton = (gcnew System::Windows::Forms::Button());
            this->LeaderboardButton = (gcnew System::Windows::Forms::Button());
            this->ScoreLabel = (gcnew System::Windows::Forms::Label());
            this->TimerLabel = (gcnew System::Windows::Forms::Label());
            this->timeText = (gcnew System::Windows::Forms::Label());
            this->panel = (gcnew System::Windows::Forms::Panel());
            this->Ok_user = (gcnew System::Windows::Forms::Button());
            this->Enter_user = (gcnew System::Windows::Forms::Label());
            this->username = (gcnew System::Windows::Forms::TextBox());
            this->button10 = (gcnew System::Windows::Forms::Button());
            this->button9 = (gcnew System::Windows::Forms::Button());
            this->button8 = (gcnew System::Windows::Forms::Button());
            this->button7 = (gcnew System::Windows::Forms::Button());
            this->button6 = (gcnew System::Windows::Forms::Button());
            this->button5 = (gcnew System::Windows::Forms::Button());
            this->button4 = (gcnew System::Windows::Forms::Button());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->leaderboardListView = (gcnew System::Windows::Forms::ListView());
            this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
            this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
            this->back = (gcnew System::Windows::Forms::Button());
            this->panel->SuspendLayout();
            this->SuspendLayout();
            // 
            // playbutton
            // 
            this->playbutton->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->playbutton->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
            this->playbutton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->playbutton->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->playbutton->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->playbutton->Location = System::Drawing::Point(166, 218);
            this->playbutton->Name = L"playbutton";
            this->playbutton->Size = System::Drawing::Size(392, 43);
            this->playbutton->TabIndex = 0;
            this->playbutton->Text = L"PLAY !";
            this->playbutton->UseVisualStyleBackColor = false;
            this->playbutton->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
            // 
            // LeaderboardButton
            // 
            this->LeaderboardButton->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->LeaderboardButton->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
            this->LeaderboardButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->LeaderboardButton->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->LeaderboardButton->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->LeaderboardButton->Location = System::Drawing::Point(166, 267);
            this->LeaderboardButton->Name = L"LeaderboardButton";
            this->LeaderboardButton->Size = System::Drawing::Size(392, 43);
            this->LeaderboardButton->TabIndex = 1;
            this->LeaderboardButton->Text = L"Leaderboard";
            this->LeaderboardButton->UseVisualStyleBackColor = false;
            this->LeaderboardButton->Click += gcnew System::EventHandler(this, &MyForm::Leaderboard_Click);
            // 
            // ScoreLabel
            // 
            this->ScoreLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
            this->ScoreLabel->AutoSize = true;
            this->ScoreLabel->BackColor = System::Drawing::Color::Transparent;
            this->ScoreLabel->Font = (gcnew System::Drawing::Font(L"Calibri", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->ScoreLabel->Location = System::Drawing::Point(308, 9);
            this->ScoreLabel->Name = L"ScoreLabel";
            this->ScoreLabel->Size = System::Drawing::Size(128, 39);
            this->ScoreLabel->TabIndex = 2;
            this->ScoreLabel->Text = L"SCORE : ";
            this->ScoreLabel->Visible = false;
            // 
            // TimerLabel
            // 
            this->TimerLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left));
            this->TimerLabel->AutoSize = true;
            this->TimerLabel->BackColor = System::Drawing::Color::Transparent;
            this->TimerLabel->Font = (gcnew System::Drawing::Font(L"Calibri", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->TimerLabel->Location = System::Drawing::Point(11, 9);
            this->TimerLabel->Name = L"TimerLabel";
            this->TimerLabel->Size = System::Drawing::Size(109, 39);
            this->TimerLabel->TabIndex = 3;
            this->TimerLabel->Text = L"TIME : ";
            this->TimerLabel->Visible = false;
            this->TimerLabel->Click += gcnew System::EventHandler(this, &MyForm::TimerLabel_Click);
            // 
            // timeText
            // 
            this->timeText->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left));
            this->timeText->AutoSize = true;
            this->timeText->BackColor = System::Drawing::Color::Transparent;
            this->timeText->Font = (gcnew System::Drawing::Font(L"Calibri", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->timeText->Location = System::Drawing::Point(126, 9);
            this->timeText->Name = L"timeText";
            this->timeText->Size = System::Drawing::Size(0, 39);
            this->timeText->TabIndex = 4;
            // 
            // panel
            // 
            this->panel->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->panel->BackColor = System::Drawing::Color::Transparent;
            this->panel->Controls->Add(this->Ok_user);
            this->panel->Controls->Add(this->Enter_user);
            this->panel->Controls->Add(this->username);
            this->panel->Controls->Add(this->button10);
            this->panel->Controls->Add(this->button9);
            this->panel->Controls->Add(this->button8);
            this->panel->Controls->Add(this->button7);
            this->panel->Controls->Add(this->button6);
            this->panel->Controls->Add(this->button5);
            this->panel->Controls->Add(this->button4);
            this->panel->Controls->Add(this->button3);
            this->panel->Controls->Add(this->button2);
            this->panel->Controls->Add(this->button1);
            this->panel->Location = System::Drawing::Point(27, 98);
            this->panel->Name = L"panel";
            this->panel->Size = System::Drawing::Size(669, 377);
            this->panel->TabIndex = 5;
            this->panel->Visible = false;
            this->panel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel_Paint);
            // 
            // Ok_user
            // 
            this->Ok_user->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->Ok_user->Location = System::Drawing::Point(579, 158);
            this->Ok_user->Name = L"Ok_user";
            this->Ok_user->Size = System::Drawing::Size(87, 40);
            this->Ok_user->TabIndex = 11;
            this->Ok_user->Text = L"OK";
            this->Ok_user->UseVisualStyleBackColor = true;
            this->Ok_user->Click += gcnew System::EventHandler(this, &MyForm::Ok_user_Click);
            // 
            // Enter_user
            // 
            this->Enter_user->AutoSize = true;
            this->Enter_user->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->Enter_user->Location = System::Drawing::Point(32, 161);
            this->Enter_user->Name = L"Enter_user";
            this->Enter_user->Size = System::Drawing::Size(268, 29);
            this->Enter_user->TabIndex = 10;
            this->Enter_user->Text = L"Enter your username: ";
            // 
            // username
            // 
            this->username->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->username->Location = System::Drawing::Point(316, 161);
            this->username->MaxLength = 30;
            this->username->Name = L"username";
            this->username->Size = System::Drawing::Size(257, 35);
            this->username->TabIndex = 6;
            this->username->TextChanged += gcnew System::EventHandler(this, &MyForm::username_TextChanged);
            // 
            // button10
            // 
            this->button10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button10.BackgroundImage")));
            this->button10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->button10->Location = System::Drawing::Point(523, 197);
            this->button10->Name = L"button10";
            this->button10->Size = System::Drawing::Size(119, 159);
            this->button10->TabIndex = 9;
            this->button10->Text = L" ";
            this->button10->UseVisualStyleBackColor = true;
            this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
            // 
            // button9
            // 
            this->button9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button9.BackgroundImage")));
            this->button9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->button9->Location = System::Drawing::Point(401, 197);
            this->button9->Name = L"button9";
            this->button9->Size = System::Drawing::Size(119, 159);
            this->button9->TabIndex = 8;
            this->button9->Text = L" ";
            this->button9->UseVisualStyleBackColor = true;
            this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
            // 
            // button8
            // 
            this->button8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.BackgroundImage")));
            this->button8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->button8->Location = System::Drawing::Point(276, 197);
            this->button8->Name = L"button8";
            this->button8->Size = System::Drawing::Size(119, 159);
            this->button8->TabIndex = 7;
            this->button8->Text = L" ";
            this->button8->UseVisualStyleBackColor = true;
            this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
            // 
            // button7
            // 
            this->button7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.BackgroundImage")));
            this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->button7->Location = System::Drawing::Point(151, 197);
            this->button7->Name = L"button7";
            this->button7->Size = System::Drawing::Size(119, 159);
            this->button7->TabIndex = 6;
            this->button7->Text = L" ";
            this->button7->UseVisualStyleBackColor = true;
            this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
            // 
            // button6
            // 
            this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.BackgroundImage")));
            this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->button6->Location = System::Drawing::Point(26, 197);
            this->button6->Name = L"button6";
            this->button6->Size = System::Drawing::Size(119, 159);
            this->button6->TabIndex = 5;
            this->button6->Text = L" ";
            this->button6->UseVisualStyleBackColor = true;
            this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
            // 
            // button5
            // 
            this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
            this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->button5->Location = System::Drawing::Point(523, 4);
            this->button5->Name = L"button5";
            this->button5->Size = System::Drawing::Size(119, 159);
            this->button5->TabIndex = 4;
            this->button5->Text = L" ";
            this->button5->UseVisualStyleBackColor = true;
            this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
            // 
            // button4
            // 
            this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
            this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->button4->Location = System::Drawing::Point(401, 4);
            this->button4->Name = L"button4";
            this->button4->Size = System::Drawing::Size(119, 159);
            this->button4->TabIndex = 3;
            this->button4->Text = L" ";
            this->button4->UseVisualStyleBackColor = true;
            this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
            // 
            // button3
            // 
            this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
            this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->button3->Location = System::Drawing::Point(276, 4);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(119, 159);
            this->button3->TabIndex = 2;
            this->button3->Text = L" ";
            this->button3->UseVisualStyleBackColor = true;
            this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
            // 
            // button2
            // 
            this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
            this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->button2->Location = System::Drawing::Point(151, 4);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(119, 159);
            this->button2->TabIndex = 1;
            this->button2->Text = L" ";
            this->button2->UseVisualStyleBackColor = true;
            this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
            // 
            // button1
            // 
            this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
            this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->button1->Location = System::Drawing::Point(26, 3);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(119, 159);
            this->button1->TabIndex = 0;
            this->button1->Text = L" ";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
            // 
            // leaderboardListView
            // 
            this->leaderboardListView->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->leaderboardListView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) {
                this->columnHeader1,
                    this->columnHeader2
            });
            this->leaderboardListView->HideSelection = false;
            this->leaderboardListView->Location = System::Drawing::Point(50, 50);
            this->leaderboardListView->Name = L"leaderboardListView";
            this->leaderboardListView->Size = System::Drawing::Size(600, 300);
            this->leaderboardListView->TabIndex = 12;
            this->leaderboardListView->UseCompatibleStateImageBehavior = false;
            this->leaderboardListView->View = System::Windows::Forms::View::Details;
            this->leaderboardListView->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::leaderboardListView_SelectedIndexChanged);
            // 
            // columnHeader1
            // 
            this->columnHeader1->Text = L"Username";
            this->columnHeader1->Width = 300;
            // 
            // columnHeader2
            // 
            this->columnHeader2->Text = L"Score";
            this->columnHeader2->Width = 300;
            // 
            // back
            // 
            this->back->BackColor = System::Drawing::Color::Transparent;
            this->back->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->back->Location = System::Drawing::Point(53, 4);
            this->back->Name = L"back";
            this->back->Size = System::Drawing::Size(173, 40);
            this->back->TabIndex = 13;
            this->back->Text = L"BACK";
            this->back->UseVisualStyleBackColor = false;
            this->back->Click += gcnew System::EventHandler(this, &MyForm::back_Click);
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
            this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->ClientSize = System::Drawing::Size(728, 498);
            this->Controls->Add(this->back);
            this->Controls->Add(this->leaderboardListView);
            this->Controls->Add(this->panel);
            this->Controls->Add(this->timeText);
            this->Controls->Add(this->TimerLabel);
            this->Controls->Add(this->ScoreLabel);
            this->Controls->Add(this->LeaderboardButton);
            this->Controls->Add(this->playbutton);
            this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
            this->MinimumSize = System::Drawing::Size(750, 554);
            this->Name = L"MyForm";
            this->Text = L"Liga Memoriei";
            this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
            this->panel->ResumeLayout(false);
            this->panel->PerformLayout();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#endif
#pragma endregion
     

private: System::Void initializeRevealTimer() {
    revealTimer = gcnew System::Windows::Forms::Timer();
    revealTimer->Interval = 500; // 0.5 second delay
    revealTimer->Tick += gcnew System::EventHandler(this, &MyForm::revealTimer_Tick);
}
    private: System::Void revealTimer_Tick(System::Object^ sender, System::EventArgs^ e) {
        // Stop the timer
        revealTimer->Stop();

        // Reset the buttons' images
        System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
        firstClickedButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
        secondClickedButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));

        resetClickedButtons();
    }

    private: System::Void resetClickedButtons() {
               firstClickedButton = nullptr;
               secondClickedButton = nullptr;
    }

    public: int remainingTime = 40;
	public: int score = 0;

	public: void updateScore(int score)
	{
		ScoreLabel->Text = "SCORE : " + score.ToString();
	}

private: System::Windows::Forms::Button^ firstClickedButton;
private: System::Windows::Forms::Button^ secondClickedButton;

private: System::Void button_Click(System::Object^ sender, System::EventArgs^ e) { // Function to handle the cards click event
    Button^ clickedButton = safe_cast<Button^>(sender);

    if (firstClickedButton == nullptr) {
        firstClickedButton = clickedButton;
    }
    else if (secondClickedButton == nullptr) {
        secondClickedButton = clickedButton;
        checkIfButtonsMatch();
    }
}
public: int count = 0;

private: System::Void checkIfButtonsMatch() {

    int firstCardIndex = safe_cast<int>(firstClickedButton->Tag);
    int secondCardIndex = safe_cast<int>(secondClickedButton->Tag);
    if ((cards[firstCardIndex]->getValue() == cards[secondCardIndex]->getValue()) && firstCardIndex!=secondCardIndex) {

		firstClickedButton->Enabled = false;
		secondClickedButton->Enabled = false;
        count++;
        int cardValue = cards[firstCardIndex]->getValue();

        score += 2*(remainingTime+remainingTime)*cardValue;
        ScoreLabel->Text = "SCORE : " + score.ToString();
		resetClickedButtons();
		if (count == 5) //Here we ended the game because we guesed all pairs
		{
			button1->Hide();
			button2->Hide();
			button3->Hide();
			button4->Hide();
			button5->Hide();
			button6->Hide();
			button7->Hide();
			button8->Hide();
			button9->Hide();
			button10->Hide();

			gameTimer->Stop(); // Stop the timer
            timeText->Hide();
			TimerLabel->Hide();

			Enter_user->Show();
			username->Show();  // Show the username textbox
			Ok_user->Show();
			
		}

    }
    else {
		revealTimer->Start();
    }   
}
private: System::Void PopulateLeaderboard() {

    leaderboardListView->Items->Clear();
    
    Leaderboard^ leaderboard = gcnew Leaderboard();

    
    leaderboard->readPlayers();
	leaderboard->sortPlayers(); //SORTING THE PLAYERS

    List<Player^>^ players = leaderboard->getPlayers();
    
    for each (Player ^ player in players) {
		ListViewItem^ item = gcnew ListViewItem(player->getName()); //ADDING THE PLAYERS TO THE LISTVIEW IN
        item->SubItems->Add(player->getScore().ToString());             // DESCENDING ORDER
        leaderboardListView->Items->Add(item);
    }
}



    public: void endGame()
    {
        MessageBox::Show("Game Over!", "Game Over");
        Application::Exit();
    }
    public: void timerTick()
    {
        gameTimer = gcnew Timer();
        gameTimer->Interval = 1000;
        gameTimer->Tick += gcnew EventHandler(this, &MyForm::timer_Tick);
        gameTimer->Start();
    }
    private: System::Void timer_Tick(System::Object^ sender, System::EventArgs^ e) {
        if (remainingTime == 0)
        {
			gameTimer->Stop(); //Stop timer and exit the game
            endGame();
        }
        timeText->Text = remainingTime.ToString();
        remainingTime--;
    }

    public: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
        playbutton->Hide();
        LeaderboardButton->Hide();
        timerTick();
		username->Hide();
		Enter_user->Hide();
		
		Deck^ deck = gcnew Deck();
        
		this->cards = deck->getCards();


        this->button1->Tag = 0;
        this->button2->Tag = 1;
        this->button3->Tag = 2;
        this->button4->Tag = 3;
        this->button5->Tag = 4;
        this->button6->Tag = 5;
        this->button7->Tag = 6;
        this->button8->Tag = 7;
        this->button9->Tag = 8;
        this->button10->Tag = 9;

        ScoreLabel->Text = "SCORE : 0";   //Initialization
        TimerLabel->Text = "TIME : ";

        ScoreLabel->Show();
        TimerLabel->Show();
		panel->Show();
    }
    private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
    }


    private: System::Void Leaderboard_Click(System::Object^ sender, System::EventArgs^ e) {
        LeaderboardButton->Hide();
        playbutton->Hide();
		back->Show();
		PopulateLeaderboard();
		leaderboardListView->Show();
    }
    private: System::Void ScoreBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {

    }

    private: System::Void TimerLabel_Click(System::Object^ sender, System::EventArgs^ e) {
    }

    private: System::Void panel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
    }

		   // Initialize the cards with the corresponding images
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	String^ cardname = cards[0]->getName();
    System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
    this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(cardname)));
    this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch; // Optional: Adjust the layout
    button_Click(sender, e);
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ cardname = cards[1]->getName();
	System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
	this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(cardname)));
	this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch; // Optional: Adjust the layout
    button_Click(sender, e);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ cardname = cards[2]->getName();
	System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
	this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(cardname)));
	this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch; // Optional: Adjust the layout
    button_Click(sender, e);
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ cardname = cards[3]->getName();
	System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
	this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(cardname)));
	this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch; // Optional: Adjust the layout
    button_Click(sender, e);
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ cardname = cards[4]->getName();
	System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
	this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(cardname)));
	this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch; // Optional: Adjust the layout
    button_Click(sender, e);
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ cardname = cards[5]->getName();
	System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
	this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(cardname)));
	this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch; // Optional: Adjust the layout
    button_Click(sender, e);
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ cardname = cards[6]->getName();
	System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
	this->button7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(cardname)));
	this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch; // Optional: Adjust the layout
    button_Click(sender, e);
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ cardname = cards[7]->getName();
	System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
	this->button8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(cardname)));
	this->button8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch; // Optional: Adjust the layout
    button_Click(sender, e);
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ cardname = cards[8]->getName();
	System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
	this->button9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(cardname)));
	this->button9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch; // Optional: Adjust the layout
    button_Click(sender, e);
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ cardname = cards[9]->getName();
	System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
	this->button10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(cardname)));
	this->button10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch; // Optional: Adjust the layout
    button_Click(sender, e);
}


private: System::Void username_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
	   //Function to handle the username textbox event after completion of the game
private: System::Void Ok_user_Click(System::Object^ sender, System::EventArgs^ e) {
    if (username->Text == "") {
        MessageBox::Show("Please enter a username!", "Error");
        return;
    }
	if (username->Text->Contains(" "))
	{
		MessageBox::Show("Username cannot contain spaces!", "Error");
		return;
	}

    String^ filepath = "leaderboard.txt";

    
    Leaderboard^ leaderboard = gcnew Leaderboard();

    
	leaderboard->readPlayers();

    
    Player^ player = gcnew Player(username->Text, score);
	leaderboard->addPlayer(player);

	leaderboard->sortPlayers(); //sort the players

    leaderboard->writePlayers(); // write the sorted players in the file

    MessageBox::Show("Username successfully registered!", "CONGRATULATIONS");
    Application::Restart();
}


private: System::Void leaderboard_list_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void back_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Restart();
}
private: System::Void leaderboardListView_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
 

