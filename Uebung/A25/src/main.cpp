#include <iostream>
#include <string>
#include <array>

using namespace std;



int main(int argc, char const *argv[])
{
    array<int, 5> numbers {2,6,5,0,8};
    int min {numbers[1]};
    int max {numbers[1]};
    int minPos{0};
    int maxPos{0};

for (size_t i = 0; i < numbers.size(); i++)
{
    if (min > numbers[i])
    { 
        min = numbers[i];
        minPos = i+1;
    }
    
    if (max < numbers[i])
    {
        max = numbers[i];
        maxPos = i+1;
    }


}
    cout<<"Minimum position is in position: "<<minPos<<endl;
    cout<<"Maximum position is in position: "<<maxPos<<endl;
    cout<<"\nMax number= "<<max<<endl;
    cout<<"Min number= "<<min<<endl;
    

    return 0;
}