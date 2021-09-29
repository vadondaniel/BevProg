#include "std_lib_facilities.h"

int main()
{
    cout << "-Enter the name of the person you want to write to: ";
    string first_name;
    cin >> first_name;
    cout << " Dear " << first_name << ",\n";
    cout << "How are you? I am fine. I miss you. It's been a long time huh?\n";
    cout << "-What's the name of another friend of yours? ";
    string friend_name;
    cin >> friend_name;
    cout << "Have you seen " << friend_name << " lately?\n";
    char friend_sex = 0;
    cout << "-Is " << friend_name << " male(m) or female(f)? ";
    cin >> friend_sex;
    if (friend_sex == 'f')
    {
        cout << "If you see " << friend_name << " please ask her to call me.\n";
    }
        if (friend_sex == 'm')
    {
        cout << "If you see " << friend_name << " please ask him to call me.\n";
    }
    cout << "-How old are you? ";
    int age;
    cin >> age;
    if (age == 0 || age > 110)
    {
        simple_error("you're kidding!");
    }
    cout << "I hear you just had a birthday and you are " << age << " years old.";
    if (age < 12)
    {
        cout << " Next year you will be " << age+1 << ".";
    }
    if (age == 17)
    {
        cout << " Next year you will be able to vote.";
    }
    if (age > 70)
    {
        cout << " I hope you are enjoying retirement.";
    }
    cout << "\nYours sincerely\n\n\n  Dani";
}