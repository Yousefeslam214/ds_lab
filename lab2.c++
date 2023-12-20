#include <iostream>
using namespace std;

int main()
{
    /*ex1*/
    cout << "-------------ex1"<< endl;
    int Count = 0;
    int *ptrCount = &Count;
    cout << "The first value of count= " << Count << "\nThe first value of *ptrCount = " << *ptrCount << endl;
    *ptrCount = 1;
    cout << "The second value of count= " << Count << "\nThe  second value of *ptrCount = " << *ptrCount<< endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "-------------ex2"<< endl;
    int cou = 0;
    int &RefCou = cou;
    cout << "The first value of cou = " << cou << "\nThe  first value of RefCou = " << RefCou<< endl;
    RefCou = 1;
    cout << "The second value of cou = " << cou << "\nThe  second value of RefCou = " << RefCou<< endl;
    return 0;


}
