//
// Created by Sam Singh on 10/5/22.
//

#ifndef UNTITLED_CARD_H
#define UNTITLED_CARD_H
#include <iostream>
#include <string>
using namespace std;

enum Suit {kHeart, kDiamond, kClub, kSpade};
string kSuit[4] = {"Heart", "Diamond", "Club", "Spade"};

class Card {

public:
    // Constructors
    Card();
    Card(int value, Suit suit);

    //Getters
    int value() const;
    Suit suit() const;

    //Print
    void Print() const;

    friend ostream& operator<<(ostream& stream, const Card& card);

private:
    int value_;
    Suit suit_;

};


#endif //UNTITLED_CARD_H
