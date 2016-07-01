#pragma once

#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif

#include <windows.h>

class Timer
{
	public:
		Timer()
		{
			LARGE_INTEGER	largeFreq;
			QueryPerformanceFrequency(&largeFreq);
			freq = largeFreq.QuadPart;
		}

		__int64 GetCount()
		{
			LARGE_INTEGER	count;
			QueryPerformanceCounter(&count);
			return count.QuadPart;
		}

		// returns number of ms between 2 counts
		double CalcTimeDelta(__int64 count1, __int64 count2)
		{
			return ( ((double)count2/(double)freq - (double)count1/(double)freq) * 1000.0 );
		}

	private: 
		//num. counts per second
		__int64		freq;
};

