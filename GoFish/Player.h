#ifndef PLAYER_H
#define PLAYER_H
#include <vector>
#include "Card.h"
using namespace std;

// Player class declaration
class Player
{
private:
	vector<Card> hand;
	vector<Card> sets;
	string playerName;
	int countSets;
public:
	Player(string name)
	{
		playerName = name;
		countSets = 0;
	}
	int findCard(int rank);
	int exchangeCards(int foundIdx, Player& opponent);
	void addCard(const Card& card);
	void removeCard(int index);
	void findSets();
};

int Player::findCard(int rank)
{
	return 0;
}

int Player::exchangeCards(int foundIdx, Player& opponent)
{
	return 0;
}

void Player::addCard(const Card& card)
{
}

void Player::removeCard(int index)
{
}

void Player::findSets()
{
	int i = 0;

	/*If there are fewer than 3 cards after i,
	abandon the search for sets*/
	while (i + 3 < hand.size())
	{
		int currRank = hand[i].rank;
		int threeAway = hand[i + 3].rank;
		if (currRank == threeAway)
		{
			copy(hand.begin() + i, hand.begin() + i + 4, sets);
			hand.erase(hand.begin() + i, hand.begin() + i + 4);
			i += 4;
		}
		// Increment i and prepare to check next four indices
		else
			i++;
	}
}
#endif