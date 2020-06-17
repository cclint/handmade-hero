#include <windows.h>

LRESULT CALLBACK MainWindowCallback(
   HWND   Window,
   UINT   Message,
   WPARAM WParam,
   LPARAM LParam
)
{

}


int CALLBACK WinMain(
        HINSTANCE Instance,
        HINSTANCE PrevInstance,
        LPSTR CommandLine,
        int ShowCode)
{
    WNDCLASS WindowClass = {};
  // TODO(clint): Check if HREDRAW/VREDRAW/OWNDC still matter
  WindowClass.style = CS_OWNDC|CS_HREDRAW|CS_VREDRAW;
  WindowClass.lpfnWndProc = MainWindowCallback; // handles messages coming from windows
  WindowClass.hInstance = Instance;
 // WindowClass.hIcon;
  WindowClass.lpszClassName = "HandmadeHeroWindowClass ";

    return(0);
}
