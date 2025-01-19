#include <iostream>
#include <string>
using namespace  std;

class Items {
public:
    float* prices = new float[5];

    ~Items() {               // Destructor
        delete(prices);      // By default, a destructor is invoked automatically. However, in the case of dynamic memory allocation (DMA), it is necessary to explicitly define a destructor to properly release the allocated memory and prevent memory leaks.
        
    }
};


