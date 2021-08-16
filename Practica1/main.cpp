#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}

class finiteAutomaton
{
private:
    std::string Q[10];
    char E[100];
    std::string q;
    std::string F[10];
public:
    void move(/* args */);
    void acceptance(/* args */);
    finiteAutomaton(/* args */);
    ~finiteAutomaton();
};

finiteAutomaton::finiteAutomaton(/* args */)
{
}


void finiteAutomaton::move(/* args */)
{
}

void finiteAutomaton::acceptance(/* args */)
{
}

finiteAutomaton::~finiteAutomaton()
{
}

class NFA: public finiteAutomaton
{
private:
    /* data */
public:
    void transitionFunction(/* args */);
    NFA(/* args */);
    ~NFA();
};

NFA::NFA(/* args */)
{
}

NFA::~NFA()
{
}
void NFA::transitionFunction(/* args */)
{
}

class DFA: public finiteAutomaton
{
private:
    
    /* data */
public:

    void transitionFunction(/* args */);
    DFA(/* args */);
    ~DFA();
};

DFA::DFA(/* args */)
{
}

void DFA::transitionFunction(/* args */)
{
}
DFA::~DFA()
{
}

