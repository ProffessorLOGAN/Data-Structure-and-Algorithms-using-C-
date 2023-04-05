#include <iostream>
using namespace std;

//this will not swapping a and b
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

//call by reference using pointers
void swapPointer(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapRefrenceVar(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a=4,b=5;
    cout<<"The value of a is "<< a<< "and the value of b is "<< b <<endl;
    //swap(a,b); //this will not swapping a and b
    // swapPointer(&a,&b);  //this will  swapping a and b using pointer reference
    swapRefrenceVar(a ,b);   //this will  swapping a and b using  reference variable
    cout<<"\n After Swapping values"<<endl;
    cout<<"The value of a is "<< a<< "and the value of b is "<< b <<endl;

    return 0;
}