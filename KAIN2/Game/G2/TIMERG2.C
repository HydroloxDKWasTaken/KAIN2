#include "Game/CORE.H"
#include "TIMERG2.H"

short G2Timer_GetFrameTime() // Matching - 100%
{
	short atime;

	if (gameTrackerX.timeMult == 0)
	{
		atime = 100;
	}
	else 
	{
        atime = (short)((gameTrackerX.timeMult * 100) >> 12);
	}
	
	if (atime <= 0)
	{
		atime = 1;
	}

	return atime;
}
