//Bird class not fully flushed out but used to show templatized vector and friend key word
#ifndef BIRD_H_
#define BIRD_H_
#include <string>
using namespace std;
class Bird
{
//not a good use of friend just an example
friend bool IsBirdSmall(const Bird&);

public:
    Bird();
    Bird(string name);
    string name() const;
    float weight() const;
    float wingspan() const;

private:
    string name_;
    float weight_;
    float wingspan_;
};
#endif

