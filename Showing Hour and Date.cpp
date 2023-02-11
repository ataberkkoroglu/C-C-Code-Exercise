#include<iostream>
#include<time.h>
using namespace std;
int main(void){
	time_t Time;
	Time=time('\0');
	struct tm *Tm=localtime(&Time);
	cout<<endl<<"Localtime: "<<strftime()
	cout<<"Welcome To Hour Program..."<<endl<<"Hour: "<<Tm->tm_hour<<" : "<<Tm->tm_min<<" : "<<Tm->tm_sec;
	cout<<endl<<"Date: "<<Tm->tm_mday<<" / "<<Tm->tm_mon+1<<" / "<<Tm->tm_year+1900;
	printf("\nToday is %d.Day Of This Year",Tm->tm_yday);
}
