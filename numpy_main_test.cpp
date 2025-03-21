#include "numpy.hpp"

int main()
{
    Numpy<int> np;

    Numpy<int> np2;
    
    np.array({{1, 2, 3, 4}, {2, 4}, {3, 6, 9, 12, 15}});    
    np2 = np;
    cout << np2;
    return 0;
}