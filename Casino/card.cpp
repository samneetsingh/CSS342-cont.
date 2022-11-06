//
// Created by Sam Singh on 10/5/22.
//

#include "card.h"
#include <iostream>
using namespace std;

Card::Card() {
    cout << "default constructor is running" << endl;
    value_ = 1;
    suit_ = kSpade;
}

Card::Card(int value, Suit suit) {

    cout << "int/suit constructor is running" << endl;
    if ((value > 13) || (value < 1)) {
        value_ = 1;
    } else {
        value_ = value;
    }
    suit_ = suit;
}

int Card::value() const {
    return 0;
}

Suit Card::suit() const {
    return kDiamond;
}

void Card::Print() const {

    string card_value, card_suit;
    card_suit = kSuit[suit_];

    switch (value_) {
        case 1:
            card_value = "ace";
            break;
        case 11:
            card_value = "jack";
            break;
        case 12:
            card_value = "queen";
            break;
        case 13:
            card_value = "king";
            break;
        default:
            card_value = to_string(value_);
    }
    cout << card_value << " of " << card_suit << endl;

    ostream& operator<<(ostream& stream, const Card& card) {

        string card_value, card_suit;
        card_suit = kSuit[card.suit()];

        switch (card.value()) {
            case 1:
                card_value = "ace";
                break;
            case 11:
                card_value = "jack";
                break;
            case 12:
                card_value = "queen";
                break;
            case 13:
                card_value = "king";
                break;
            default:
                card_value = to_string(card.value());
        }
        stream << card_value << " of " << card_suit;
        return stream;
    }
}