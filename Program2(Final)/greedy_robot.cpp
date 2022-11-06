/* Samneet Singh
 * CSS342
 * Problem 2: “The Greedy Robot” or “Lost in the Supermarket”
 * greedy robot class file
 */

#include "greedy_robot.h"
GreedyRobot::GreedyRobot()
{
    Robot.x = 0;
    Robot.y = 0;
    Treasure.x = 0;
    Treasure.y = 0;
}

GreedyRobot::GreedyRobot(int max, int robot_x, int robot_y, int treasure_x, int treasure_y)
{
    this->Robot.x = robot_x;
    this->Robot.y = robot_y;
    this->Treasure.x = treasure_x;
    this->Treasure.y = treasure_y;
    this->max_ = max;
}

GreedyRobot::~GreedyRobot()
{
}

void GreedyRobot::FindTreasure() const
{
    vector<string> path_vector_;
    string path_ = "";

    findPath(max_,Robot.x, Robot.y, Treasure.x, Treasure.y,  path_vector_, path_);
    printPath(path_vector_);
}

void GreedyRobot::findPath(const int& max, const int& robot_x, const int& robot_y, const int& treasure_x, const int& treasure_y, vector<string>& pathVector, const string& path) const
{
    //Base case
    if (robot_x == treasure_x && robot_y == treasure_y)
    {
        int count = 0;

        for (int j = 0; j < path.length(); j++)
        {
            if (path[j] == path[j + 1])
            {
                count++;
                if (count >= max_)
                {
                    break;
                }
            }
            else if (path[j] != path[j + 1])
            {
                count = 0;
            }
        }
        if (count < max_)
            pathVector.push_back(path);

    }

    //Robot goes North
    if (robot_y < treasure_y)
    {
        findPath(max, robot_x, robot_y + 1, treasure_x, treasure_y,  pathVector, path + "N");
    }

    //Robot goes South
    if (robot_y > treasure_y)
    {
        findPath(max, robot_x, robot_y - 1, treasure_x, treasure_y, pathVector, path + "S");
    }

    //Robot goes East
    if (robot_x < treasure_x)
    {
        findPath(max, robot_x + 1, robot_y, treasure_x, treasure_y, pathVector, path + "E");
    }

    //Robot goes West
    if (robot_x > treasure_x)
    {
        findPath(max,  robot_x - 1, robot_y, treasure_x, treasure_y, pathVector, path + "W");
    }
}

void GreedyRobot::printPath(const vector<string> pathVector_) const
{
    if (pathVector_[0] == "")
    {
        cout << "Number of possible path: 0" << endl;
        return;
    }

    for (int i = 0; i < pathVector_.size(); i++)
    {
        cout << pathVector_[i] << endl;
    }

    cout << "Number of possible path: " << pathVector_.size() << endl;
    cout << endl;
}

ostream& operator<<(ostream& out, const GreedyRobot& robot)
{
    return out;
}