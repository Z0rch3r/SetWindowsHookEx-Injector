#include <iostream>
#include <windows.h>
 
using namespace std;

int main(void){
		char Pdll[444];
		cout << "[-] DLL Path : ";
		cin >> Pdll;
		
		HMODULE libA = LoadLibraryExA(Pdll, 0, DONT_RESOLVE_DLL_REFERENCES);
		if(!libA){
				GetLastError();
				return -1;
		}
		
		FARPROC NIGGER = GetProcAddress(libA, "spotlessExport");
		if(NIGGER == NULL){
				cout << "nta m9awd.\n";
				GetLastError();
				return -2;
		}
		
		HHOOK setWhook = SetWindowsHookExA(2, (HOOKPROC)NIGGER, libA, 0);
		if(setWhook == NULL){
				GetLastError();
				return -3;
		}
		
		BOOL unHook = UnhookWindowsHookEx(setWhook);
		if(unHook == 0){
				GetLastError();
		}
}
