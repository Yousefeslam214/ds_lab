#include <iostream>
using namespace std;
/*Pointer EX*/

int main()
{
    int Count = 10, X;
    int *ptrCount;
    ptrCount = &Count;
    X = *ptrCount;
    cout << "The value of count= " << Count << "\nThe value of X = " << X;
    return 0;
}
