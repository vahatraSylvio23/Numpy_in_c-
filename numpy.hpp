#ifndef NUMPY_H
#define NUMPY_H

#include <iostream>
#include <vector>
#include <algorithm>
#include <initializer_list>

using namespace std;

template <typename T>
class Numpy
{
    private:
        vector<T> arr1;
        vector<vector<T>> arr2;
        vector<vector<vector<T>>> arr3;
        int list_size;
        using dim = struct dim
        {
            int idx;
            int dimension;
            dim *next;
        };

    public:
        Numpy();
        Numpy<T> array(initializer_list<T> list);
        Numpy<T> array(initializer_list<initializer_list<T>> list);
        Numpy<T> array(initializer_list<initializer_list<initializer_list<T>>> list);
        void display();
        friend ostream& operator<<(ostream& out, const Numpy<T>& np);
    };

#include "Numpy.tpp"
#endif