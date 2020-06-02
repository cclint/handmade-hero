#include <windows.h>

void foo(void)
{
    char *Foo = "This is the first thing we have actually printed.\n";
    OutputDebugStringA("This is the first thing we have actually printed.\n");

}

int CALLBACK WinMain(
        HINSTANCE hInstance,
        HINSTANCE hPrevInstance,
        LPSTR lpCmdLine,
        int nCmdShow)
{
    foo();
}
