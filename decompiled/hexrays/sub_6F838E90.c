signed int __cdecl sub_6F838E90(int *a1)
{
  signed int result; // eax@2
  int v2; // [sp+1Ch] [bp-2Ch]@6
  int v3; // [sp+20h] [bp-28h]@6
  int v4; // [sp+24h] [bp-24h]@6
  int v5; // [sp+28h] [bp-20h]@6
  int v6; // [sp+2Ch] [bp-1Ch]@6
  int v7; // [sp+30h] [bp-18h]@6
  FILE *v8; // [sp+34h] [bp-14h]@4
  int v9; // [sp+38h] [bp-10h]@1
  int *v10; // [sp+3Ch] [bp-Ch]@1

  v10 = a1;
  v9 = *a1;
  if ( *(_DWORD *)v9 )
  {
    if ( *(_BYTE *)(v9 + 20) & 2 )
    {
      v8 = *(FILE **)(*(_DWORD *)v9 + 96);
      *(_BYTE *)(v9 + 20) &= 0xFDu;
      if ( v8 )
      {
        *(_DWORD *)(*(_DWORD *)v9 + 96) = 0;
        fclose(v8);
      }
    }
    v2 = *(_DWORD *)v9;
    v3 = *(_DWORD *)(v9 + 4);
    v4 = *(_DWORD *)(v9 + 8);
    v5 = *(_DWORD *)(v9 + 12);
    v6 = *(_DWORD *)(v9 + 16);
    v7 = *(_DWORD *)(v9 + 20);
    *v10 = (int)&v2;
    sub_6F83B5A7(v2, v9);
    if ( v7 & 1 )
      sub_6F854EC7((const void **)&v2, (void **)&v3);
    else
      sub_6F83CA1A((const void **)&v2, (void **)&v3, 0);
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}
