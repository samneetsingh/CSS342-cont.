/* Samneet Singh
 * CSS342
 * Problem 2: “The Greedy Robot” or “Lost in the Supermarket”
 * greedy robot header file
 */

#ifndef PROBLEM2_GREEDY_ROBOT_H
#define PROBLEM2_GREEDY_ROBOT_H


#include <iostream>
#include <vector>

using namespace std;

class GreedyRobot
{
public:
    // create points for robot and treasure
    struct Point
    {
        int x;
        int y;
    }Robot, Treasure;

    //constructors
    GreedyRobot();
    GreedyRobot(int max, int robot_x, int robot_y, int treasure_x, int treasure_y);
    ~GreedyRobot();

    void FindTreasure() const;

    friend ostream& operator<<(ostream& out, const GreedyRobot& robot);

private:
    int max_;
    void findPath(const int& max, const int& robot_x, const int& robot_y, const int& treasure_x, const int& treasure_y, vector<string>& pathVector, const string& path) const;
    void printPath(const vector<string> pathVector) const;
};



#endif //PROBLEM2_GREEDY_ROBOT_H
