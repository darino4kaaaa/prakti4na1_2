#include <iostream>
#include <windows.h>
#include<string>
using namespace std;
string name, name1;
int age;

int main()
{
    system("title dialog");
    system("color F1");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


    printf("Введіть ПІБ:\n");
    getline(cin, name);

    cout << "Де Ви навчаєтеся?" << endl;
    getline(cin, name1);

    cout << "Скільки Вам років?" << endl;
    cin >> age;
    cout << "\n**************************************\n";
    cout << name << "\t" << name1 << "\t" << age << endl;
    system("pause");
}