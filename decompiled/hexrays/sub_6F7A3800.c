signed int __cdecl sub_6F7A3800(int a1, unsigned int a2, _BYTE *a3, unsigned int a4)
{
  signed int result; // eax@1
  int v5; // edi@4
  char *v6; // esi@5
  int v7; // eax@5
  unsigned int v8; // eax@13

  result = 35;
  if ( a1 )
  {
    result = 16;
    if ( a2 < *(_WORD *)(a1 + 264) )
    {
      v5 = *(_DWORD *)(a1 + 536);
      result = 7;
      if ( v5 )
      {
        v6 = (char *)(*(int (__cdecl **)(_DWORD))(v5 + 16))(0);
        v7 = *(_DWORD *)(a1 + 468);
        if ( v7 == 0x10000 )
        {
          if ( a2 <= 0x101 )
            v6 = (char *)(*(int (__cdecl **)(unsigned int))(v5 + 16))(a2);
          goto LABEL_8;
        }
        if ( v7 == 0x20000 )
        {
          if ( !*(_BYTE *)(a1 + 612) && sub_6F7A3280(a1) || a2 >= *(_WORD *)(a1 + 616) )
            goto LABEL_8;
          v8 = *(_WORD *)(*(_DWORD *)(a1 + 620) + 2 * a2);
          if ( (unsigned __int16)v8 > 0x101u )
          {
            v6 = *(char **)(*(_DWORD *)(a1 + 624) + 4 * v8 - 1032);
LABEL_8:
            sub_6F773EF0(a3, v6, a4);
            return 0;
          }
        }
        else
        {
          if ( v7 != 163840 || !*(_BYTE *)(a1 + 612) && sub_6F7A3280(a1) || a2 >= *(_WORD *)(a1 + 616) )
            goto LABEL_8;
          v8 = a2 + *(_BYTE *)(*(_DWORD *)(a1 + 620) + a2);
        }
        v6 = (char *)(*(int (__cdecl **)(unsigned int))(v5 + 16))(v8);
        goto LABEL_8;
      }
    }
  }
  return result;
}
