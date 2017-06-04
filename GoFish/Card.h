#pragma once

using namespace std;

enum cardSuits { Clubs, Diamonds, Hearts, Spades };
enum cardNames { Ace, Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, Queen, King };


class Card
{
public:
	cardNames cardName;
	int cardValue;
	cardSuits suit;
	bool wild;

	Card(int iCardValue, cardNames eCardname, cardSuits eSuit, bool bWild)
	{
		cardName = eCardname;
		cardValue = iCardValue;
		suit = eSuit;
		wild = bWild;
	}

};