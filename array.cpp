#include<iostream>
#include<array>
using namespace std;

int main(){
    array<int,4> a={1,2,3,4};
    
    int size=a.size();
    cout << "Size of array is: " << size << endl;
    
    cout << "Element at 2nd index is: " << a.at(2) << endl;
    
    cout << "First element is: " << a.front() << endl;
    
    cout << "Last element is: " << a.back() << endl;
    
    
}

OUTPUT:
Size of array is: 4
Element at 2nd index is: 3
First element is: 1
Last element is: 4
