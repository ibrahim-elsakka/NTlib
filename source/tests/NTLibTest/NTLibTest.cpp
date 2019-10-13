#include <Windows.h>
#include <stdio.h>
#include <assert.h>
#include <NTLib.h>

#pragma comment(lib, "NTExp.lib") //TODO: this lib have to be part of NTLib.lib
#pragma comment(lib, "NTLib.lib")

void TestNtlPsRoutines()
{
    HANDLE process;
    printf("Running process routines tests\n");
    assert(NT_SUCCESS(NtlPsOpenProcess(&process, ::GetCurrentProcessId(), PROCESS_QUERY_LIMITED_INFORMATION)));
    assert(NT_ERROR(NtlPsOpenProcess(&process, 0, PROCESS_QUERY_LIMITED_INFORMATION)));
    printf("passed\n");
}

int wmain(int argc, wchar_t* argv[])
{
    TestNtlPsRoutines();
    return 0;
}
