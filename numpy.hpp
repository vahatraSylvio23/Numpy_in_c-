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
        void array(initializer_list<T> list);
        void array(initializer_list<initializer_list<T>> list);
        void array(initializer_list<initializer_list<initializer_list<T>>> list);
        void display();

        
};

#include "Numpy.tpp"
#endif