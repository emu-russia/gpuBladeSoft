_DWORD *__stdcall sub_6F8D5710(int a1, int a2, char a3, int a4, char a5, int a6)
{
  _DWORD *result; // eax@2

  if ( a3 )
    result = sub_6F8D64B0((_DWORD *)a1, a2, a4, a5, a6);
  else
    result = sub_6F8D5A30((_DWORD *)a1, a2, a4, a5, a6);
  return result;
}
