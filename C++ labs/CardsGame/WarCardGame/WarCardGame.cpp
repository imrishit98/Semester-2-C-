/*
Author: Rishit Patel
Date: May 7, 2019
Description: War Card Game
*/
#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;

class Cards {
private:
	int faceValue;
	char suit;
public:
	Cards();
	
};

Cards::Cards() {
	faceValue = (rand() % 13) + 1;
	suit = (rand() % 4) + 1;
	switch (suit) {
	case '1':

	}
}
class Deck {
private:
	static const int MAX_CARDS = 52;       //Maximum number of cards in a deck
	static const int NUM_SUITS = 4;        //Number of card suits
	static const int CARDS_PER_SUIT = 13;  //Number of cards of each suit

	Cards deck[MAX_CARDS];     //The deck of cards
	int topCard;              //The subscript of the card on the top of the deck

public:
	Deck();
};

Deck::Deck() {

}

int main() {
	srand((unsigned)time(NULL));

}