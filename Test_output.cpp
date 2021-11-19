#include "std_lib_facilities.h"
int oct(int n)
{
    int remainder, oct = 0, i = 1;
    
    while(n != 0)
    {
        remainder = n%8;
        n = n/8;
        oct = oct + (remainder*i);
        i = i*10;
    }
    return oct;
}

int main()
{
#pragma region alap
    int birth_year = 2002;
    char hex_birth_year[20];
    itoa(birth_year, hex_birth_year, 16);
    int age = 2021 - birth_year;
    cout << birth_year << "\t" << oct(birth_year) << "\t" << hex_birth_year << "\t" << age << endl;
#pragma endregion
    return 0;
}