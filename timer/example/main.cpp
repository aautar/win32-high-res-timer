#include <iostream>
#include "../timer.h"

void main()
{
	Timer timer;

    __int64 t1 = timer.GetCount();

    Sleep(3000);

	double d = timer.CalcTimeDelta(t1, timer.GetCount());

    std::cout << "delta = " << d << "\n";

}