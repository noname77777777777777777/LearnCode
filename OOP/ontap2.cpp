#include"iostream"
using namespace std;
typedef struct CalculatorDate{
    int date;
    int month;
    int year;
}Date;
void Enterdate(Date a){
        cout<<"\nEnter Date : ";
        cin>>a.date;
        cout<<"\nEnter Month : ";
        cin>>a.month;
        cout<<"\nEnter Year : ";
        cin>>a.year;
    if(a.date>=1&&a.date<=31){
        cout<<"\n Today : "<<a.date<<"/"<<a.month<<"/"<<a.year;
        if((a.year%4==0&&a.date%100!=0)||a.year%400==0){
            if(a.month==2){
                if(a.date<=28&&a.date>=1){
                    a.date++;
                }else if(a.date==29){
                    a.month++;
                    a.date=1;
                }else{
                    cout<<"\n You entered false date"<<endl;
                    exit(0);
                }
            }else if(a.month == 4||a.month == 9||a.month==6||a.month==11){
                if(a.date>=1&&a.date<=29){
                    a.date++;
                }else if(a.date==30){
                    a.month++;
                    a.date=1;
                }else{
                    cout<<"\n You entered false date"<<endl;
                    exit(0);
                }
            }
            else if(a.month==3||a.month==1||a.month==5||a.month==7||a.month==8||a.month==10||a.month==12){
                if(a.date>=1&&a.date<=30){
                    a.date++;
                }else if(a.date==31){
                    if(a.month==12){
                        a.year++;
                    }else{
                        a.month++;
                        a.date=1;
                    }
                }else{
                    cout<<"\n You entered false date "<<endl;
                    exit(0);
                }
            }
        }else{
            if(a.month==2){
                if(a.date<=27&&a.date>=1){
                    a.date++;
                }else if(a.date==28){
                    a.month++;
                    a.date=1;
                }else{
                    cout<<"\n You entered false date"<<endl;
                    exit(0);
                }
            }else if(a.month == 4||a.month == 9||a.month==6||a.month==11){
                if(a.date>=1&&a.date<=29){
                    a.date++;
                }else if(a.date==30){
                    a.month++;
                    a.date=1;
                }else{
                    cout<<"\n You entered false date"<<endl;
                    exit(0);
                }
            }
            else if(a.month==3||a.month==1||a.month==5||a.month==7||a.month==8||a.month==10||a.month==12){
                if(a.date>=1&&a.date<=30){
                    a.date++;
                }else if(a.date==31){
                    if(a.month==12){
                        a.year++;
                    }else{
                        a.month++;
                        a.date=1;
                    }
                }else{
                    cout<<"\n You entered false date "<<endl;
                    exit(0);
                }
            }
        }
        cout<<"\n Tomorrow : "<<a.date<<"/"<<a.month<<"/"<<a.year;
    }else{
        cout<<"Date no have in calendar";
        exit(0);
    }
}   
int main(){
    Date a;
    Enterdate(a);  
}
