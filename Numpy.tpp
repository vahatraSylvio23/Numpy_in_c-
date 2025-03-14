#ifndef NUMPY_TPP
#define NUMPY_TPP

template <typename T>
Numpy<T>::Numpy()
{
    arr1.resize(0);
    arr2.resize(0, vector<T>(0));
}

template <typename T>
void Numpy<T>::array(initializer_list < T > list)
{
    int i = 0;
    for(auto index : list)
    {
        arr1.push_back(index);
        i++;
    }
}

template < typename T >
void Numpy<T>::array(initializer_list < initializer_list < T > > list)
{
    int i = 0;
/*     for(initializer_list<T> l : list)
    {    
        for(auto index : l)
        {
            arr2[i].push_back(index);
            cout << "test" << endl;
        }
        i++;
    } */
   vector < vector < T > > arr(list)


}



template < typename T >
void Numpy<T>::display()
{
    int i = 0;
    for(i = 0 ; i < arr1.size() ; i++)
    {
        cout << arr1[i] << "   ";
    }
    cout << endl;
}

#endif