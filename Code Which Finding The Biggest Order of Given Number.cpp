
#include <iostream>
#include<time.h>
#include<Windows.h>
#include<conio.h>
#include<math.h>

using namespace std;

class Number {
private:
    int num, sayac;
    int num2; bool state;
public:
    Number(int num,bool state){
        this->num = num;
        this->state = state;
        num2 = num;
        sayac = 0;
        
    }
    int Rem() {
        while (1) {
            num2 /= 10;
            sayac++;
            if (num2 < 10 && num2 >= 0) {
                
                break;
            }
        }
        return sayac;
    }
    void Process() {
        if (state == true) {
            cout << endl << sayac + 1 << "\033[1;40m. order Of " << num << " : " << (int)(num / (pow(10, Rem())));
        }
        else {
            cout << endl << sayac + 1 << "\033[1;40m. order Of -" << num << " : " << (int)(num / (pow(10, Rem())));
        }
        
    }

       ~Number() {
        cout << endl << "\033[1;32mProcess Could Be Finished Successfully.\n";
    }
};

//int Number::num2 =5;
int main()
{    
    time_t Time;
    Time=time(NULL);
    struct tm *Tm=localtime(&Time);
    cout << endl << "\033[1;33mWelcome To Program...\n\033[1;32m"<<endl<< Tm->tm_hour<< " : "<<Tm->tm_min<<" : "<<Tm->tm_sec<<"  "<<Tm->tm_mday<<" . "<<Tm->tm_mon+1<<" . "<<Tm->tm_year+1900;
    
    while (1) {
        int num; char ch[5]; bool state=true;
        cout << endl << "\033[1;34mWrite a Number : \033[1;0m"; cin >> num; cin.ignore();
        if (num < 0) {
            num = abs(num);
            state = false;
        }
        Number *number=new Number(num,state);
        number->Process();
        number->~Number();
        while (1) {
            cout << endl << "\033[1;36mWould You Like To Contunie (Y/N) : "; cin.getline(ch, 5, 10); 
            if (*ch == 'Y' || *ch == 'y' || ch == "Yes") {
                Sleep(2000);
                break;
            }
            else if (*ch == 'N' || *ch == 'n' || ch == "No" || ch == "no") {
                printf("\n\033[1;35mHave a Good Days...\033[0m"); _exit(0);
                delete number;
            }
            else {
                cout << endl << "\033[1;31mWrong Character..." << endl << "Please Write Again...\a";
            }

        }
    }

    return 0;
    
}
