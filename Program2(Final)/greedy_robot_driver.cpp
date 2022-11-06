/* Samneet Singh
 * CSS342
 * Problem 2: “The Greedy Robot” or “Lost in the Supermarket”
 * Driver file for greedy robot
 */

#include "greedy_robot.h"

int main(int argc, char* argv[])
{
    GreedyRobot r1(stoi(argv[1]), stoi(argv[2]), stoi(argv[3]), stoi(argv[4]), stoi(argv[5]));
    r1.FindTreasure();
}
