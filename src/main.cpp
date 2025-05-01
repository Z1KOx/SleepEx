#include <windows.h>

EXTERN_C NTSTATUS NTAPI NtDelayExecution(
    IN BOOLEAN              Alertable,
    IN PLARGE_INTEGER       DelayInterval
);

int main()
{
    LARGE_INTEGER delay;
    ZeroMemory(&delay, sizeof(delay));
    delay.QuadPart = -50000000LL;

    // Sleep for 5 seconds
    NtDelayExecution(FALSE, &delay);
}