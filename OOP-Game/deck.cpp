#include "deck.h"

Deck::Deck()
{
	// Creating the deck of cards
	//and sorting them in a random order
    cards = gcnew List<Card^>();

    for (int i = 0; i < 10; i += 2)
    {
        Card^ card1 = gcnew Card();
        Card^ card2 = gcnew Card();

        if (i == 0)
        {
            card1->setName("UCV");
            card1->setValue(15);
            card2->setName("UCV");
            card2->setValue(15);
        }
        else if (i == 2)
        {
            card1->setName("Otelul");
            card1->setValue(14);
            card2->setName("Otelul");
            card2->setValue(14);
        }
        else if (i == 4)
        {
            card1->setName("Farul");
            card1->setValue(13);
            card2->setName("Farul");
            card2->setValue(13);
        }
        else if (i == 6)
        {
            card1->setName("CFR");
            card1->setValue(12);
            card2->setName("CFR");
            card2->setValue(12);
        }
        else if (i == 8)
        {
            card1->setName("FCSB");
            card1->setValue(11);
            card2->setName("FCSB");
            card2->setValue(11);
        }

        cards->Add(card1);
        cards->Add(card2);
    }

    Random^ random = gcnew Random();
    for (int i = 0; i < 100; i++) // Switching the position of cards 100 times to ensure the deck is shuffled 100%.
    {
        int randomIndex = random->Next(0, cards->Count);
        Card^ temp = cards[i % cards->Count];
        cards[i % cards->Count] = cards[randomIndex];
        cards[randomIndex] = temp;
    }
}

List<Card^>^ Deck::getCards()
{
	return cards;
}

