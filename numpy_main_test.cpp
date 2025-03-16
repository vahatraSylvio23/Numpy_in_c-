#include "numpy.hpp"

int main()
{
    Numpy<int> np;
    
    np.array( { {1, 2, 3, 4}, {2, 4}, {3, 6, 9, 12, 15} } );    
    np.display();

    return 0;
}