#ifndef NUMPY_TPP
#define NUMPY_TPP

template <typename T>
Numpy<T>::Numpy()
{

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
    arr2.resize(list.size());

    // Redimensionnement correct
    for (size_t i = 0; i < list.size(); i++) {
        arr2[i].resize((*next(list.begin(), i)).size());  
    }

    // Insertion des valeurs
    int i = 0;
    for (auto& sublist : list)
    {    
        int j = 0;
        for (auto index : sublist) 
        {
            arr2[i][j] = index;  
            j++;
        }
        i++;
    }
}

/* template < typename T >
void Numpy<T>::array(initializer_list < initializer_list < T > > list)
{
    int i , j, k;

    arr2.resize(list.size());
    for(size_t k = 0 ; k < list.size() ; k++)
    {
        arr2[i].resize((*next(list.begin(), i)).size());  
    }    
    
    for (auto& sublist : list)
    {    
        j = 0;
        for (auto index : sublist) 
        {
            arr2[i][j] = index;
            j++;
        }
        i++;
    }
}  */

/* template < typename T >
void Numpy<T>::display(Numpy<T> np)
{
    int i = 0;
    for(i = 0 ; i < arr1.size() ; i++)
    {
        cout << arr1[i] << "   ";
    }
    cout << endl;
}
 */
template < typename T >
void Numpy<T>::display()
{
    if (!arr1.empty()) {
        for (const auto& val : arr1) {
            cout << val << " ";
        }
        cout << endl;
    }

    if (!arr2.empty())
    {
        cout << "[" << endl;
        for (size_t i = 0; i < arr2.size(); i++) 
        {
            cout << '\t' << "[" ;
            for (size_t j = 0; j < arr2[i].size(); j++) 
            {
                cout << arr2[i][j] << "     ";
            }
            cout << "]" << endl;
        }
            cout << "]" << endl;
    }
}

#endif