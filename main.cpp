#include <iostream>
using namespace std;

void Noch_ulica_fonar_apteka();

int main()
{
    setlocale(LC_ALL, "Russian");
    cout<<"Hello World";
    Noch_ulica_fonar_apteka();
    return 0;
}

void Noch_ulica_fonar_apteka()
{
    cout<<"Ночь, улица, фонарь, аптека,"<<
    "\nБессмысленный и тусклый свет."<<
    "\nЖиви еще хоть четверть века —"<<
    "\nВсё будет так. Исхода нет."<<
    "\nУмрёшь — начнёшь опять сначала"<<
    "\nИ повторится всё, как встарь:"<<
    "\nНочь, ледяная рябь канала,"<<
    "\nАптека, улица, фонарь.\n";
}