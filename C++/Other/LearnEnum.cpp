#include <iostream>

class PC
{
public:
    enum PCState { OFF, ON, SLEEP }; 
    void SetState(PCState state) {this->state = state;}
    PCState GetState() { return state; }
private:
    PCState state;
};


int main(void)
{
    PC pc;
    pc.SetState(PC::PCState::ON);
    if (pc.GetState() == PC::PCState::ON)
    {
        std::cout << "PC is working..." << std::endl;
    }
    pc.SetState(PC::PCState::SLEEP);
    switch (pc.GetState())
    {
    case PC::PCState::OFF:
        std::cout << "PC is not working..." << std::endl;
        break;
    case PC::PCState::SLEEP:
        std::cout << "PC is sleeping..." << std::endl;
        break;
    case PC::PCState::ON:
        std::cout << "PC is working..." << std::endl;
        break;
    }
    return 0;
}