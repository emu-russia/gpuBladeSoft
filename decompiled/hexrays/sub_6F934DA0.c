char *__cdecl sub_6F934DA0(int a1, __int16 a2, void *a3, int a4, int a5, signed int a6)
{
  char *v6; // esi@1
  int v7; // ebx@1
  char *result; // eax@1
  signed int v9; // edx@2
  int v10; // eax@7
  int v11; // edi@7
  __int16 v12; // ax@7
  __int16 v13; // ax@9
  __int16 v14; // ax@12
  char *v15; // esi@16
  const void *v16; // [sp+24h] [bp-28h]@1

  v16 = (const void *)a4;
  v6 = (char *)a3;
  v7 = a5 - a6;
  result = (char *)(*(_DWORD *)(a1 + 12) & 0xB0);
  if ( result != (char *)32 )
  {
    v9 = a6;
    if ( result == (char *)16 )
    {
      v10 = sub_6F95DC70(a1 + 108);
      v11 = v10;
      v12 = (*(int (__thiscall **)(int, signed int))(*(_DWORD *)v10 + 40))(v10, 45);
      if ( *(_WORD *)a4 == v12
        || (v12 = (*(int (__thiscall **)(int, signed int))(*(_DWORD *)v11 + 40))(v11, 43), *(_WORD *)a4 == v12) )
      {
        *(_WORD *)a3 = v12;
        v9 = a6 - 1;
        v6 = (char *)a3 + 2;
        v16 = (const void *)(a4 + 2);
      }
      else
      {
        v13 = (*(int (__thiscall **)(int, signed int))(*(_DWORD *)v11 + 40))(v11, 48);
        v9 = a6;
        if ( *(_WORD *)a4 == v13 && a6 > 1 )
        {
          if ( *(_WORD *)(a4 + 2) != (unsigned __int16)(*(int (__fastcall **)(int, signed int, signed int))(*(_DWORD *)v11 + 40))(
                                                         v11,
                                                         a6,
                                                         120) )
          {
            v14 = (*(int (__thiscall **)(int, signed int))(*(_DWORD *)v11 + 40))(v11, 88);
            v9 = a6;
            if ( *(_WORD *)(a4 + 2) != v14 )
            {
              result = (char *)a3 + 2 * v7;
              if ( a5 == a6 )
                return (char *)memcpy(result, v16, 2 * v9);
              do
              {
LABEL_4:
                *(_WORD *)v6 = a2;
                v6 += 2;
                --v7;
              }
              while ( v7 );
LABEL_5:
              if ( !v9 )
                return result;
              return (char *)memcpy(result, v16, 2 * v9);
            }
          }
          v6 = (char *)a3 + 4;
          v9 = a6 - 2;
          *((_WORD *)v6 - 2) = *(_WORD *)a4;
          v16 = (const void *)(a4 + 4);
          *((_WORD *)v6 - 1) = *(_WORD *)(a4 + 2);
        }
      }
    }
    result = &v6[2 * v7];
    if ( a5 == a6 )
      goto LABEL_5;
    goto LABEL_4;
  }
  if ( a6 )
  {
    result = (char *)memcpy(a3, (const void *)a4, 2 * a6);
    v15 = (char *)a3 + 2 * a6;
    if ( a5 == a6 )
      return result;
  }
  else
  {
    v15 = (char *)a3 + 2 * a6;
    if ( !a5 )
      return result;
  }
  do
  {
    *(_WORD *)v15 = a2;
    v15 += 2;
    --v7;
  }
  while ( v7 );
  return result;
}
