//
// Created by Sam Singh on 10/5/22.
//

#ifndef CASINO_DECK_H
#define CASINO_DECK_H
#include "card.h"
#include <iostream>
using namespace std;

const int kNumCardsInDeck = 52;
class Deck {
public:
    Deck();
    void Shuffle();
    void Cut();
    void Cut(int location);
    Card Draw();
    Card Peak() const;
    int CountRemainingCard() const;
    bool ReturnCard(Card card);


private:
    Card deck_[kNumCardsInDeck];
    int count_;


};


#endif //CASINO_DECK_H
