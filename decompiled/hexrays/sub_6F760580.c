unsigned int __cdecl sub_6F760580(int a1, char *a2, unsigned int a3)
{
  unsigned int result; // eax@1
  int *v4; // ebp@2
  int v5; // edi@3
  int v6; // edx@3
  unsigned int v7; // ecx@3
  unsigned int v8; // eax@4
  bool v9; // zf@4
  int v10; // edx@4
  unsigned __int8 v11; // cf@7
  int *v12; // eax@7
  unsigned int v13; // edx@7
  int v14; // ebp@8
  int v15; // edi@8
  unsigned int v16; // ebp@8
  unsigned int v17; // ecx@9
  bool v18; // zf@9
  int v19; // edi@9
  char *v20; // edx@17
  unsigned int v21; // ecx@22
  int v22; // edx@22
  char *v23; // ebx@22
  unsigned int v24; // esi@23
  unsigned int v25; // ebp@23
  int v26; // esi@23
  int v27; // [sp+3Ch] [bp-C0h]@1
  int v28; // [sp+40h] [bp-BCh]@2
  int v29; // [sp+5Ch] [bp-A0h]@21
  int v30; // [sp+60h] [bp-9Ch]@2

  time((time_t *)&v27);
  result = (unsigned int)localtime((const time_t *)&v27);
  if ( !result )
    goto LABEL_44;
  v4 = &v30;
  sub_6F8B7440(
    (int)&v30,
    127,
    "%i-%.2i-%.2i_%.2i-%.2i-%.2i",
    *(_DWORD *)(result + 20) + 1900,
    *(_DWORD *)(result + 16) + 1,
    *(_DWORD *)(result + 12),
    *(_DWORD *)(result + 8),
    *(_DWORD *)(result + 4),
    *(_DWORD *)result);
  sub_6F8B7440((int)&v28, 31, "%09ld", *(_DWORD *)(a1 + 4));
  do
  {
    v5 = *v4;
    ++v4;
    v6 = ~v5 & (v5 - 16843009);
    v7 = v6 & 0x80808080;
  }
  while ( !(v6 & 0x80808080) );
  v8 = v7 >> 16;
  v9 = (unsigned __int16)(v6 & 0x8080) == 0;
  v10 = (int)v4 + 2;
  if ( !v9 )
  {
    LOBYTE(v8) = v7;
    if ( !v9 )
      v10 = (int)v4;
  }
  v11 = __CFADD__((_BYTE)v8, (_BYTE)v8);
  v12 = &v28;
  v13 = v10 - (v11 + 3) - (_DWORD)&v30;
  do
  {
    v14 = *v12;
    ++v12;
    v15 = ~v14 & (v14 - 16843009);
    v16 = v15 & 0x80808080;
  }
  while ( !(v15 & 0x80808080) );
  v17 = v16 >> 16;
  v18 = (unsigned __int16)(v15 & 0x8080) == 0;
  v19 = (int)v12 + 2;
  if ( !v18 )
  {
    LOBYTE(v17) = v16;
    if ( !v18 )
      v19 = (int)v12;
  }
  result = v19 - (__CFADD__((_BYTE)v17, (_BYTE)v17) + 3) - (_DWORD)&v28;
  if ( v13 + result + 1 < a3 )
  {
    if ( v13 >= 4 )
    {
      *(_DWORD *)a2 = v30;
      *(_DWORD *)&a2[v13 - 4] = *(int *)((char *)&v29 + v13);
      qmemcpy(
        (void *)((unsigned int)(a2 + 4) & 0xFFFFFFFC),
        (const void *)((char *)&v30 - &a2[-((unsigned int)(a2 + 4) & 0xFFFFFFFC)]),
        4 * ((unsigned int)(&a2[v13] - ((unsigned int)(a2 + 4) & 0xFFFFFFFC)) >> 2));
    }
    else if ( v13 )
    {
      *a2 = v30;
      if ( v13 & 2 )
        *(_WORD *)&a2[v13 - 2] = *(_WORD *)((char *)&v30 + v13 - 2);
    }
    ++result;
    a2[v13] = 45;
    v20 = &a2[v13 + 1];
    if ( result >= 4 )
    {
      v21 = (unsigned int)(v20 + 4) & 0xFFFFFFFC;
      *(_DWORD *)v20 = v28;
      *(_DWORD *)&v20[result - 4] = *(int *)((char *)&v27 + result);
      v22 = (int)&v20[-v21];
      v23 = (char *)&v28 - v22;
      result = (v22 + result) & 0xFFFFFFFC;
      if ( result >= 4 )
      {
        v24 = result - 1;
        v25 = result;
        result = 4;
        v26 = (v24 >> 2) & 7;
        *(_DWORD *)v21 = *(_DWORD *)v23;
        if ( v25 > 4 )
        {
          if ( !v26 )
            goto LABEL_45;
          if ( v26 != 1 )
          {
            if ( v26 != 2 )
            {
              if ( v26 != 3 )
              {
                if ( v26 != 4 )
                {
                  if ( v26 != 5 )
                  {
                    if ( v26 != 6 )
                    {
                      result = 8;
                      *(_DWORD *)(v21 + 4) = *((_DWORD *)v23 + 1);
                    }
                    *(_DWORD *)(v21 + result) = *(_DWORD *)&v23[result];
                    result += 4;
                  }
                  *(_DWORD *)(v21 + result) = *(_DWORD *)&v23[result];
                  result += 4;
                }
                *(_DWORD *)(v21 + result) = *(_DWORD *)&v23[result];
                result += 4;
              }
              *(_DWORD *)(v21 + result) = *(_DWORD *)&v23[result];
              result += 4;
            }
            *(_DWORD *)(v21 + result) = *(_DWORD *)&v23[result];
            result += 4;
          }
          *(_DWORD *)(v21 + result) = *(_DWORD *)&v23[result];
          result += 4;
          if ( result < v25 )
          {
LABEL_45:
            do
            {
              *(_DWORD *)(v21 + result) = *(_DWORD *)&v23[result];
              *(_DWORD *)(v21 + result + 4) = *(_DWORD *)&v23[result + 4];
              *(_DWORD *)(v21 + result + 8) = *(_DWORD *)&v23[result + 8];
              *(_DWORD *)(v21 + result + 12) = *(_DWORD *)&v23[result + 12];
              *(_DWORD *)(v21 + result + 16) = *(_DWORD *)&v23[result + 16];
              *(_DWORD *)(v21 + result + 20) = *(_DWORD *)&v23[result + 20];
              *(_DWORD *)(v21 + result + 24) = *(_DWORD *)&v23[result + 24];
              *(_DWORD *)(v21 + result + 28) = *(_DWORD *)&v23[result + 28];
              result += 32;
            }
            while ( result < v25 );
          }
        }
      }
    }
    else if ( result )
    {
      *v20 = v28;
      if ( result & 2 )
        *(_WORD *)&v20[result - 2] = *(_WORD *)((char *)&v28 + result - 2);
    }
  }
  else
  {
LABEL_44:
    *a2 = 0;
  }
  return result;
}
