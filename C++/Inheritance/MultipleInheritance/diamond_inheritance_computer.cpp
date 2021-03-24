#include <iostream>

using std::cout;
using std::endl;
using std::string;

class Component
{
    string companyName;
public:
    Component(string companyName) {
        cout << "Constructor Detail " << endl;
        this->companyName = companyName;
    }
    
};

class GPU : public Component
{
public:
    GPU(string companyName) : Component(companyName)
    {
        cout << "Constructor GPU " << endl;
    }
};

class Memory : public Component
{
public:
    Memory(string companyName) : Component(companyName)
    {
        cout << "Constructor Memory" << endl;
    }
};

class GraphicCard : public GPU, public Memory
{
public:
    GraphicCard(string GPUCompanyName, string MemoryCompanyName) : GPU(GPUCompanyName), Memory(MemoryCompanyName)
    {
        cout << "Constructor GraphicCard" << endl;
    }
};

int main()
{
    GraphicCard gc("AMD","Sumsung");
    return 0;
}

