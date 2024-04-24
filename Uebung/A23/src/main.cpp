#include <iostream>
#include <string>

using namespace std;

//SSH practice 2

int main(int argc, char const *argv[])
{
    string word {"Aku Seorang Kapiten"};
    char huruf {' '};
    int jumlahChar{0};
    char huruf_dicari = 'a';
    char huruf_pengganti = '*';

    //panjang character
    cout<<"Panjang huruf = "<<word.length()<<endl;
    
    //mencari karakter
    for (char x : word)
    {     
     if (x == ' ')
        {   
            jumlahChar +=1;
        }
    }

    for (size_t i = 0; i < word.length(); i++)
    {
        if (word[i] == huruf_dicari ||word[i] == toupper(huruf_dicari))
        {
            word[i] = huruf_pengganti;
        }
        
    }
    cout<<word<<endl;
    
    
    
    cout<<"Jumlah character SPASI ' ' adalah: "<<jumlahChar<<endl;

    return 0;
}