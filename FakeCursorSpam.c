#include <windows.h>

int main()
{
	srand((unsigned int)time(NULL));

	HDC hdcDesktop = GetDC(NULL);

	int screenWidth = GetSystemMetrics(SM_CXSCREEN);
	int screenHeight = GetSystemMetrics(SM_CYSCREEN);

	HCURSOR hCursor = LoadCursor(NULL, IDC_ARROW);

	while(1)
	{
		 int count = rand() % 5 + 1;
       	for (int i = 0; i < count; i++)
       	{
        int x = rand() % (screenWidth - 32);
        int y = rand() % (screenHeight - 32);
        DrawIcon(hdcDesktop, x, y, hCursor);
   		}
		Sleep(10);
	}
	ReleaseDC(NULL, hdcDesktop);
	return 0;
}
