#include <iostream>
#include <string>
#include <array>

using namespace std;



int main(int argc, char const *argv[])
{
    array<int, 5> numbers;
    int counter;

    for (size_t i = 0; i < numbers.size(); i++)
    {
        cout<<"Geben Sie bitte eine Zahl: ";
        cin>>numbers[i];
    }
    
    cout<<"Your numbers are: ";
    cout<<"[ ";

    for (int x : numbers)
    {
        cout<<x<<' ';
    }
    cout<<"]"<<endl;
    

    return 0;   
}