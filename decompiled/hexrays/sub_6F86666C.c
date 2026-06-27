char *__cdecl sub_6F86666C(int a1, int a2, char **a3, int *a4)
{
  int v4; // edx@1
  int v5; // eax@1
  unsigned __int8 v6; // cl@1
  char *result; // eax@1
  int v8; // esi@2
  _BYTE *v9; // edx@3
  unsigned int v10; // ecx@3
  char v11; // bl@6
  int v12; // [sp+38h] [bp-30h]@2
  int v13; // [sp+3Ch] [bp-2Ch]@1
  signed int v14; // [sp+40h] [bp-28h]@1
  int v15; // [sp+44h] [bp-24h]@7
  char **v16; // [sp+48h] [bp-20h]@2
  char v17; // [sp+4Fh] [bp-19h]@1

  v4 = *(_DWORD *)(a1 + 432);
  v13 = *a4;
  v5 = *(_DWORD *)(a2 + 4);
  v6 = *(_BYTE *)(v4 + v5 + 140);
  v17 = *(_BYTE *)(v4 + v5 + 140);
  v14 = *(_BYTE *)(v4 + v5 + 150);
  result = *(char **)(a1 + 276);
  if ( (signed int)result > 0 )
  {
    v16 = a3;
    v8 = 0;
    v12 = v6;
    do
    {
      result = *v16;
      v9 = *(_BYTE **)(v13 + 4 * v8);
      v10 = (unsigned int)&v9[*(_DWORD *)(a1 + 92)];
      while ( (unsigned int)v9 < v10 )
      {
        while ( 1 )
        {
          v11 = *result++;
          if ( v17 )
            break;
          if ( (unsigned int)v9 >= v10 )
            goto LABEL_10;
        }
        v15 = (int)&v9[v12];
        do
          *v9++ = v11;
        while ( v9 != (_BYTE *)v15 );
      }
LABEL_10:
      if ( v14 > 1 )
        result = (char *)sub_6F868CF4(v13, v8, v13, v8 + 1, v14 - 1, *(_DWORD *)(a1 + 92));
      v8 += v14;
      ++v16;
    }
    while ( *(_DWORD *)(a1 + 276) > v8 );
  }
  return result;
}
