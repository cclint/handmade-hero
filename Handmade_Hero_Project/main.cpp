#include <windows.h>

LRESULT CALLBACK MainWindowCallback(
   HWND   Window,
   UINT   Message,
   WPARAM WParam,
   LPARAM LParam
)

{
    LRESULT Result = 0;

    switch(Message)
    {
        case WM_SIZE:
            {
                OutputDebugStringA("WM_SIZE\n");
            } break;

        case WM_DESTROY:
            {
                OutputDebugStringA("WM_DESTROY\n");
            } break;
        case WM_CLOSE:
            {
                OutputDebugStringA("WM_CLOSE\n");
            } break;
        case WM_ACTIVATEAPP:
            {
                OutputDebugStringA("WM_ACTIVATEAPP\n");
            } break;

         default:
            {
        //        OutputDebugStringA("default\n");
                Result = DefWindowProc(Window, Message, WParam, LParam) ;
            }break;

    }

        return(Result);
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

    if(RegisterClass(&WindowClass)
    {
          HWND WindowHandle =
          CreateWindowEx(
            0,
            WindowClass.lpszClassName,
            "Handmade Hero",
            WS_OVERLAPPEDWINDOW|WS_VISIBLE,
            CS_USEDEFAULT,
            CS_USEDEFAULT,
            CS_USEDEFAULT,
            CS_USEDEFAULT,
            0,
            0,
            Instance,
            0);

            if(WindowHandle)
            {

            }
            else
            {
            }
    }
    else
    {
        // TODO: Logging
    }
    return(0);
}
