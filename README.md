#win32-high-res-timer

A high-resolution Win32 timer

For details on how this is done, see [Acquiring high-resolution time stamps](https://msdn.microsoft.com/en-us/library/windows/desktop/dn553408%28v=vs.85%29.aspx).

## Usage

```
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
```