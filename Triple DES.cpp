#include <iostream>
#include <string>
using namespace std;
string round_keys[16];

string shift_left1(string key_chunk)
{
    string s="";
    for(int i = 1; i < 28; i++)
    {
        s+=key_chunk[i];
    }
    s+=key_chunk[0];
    return s;
}

string shift_left2(string key_chunk)
{
    string s="";
    for(int i=0;i<2;i++)
    {
        for(int j=1;j<28;j++)
        {
            s+=key_chunk[j];
        }
        s+=key_chunk[0];
        key_chunk=s;
        s="";
    }
    return key_chunk;
}

int main()
{
    string key="1010101010111011000010010001100000100111001101101100110011011101";
    return 0;
}
