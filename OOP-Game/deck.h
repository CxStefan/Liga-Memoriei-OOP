#ifndef DECK_H
#define DECK_H

#include "card.h"


using namespace System;
using namespace System::Collections::Generic;

ref class Deck
{
public:
	Deck();
	List<Card^>^ getCards();
private:
	List<Card^>^ cards;
};

#endif