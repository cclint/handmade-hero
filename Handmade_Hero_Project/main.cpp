#include <windows.h>

LRESULT CALLBACK MainWindowCallback(
   HWND   Window,
   UINT   Message,
   WPARAM WParam,
   LPARAM LParam
)
{
    switch(Message)
    {
    case WM_SIZE:
        {

        } break;

    case WM_DESTROY:
        {

        } break;
    case WM_CLOSE:
        {

        } break;
    case WM_ACTIVATEAPP:
        {

        } break;

     default:
        {

        }break;

    }


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
