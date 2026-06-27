int sub_6F8B1B00()
{
  HMODULE v0; // eax@1
  HMODULE v1; // ebx@2
  int (*v2)(void); // eax@2

  v0 = GetModuleHandleW(L"msvcrt.dll");
  if ( v0 )
  {
    v1 = v0;
    v2 = (int (*)(void))GetProcAddress(v0, "___lc_codepage_func");
    if ( v2 )
    {
LABEL_3:
      off_6FB48AC8 = v2;
      return v2();
    }
    dword_70373540 = (int)GetProcAddress(v1, "__lc_codepage");
    if ( dword_70373540 )
    {
      v2 = (int (*)(void))sub_6F8B1AB0;
      goto LABEL_3;
    }
  }
  off_6FB48AC8 = (int (*)(void))sub_6F8B1AC0;
  return sub_6F8B1AC0();
}
