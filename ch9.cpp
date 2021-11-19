#include "std_lib_facilities.h"

struct Date{
    int y;
    int m;
    int d;
};

void add_day(Date& day, int n)
{
	day.d += n;
	if (day.d > 31)
	{
		day.m ++;
		day.d -= 31;
	}
	if (day.m > 12)
	{
		day.y ++;
		day.m -=12;  
	}
}

int main(){
    Date today;
    today.y = 1978;
    today.m = 6;
    today.d = 25;
    Date tomorrow = today;
    add_day(tomorrow, 1);

    cout << today.y << "." <<today.m << "." << today.d << endl;

    return 0;
}