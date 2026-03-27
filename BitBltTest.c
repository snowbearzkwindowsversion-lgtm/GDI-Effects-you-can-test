#include <windows.h>

int main()
{
	HDC hdc = GetDC(NULL);
    int w = GetSystemMetrics(SM_CXSCREEN);
    int h = GetSystemMetrics(SM_CYSCREEN);

    float angle = 0.0f;

    while (1) 
	{
        int dx = (int)(cos(angle) * 3);
        int dy = (int)(sin(angle) * 3);

        BitBlt(hdc,
            dx, dy,
            w, h,
            hdc,
            0, 0,
            SRCCOPY
        );

        angle += 0.1f;
        Sleep(30);
    }

    ReleaseDC(NULL, hdc);
}
