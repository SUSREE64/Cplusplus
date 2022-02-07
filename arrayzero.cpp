/* Given array pushing all the zeros to the end of the array*/

# include <iostream>
using namespace std;

int main (){
    
    int array[] = {1,3, 5, 6,0, 7, 0, 3};
    int size = sizeof(array)/ sizeof(int);
    cout<< "The size of the array: " << size << endl;
    int second[size] = {};
    int index = 0;
    for (int i = 0; i < size; i++){
        
       if (array[i] > 0)
       {
        second[index] = array[i];
        index = index+1;       
       }
        
    }
    for (int i = 0; i < size; i++){
        
       cout << second[i] << ",";
        
    }
    
    return 0;
}
