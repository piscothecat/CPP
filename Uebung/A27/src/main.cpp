#include <iostream>
#include <string>
#include <array>

using namespace std;

//Uebung bubble short

void displayArr(int *arr, int n){
    for (size_t i = 0; i < n; i++)
    {
        cout<<*(arr+i)<<"\t";
    }
    cout<<"\n==============================================="<<endl;    
}

int main(int argc, char const *argv[])
{
    int numbers [5]= {5, 2, 4, 1, 3};
    int length = 5; //length of the array
    displayArr(numbers,5); //displaying array before shorting

    

    for (size_t i = 0; i < length; i++)
    {
        for (size_t j = 0; j < length -1 ; j++)
        {
            if (numbers[j] > numbers[j+1])
            {
                int temp = numbers[j];
                numbers[j] = numbers[j+1];
                numbers[j+1] = temp; 
            }            
        }
    }
    
    
    //display after shorting
    cout<<"RESULT: \n";
    displayArr(numbers,length); 
}