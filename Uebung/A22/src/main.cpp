#include <iostream>
#include <string>

using namespace std;

//Uebung from dental wings version 4

//prüfziffer EAN-Code
//beispiel: 40 12700 96310 9
//40 = Länderkennziffer (40 = Deutschland)
//12700 = Kennzeichen des Kerstellers
//96310 = Produktkennzeichen
//9 = Prüfziffer

//Summe 1 = Summe aus der 1, 3, 5, 7, 9, 11
//          4+1++7+0+6+1= 19
//summe 2 = summe aus der 2, 4, 6, 8, 10, 12
//          0+2+0+9+3+0= 14 * 3 = 42
//          Gesamtsumme= 61
//          Different zu 70 = 9     9 ist die Prüfziffer

int main(int argc, char const *argv[])
{
    string number_input{"NONE"};
    int summe1{0};
    int summe2{0};
    int gesamtSumme{0};
    int differentSumme{0};    
    int roundup{0};
    

    cout<<"Bitte nummer eingeben: ";
    cin>>number_input;

    for (size_t i = 0; i < number_input.length()-1; i++)
    {
        int ean_digit = int(number_input[i]) - 48; //ASCII value from 0 = 48

        if (i%2 == 0)
        {
            cout<<"Odd: "<<ean_digit<<"\t";
            summe1 += ean_digit;
        }else{
            cout<<"EVEN: "<<ean_digit<<endl;
            summe2 += ean_digit;
        }               
    }
    
    summe1 -= int(number_input[-1]);
    summe2 *= 3;
    gesamtSumme  = summe1 + summe2;
    
    if (gesamtSumme%10 != 0)
    {
        roundup = ((gesamtSumme/10)+1)*10;
    }else{
    roundup = gesamtSumme;}
    
    differentSumme = roundup - gesamtSumme;


    cout<<"last number= "<<int(number_input.back()-48)<<endl;
    cout<<"Summe1 = "<<summe1<<endl;
    cout<<"Summe2 = "<<summe2<<endl;
    cout<<"Gesamtsumme = "<<gesamtSumme<<endl;
    cout<<"Roundup = "<<roundup<<endl;
    cout<<"DifferentSumme = "<<differentSumme<<endl;
    
    
    if (differentSumme == int(number_input.back())-48)
    {
        cout<<"OK"<<endl;
    }else{
        cout<<"NOT OK!"<<endl;
    }
    
    
    


    return 0;
}