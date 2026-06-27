int __cdecl sub_6F8A35C0(CHAR *a1, __int16 a2, UINT a3, int a4)
{
  int result; // eax@3
  __int16 v5; // [sp+2Ch] [bp-20h]@1
  int v6; // [sp+3Ch] [bp-10h]@5

  v5 = a2;
  if ( !a3 )
  {
    if ( (unsigned __int16)a2 <= 0xFFu )
    {
      *a1 = a2;
      return 1;
    }
LABEL_7:
    *errno() = 42;
    return -1;
  }
  v6 = 0;
  result = WideCharToMultiByte(a3, 0, (LPCWSTR)&v5, 1, a1, a4, 0, &v6);
  if ( !result || v6 )
    goto LABEL_7;
  return result;
}
