_DWORD *__stdcall sub_6F8FA820(int a1, int a2, char a3, int a4, char a5, int a6)
{
  _DWORD *result; // eax@2

  if ( a3 )
    result = sub_6F8FB3C0((_DWORD *)a1, a2, a4, a5, (unsigned int *)a6);
  else
    result = sub_6F8FAB80((_DWORD *)a1, a2, a4, a5, (unsigned int *)a6);
  return result;
}
