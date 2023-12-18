#include "iostream"
#define MAX 100
#define inputfile "4.txt"
#include "fstream"
#include "string.h"
#include "conio.h"
#include "Readfile_Recordfile.cpp"
using namespace std;
class SettingMenuUI
{
private:
public:
    void SettingMenu();
};

void Menu(){
    cout<<"\n===================================\n";
    cout<<"\n= Press 1 to  read file           =\n";
    cout<<"\n= Press 2 to record file          =\n";
    cout<<"\n= Press -1 to End Program         =\n";
    cout<<"\n===================================\n";
    return;
}
void SettingMenuUI::SettingMenu()
{
    A a;
    int number;
    do{
        Menu();
        cout<<"\n Press number to chose solution ";
        cin>>number;
        if(number == -1){
            break;
        }
        switch (number)
        {
        case 1:
            Readfile_Recordfile::Read_File(inputfile,a);
            break;
        case 2:
            Readfile_Recordfile::Record_File();
            break;
        default :
            cout<<"\n syntax is null";
            break;
        }
    }while(number<0);
}
