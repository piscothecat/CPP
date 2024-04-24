#include <iostream>
#include <string>
#include <array>

using namespace std;

//Uebung pointers

void ausgabe(int *zf){
    cout<<"Using pointers to access array elements: "<<endl;
    for (size_t i = 0; i < 5; i++)
    {
        cout<<"Element "<<i<<": "<<*(zf+i)<<endl;
    }
}

int main(int argc, char const *argv[])
{
    int numbers[5]={40, 20, 30, 40, 50};

    

    ausgabe(numbers);
    return 0;
}