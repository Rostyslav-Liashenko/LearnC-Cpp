#include <iostream>

namespace firsNS {
    void foo() {
        std::cout << "Foo firstNS" << std::endl;
    }
}

namespace secondNS {
    void foo() {
        std::cout << "Foo secondNS" << std::endl; 
    }
}

namespace thirdNs {
    namespace secondNs {
        void foo() {
            std::cout << "Third secondNS" << std::endl;
        }
    }
}

int main(void) {
    secondNS::foo();
    firsNS::foo();
    thirdNs::secondNs::foo();
    return 0;
}