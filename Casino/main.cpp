#include <iostream>
#include "card.h"
#include <iostream>
using namespace std;
int main() {
    Card ace;
    Card king_card(13, kHeart);
    ace.Print();
    cout << ace << endl;
    cout << king_card << endl;

}
