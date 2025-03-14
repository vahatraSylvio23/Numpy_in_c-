#include "numpy.hpp"

int main()
{
    Numpy<int> np;
    np.array({1, 2, 3});
    
    np.display();

    np.array({{1, 2, 3}, {2, 4, 6}});
    
    np.display();

    return (0);
}