unsigned int __cdecl sub_6F7A63A0(int a1, const char *a2)
{
  unsigned int v2; // ebx@1
  int v3; // esi@1
  int v4; // ecx@5
  const char *v5; // edx@6
  int v6; // eax@6
  int v7; // ecx@6
  int v9; // eax@14
  const char *v10; // eax@15
  const char *v11; // eax@18
  int v12; // eax@22
  const char *v13; // ST1C_4@25
  signed int v14; // eax@25
  const char *v15; // ST1C_4@27
  signed int v16; // eax@27
  int v17; // [sp+18h] [bp-24h]@6

  v2 = 0;
  v3 = *(_DWORD *)(a1 + 16);
  if ( v3 > 0 )
  {
    do
    {
      if ( v2 >= *(_WORD *)(a1 + 264) )
        goto LABEL_3;
      v4 = *(_DWORD *)(a1 + 536);
      if ( !v4 )
        goto LABEL_3;
      v17 = *(_DWORD *)(a1 + 536);
      v5 = (const char *)(*(int (__cdecl **)(_DWORD))(v4 + 16))(0);
      v6 = *(_DWORD *)(a1 + 468);
      v7 = v17;
      if ( v6 == 0x10000 )
      {
        if ( v2 > 0x101 )
          goto LABEL_9;
        v11 = (const char *)(*(int (__fastcall **)(int, const char *))(v17 + 16))(v17, v5);
        if ( !strcmp(a2, v11) )
          return v2;
      }
      else
      {
        if ( v6 != 0x20000 )
        {
          if ( v6 != 163840 )
            goto LABEL_9;
          if ( !*(_BYTE *)(a1 + 612) )
          {
            v15 = v5;
            v16 = sub_6F7A3280(a1);
            v7 = v17;
            v5 = v15;
            if ( v16 )
              goto LABEL_9;
          }
          if ( v2 >= *(_WORD *)(a1 + 616) )
            goto LABEL_9;
          v9 = v2 + *(_BYTE *)(*(_DWORD *)(a1 + 620) + v2);
LABEL_15:
          v10 = (const char *)(*(int (__fastcall **)(int, const char *))(v7 + 16))(v7, v5);
          if ( !strcmp(a2, v10) )
            return v2;
          goto LABEL_3;
        }
        if ( !*(_BYTE *)(a1 + 612) && (v13 = v5, v14 = sub_6F7A3280(a1), v7 = v17, v5 = v13, v14)
          || v2 >= *(_WORD *)(a1 + 616) )
        {
LABEL_9:
          if ( !strcmp(a2, v5) )
            return v2;
          goto LABEL_3;
        }
        v12 = *(_WORD *)(*(_DWORD *)(a1 + 620) + 2 * v2);
        if ( (unsigned __int16)v12 <= 0x101u )
          goto LABEL_15;
        if ( !strcmp(a2, *(const char **)(*(_DWORD *)(a1 + 624) + 4 * v12 - 1032)) )
          return v2;
      }
LABEL_3:
      ++v2;
    }
    while ( v3 != v2 );
  }
  return 0;
}
