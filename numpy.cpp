#include "numpy.hpp"

template <typename T>
ostream& operator<<(ostream& out, const Numpy<T> np)
{
    if (!np.arr1.empty()) 
    {
        for (const auto& val : np.arr1) 
        {
            out << val << " ";
        }
        out << endl;
    }

    if (!np.arr2.empty())
    {
        out << "[" << endl;
        for (size_t i = 0; i < np.arr2.size(); i++) 
        {
            out << '\t' << "[" ;
            for (size_t j = 0; j < np.arr2[i].size(); j++) 
            {
                out << np.arr2[i][j] << "     ";
            }
            out << "]" << endl;
        }
            out << "]" << endl;
    }

    return (out);
}
