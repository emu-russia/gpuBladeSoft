signed int __cdecl sub_6F8A2810(WCHAR *a1, const CHAR *a2, unsigned int a3, int *a4, UINT a5, unsigned int a6)
{
  int v6; // edx@3
  BYTE v7; // al@3
  const CHAR *v9; // [sp+8h] [bp-34h]@8
  WCHAR *v10; // [sp+10h] [bp-2Ch]@8
  int v11; // [sp+2Ch] [bp-10h]@3

  if ( !a2 )
    return 0;
  if ( !a3 )
    return -2;
  v6 = *a4;
  v7 = *a2;
  *a4 = 0;
  v11 = v6;
  if ( !v7 )
  {
    *a1 = 0;
    return 0;
  }
  if ( a6 <= 1 )
    goto LABEL_24;
  if ( (_BYTE)v6 )
  {
    BYTE1(v11) = v7;
    v10 = a1;
    v9 = (const CHAR *)&v11;
LABEL_9:
    if ( MultiByteToWideChar(a5, 8u, v9, 2, v10, 1) )
      return 2;
LABEL_20:
    *errno() = 42;
    return -1;
  }
  if ( !IsDBCSLeadByteEx(a5, v7) )
  {
LABEL_24:
    if ( !a5 )
    {
      *a1 = *a2;
      return 1;
    }
    if ( MultiByteToWideChar(a5, 8u, a2, 1, a1, 1) )
      return 1;
    goto LABEL_20;
  }
  if ( a3 > 1 )
  {
    v10 = a1;
    v9 = a2;
    goto LABEL_9;
  }
  *(_BYTE *)a4 = *a2;
  return -2;
}
