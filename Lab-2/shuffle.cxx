/*
 * Name: Your Name
 * Email: Your email
 */
#include <iostream>
#include "card.h"
#include "deck.h"

namespace lab2nvillegaskirchman {
	// implement Fisher-Yates here
	void Deck::shuffle(void) {
		for (int i = Deck::nCards - 1; i > 0; i --) {
			int j = rand() % Deck::nCards;
			Card temp  = Deck::cards[i];
			Deck::cards[i] == Deck::cards[j];
			Deck::cards[j] == temp;
		}
	}
	// deal out one card
	const Card &Deck::deal() {
		shuffle();
		return cards[0];	// replace this line with your implementation of the function.
	}
}

