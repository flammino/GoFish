// Logic for a computer player with a resposive playstyle in a 4 player game
// In progress. Feel free to pick this up and add to it, just please note
// what part you're working on in readme.md
#include "stdafx.h"
#include "Card.h"
#include "Player.h"
#include "algorithm"

class ResponsiveComputerPlayer {
private:
	std::vector<Card> cp1; // Cards suspected to be possesed by other players (1-3)
	std::vector<Card> cp2;
	std::vector<Card> cp3;
	std::string sp1; // Names of other players
	std::string sp2;
	std::string sp3;
public:

	// Sets players names for tracking purposes
	void setNames(std::string p1, std::string p2, std::string p3) {
		sp1 = p1;
		sp2 = p2;
		sp3 = p3;
	}

	// Watches what other players do, logs what cards other players are suspected of having
	// based on what they ask for and what is matched
	void watch(std::string asker, std::string giver, Card requested, bool match) {
		if (!match) {
			if (asker == sp1) {
				cp1.push_back(requested); // Adds requested card to vector of cards player has
			}
			else if (asker == sp2) {
				cp2.push_back(requested);
			}
			else if (asker == sp3) {
				cp3.push_back(requested);
			}
		}
		if (match) {
			if (asker == sp1 || giver == sp1) {
				cp1.erase(std::remove(cp1.begin(), cp1.end(), requested), cp1.end()); // Removes matched card from vector of cards player has
			}
			if (asker == sp2 || giver == sp2) {
				cp2.erase(std::remove(cp2.begin(), cp2.end(), requested), cp2.end());
			}
			if (asker == sp3 || giver == sp3) {
				cp3.erase(std::remove(cp3.begin(), cp3.end(), requested), cp3.end());
			}
		}
	}

	void play() {
		// check hand against cards other players are expected to have
		// if a pair exists ask for that, otherwise ask for a random card in hand
	}
};