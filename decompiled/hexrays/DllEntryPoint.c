BOOL __stdcall DllEntryPoint(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved)
{
  int v3; // edx@1

  dword_70372B50 = 0;
  v3 = fdwReason;
  if ( fdwReason == 1 )
  {
    sub_6F8A0710();
    v3 = 1;
  }
  return sub_6F681220((int)hinstDLL, v3, (int)lpReserved);
}
