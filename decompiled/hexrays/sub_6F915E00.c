int __fastcall sub_6F915E00(int a1, int a2, int a3, int a4)
{
  int v4; // ebx@1
  bool v5; // zf@1
  int v6; // ecx@1
  bool v7; // di@2
  int v8; // edx@5
  int v9; // eax@5
  unsigned int v10; // ecx@6
  int v11; // edi@11
  int v12; // eax@11
  int v13; // edx@12
  bool v14; // sf@12
  unsigned __int8 v15; // of@12
  int result; // eax@12
  int v17; // edx@16
  int v18; // ecx@16
  unsigned int v19; // ecx@18

  v4 = a1;
  v5 = (*(_BYTE *)(a1 + 44) & 0x11) == 0;
  v6 = *(_DWORD *)(a1 + 84);
  if ( !v6 )
    sub_6F95AA30();
  v7 = !v5;
  if ( !(unsigned __int8)(*(int (__fastcall **)(int, int))(*(_DWORD *)v6 + 24))(v6, a2) || !v7 || *(_BYTE *)(v4 + 69) )
    goto LABEL_25;
  v8 = *(_DWORD *)(v4 + 20);
  v9 = *(_DWORD *)(v4 + 24) - v8;
  if ( !*(_BYTE *)(v4 + 70) )
  {
    v10 = *(_DWORD *)(v4 + 64);
    if ( v10 > 1 )
      v9 = v10 - 1;
  }
  if ( v9 >= 1024 )
    v9 = 1024;
  if ( v9 <= a4 )
  {
    v11 = v8 - *(_DWORD *)(v4 + 16);
    v12 = sub_6F90E7B0((FILE **)(v4 + 36), *(_DWORD *)(v4 + 16), v11, a3, a4);
    if ( v11 + a4 == v12 )
    {
      v17 = *(_DWORD *)(v4 + 60);
      v18 = *(_DWORD *)(v4 + 44);
      *(_DWORD *)(v4 + 4) = v17;
      *(_DWORD *)(v4 + 8) = v17;
      *(_DWORD *)(v4 + 12) = v17;
      if ( (v18 & 0x10 || v18 & 1) && (v19 = *(_DWORD *)(v4 + 64), v19 > 1) )
      {
        *(_DWORD *)(v4 + 20) = v17;
        *(_DWORD *)(v4 + 16) = v17;
        *(_DWORD *)(v4 + 24) = v17 + v19 - 1;
      }
      else
      {
        *(_DWORD *)(v4 + 20) = 0;
        *(_DWORD *)(v4 + 16) = 0;
        *(_DWORD *)(v4 + 24) = 0;
      }
      *(_BYTE *)(v4 + 70) = 1;
    }
    v13 = v12 - v11;
    v15 = __OFSUB__(v11, v12);
    v14 = v11 - v12 < 0;
    result = 0;
    if ( v14 ^ v15 )
      result = v13;
  }
  else
  {
LABEL_25:
    result = sub_6F92D300((_DWORD *)v4, (char *)a3, a4);
  }
  return result;
}
