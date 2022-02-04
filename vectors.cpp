#include <iostream>
#include <vector>
//*****************************************************************
// In C++, vectors are used to store elements of similar data types.
// However, unlike arrays, the size of a vector can grow dynamically.
// That is, we can change the size of the vector during the
// of a program as per our requirements.
//  Vectors are part of the C++ Standard Template Library.To use vectors,
//  we need to include the vector header file in our program.
//  *****************************************************************
#include <iostream>
#include <vector>

using namespace std;

int main()
{

    //Declaration of vector
    vector<int> arr; // Only takes integers Ha Ha!!
    // initialization of vector
    arr = {1, 2, 3, 4, 5, 20};
    int s = arr.size(); // length of vector
    // iterating through the vector to print elements
    for (int i = 0; i < s; i++)
    {
        cout << "Element at " << i << " Index: " << arr.at(i) << endl;
    }
    // adding an element
    arr.push_back(200);
    cout << "The last element: " << arr.at(arr.size() - 1) << endl; // Last element of vector
    // removing the last element
    arr.pop_back();
    //Another way to loop
    for (int i : arr)
    {
        cout << i << " ";
    }
    // Vector functions :
    cout << "Vectory size: " << arr.size() << endl;
    cout << "First Element : " << arr.front() << endl;
    cout << "Last Element : " << arr.back() << endl;
    cout << "Is the vector empty : " << arr.empty() << endl;  // If empty returns 1 or 0
    cout << "Overall size of the vector: " << arr.capacity(); // Memsize in bytes.

    return 0;
}
