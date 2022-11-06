#include <iostream>
#include <string>

using namespace std;

void my_swap(string str1, string str2);

int main() {
    string name1 = "sue";
    string name2 = "ravi";
    cout << name1 << " " << name2 << endl;
    my_swap(name1, name2);
    cout << name1 << " " << name2 << endl;
}

void my_swap(string str1, string str2) {

    string placehold = new string();

    placehold = &str1;
    str1 = &str2;
    str2 = &placehold;

}