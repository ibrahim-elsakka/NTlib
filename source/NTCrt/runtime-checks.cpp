#include "runtime-checks.h"

#if defined (_M_IX86)

void   __cdecl _RTC_CheckEsp()
{
    //TODO: isn't implemented yet
}

#endif

void __fastcall _RTC_CheckStackVars(void *_Esp, _RTC_framedesc *_Fd)
{

}

void __fastcall _RTC_CheckStackVars2(void *_Esp, _RTC_framedesc *_Fd, _RTC_ALLOCA_NODE *_AllocaList)
{

}

void __cdecl _RTC_Shutdown(void)
{

}

void __cdecl _RTC_InitBase(void)
{

}