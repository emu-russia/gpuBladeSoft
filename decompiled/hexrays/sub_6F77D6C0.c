signed int __cdecl sub_6F77D6C0(int a1, int a2, _BYTE *a3, unsigned int a4)
{
  int v4; // edx@1
  signed int result; // eax@1
  int v6; // ecx@1
  unsigned int v7; // eax@2
  char *v8; // eax@4
  unsigned int v9; // eax@9

  v4 = *(_DWORD *)(a1 + 656);
  result = 11;
  v6 = *(_DWORD *)(v4 + 2956);
  if ( v6 )
  {
    v7 = *(_WORD *)(*(_DWORD *)(v4 + 1160) + 2 * a2);
    if ( v7 != 0xFFFF )
    {
      if ( v7 <= 0x186 )
      {
        v8 = (char *)(*(int (__cdecl **)(_DWORD))(v6 + 20))(*(_WORD *)(*(_DWORD *)(v4 + 1160) + 2 * a2));
        goto LABEL_5;
      }
      v9 = v7 - 391;
      if ( v9 < *(_DWORD *)(v4 + 1312) )
      {
        v8 = *(char **)(*(_DWORD *)(v4 + 1316) + 4 * v9);
LABEL_5:
        if ( v8 )
          sub_6F773EF0(a3, v8, a4);
        goto LABEL_7;
      }
    }
LABEL_7:
    result = 0;
  }
  return result;
}
