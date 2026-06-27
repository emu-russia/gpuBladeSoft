signed int __usercall sub_6F7AA530@<eax>(int a1@<eax>, unsigned int *a2@<edx>)
{
  unsigned int *v2; // esi@1
  int v3; // ebx@1
  signed int result; // eax@1
  unsigned int v5; // ebp@2
  char v6; // cl@3
  unsigned int v7; // edx@3
  int v8; // edx@9
  int v9; // esi@9
  int v10; // eax@14
  int v11; // edx@14
  int v12; // eax@14
  unsigned int v13; // [sp+10h] [bp-2Ch]@1
  int v14; // [sp+14h] [bp-28h]@3
  int v15; // [sp+18h] [bp-24h]@1

  v2 = a2;
  v3 = a1;
  v15 = (*(int (__cdecl **)(int))(a1 + 592))(a1);
  v13 = *v2;
  result = *(_DWORD *)(v3 + 28);
  if ( !*v2 )
  {
LABEL_12:
    *(_DWORD *)(v3 + 32) = result;
    return result;
  }
  v5 = 1;
  while ( result > 1 )
  {
    result -= 2;
    v8 = *(_DWORD *)(v3 + 24);
    *(_DWORD *)(v3 + 28) = result;
    v9 = *(_DWORD *)(v8 + 4 * (result + 1));
    if ( *(_WORD *)(v3 + 44) > (unsigned __int16)v9 )
    {
      v6 = *(_BYTE *)(v3 + 368);
      v14 = *(_DWORD *)(v8 + 4 * (result + 1) - 4);
      v7 = (*(_DWORD *)(v8 + 4 * (result + 1) - 4) & 0xF0u) >> 4;
      if ( v6 != 113 )
      {
        if ( v6 == 114 )
          v7 += 32;
        if ( v15 != *(_WORD *)(v3 + 332) + v7 )
          goto LABEL_7;
LABEL_14:
        v10 = v14 & 0xF;
        v11 = v10 - 7;
        v12 = v10 - 8;
        if ( v12 >= 0 )
          v12 = v11;
        (*(void (__cdecl **)(int, int, _DWORD, int))(v3 + 584))(
          v3,
          v3 + 36,
          (unsigned __int16)v9,
          v12 << (6 - *(_BYTE *)(v3 + 334)));
        result = *(_DWORD *)(v3 + 28);
        goto LABEL_7;
      }
      if ( v15 == *(_WORD *)(v3 + 332) + v7 + 16 )
        goto LABEL_14;
LABEL_7:
      if ( v13 < ++v5 )
        goto LABEL_12;
    }
    else
    {
      if ( !*(_BYTE *)(v3 + 561) )
        goto LABEL_7;
      ++v5;
      *(_DWORD *)(v3 + 12) = 134;
      if ( v13 < v5 )
        goto LABEL_12;
    }
  }
  if ( *(_BYTE *)(v3 + 561) )
    *(_DWORD *)(v3 + 12) = 129;
  result = 0;
  *(_DWORD *)(v3 + 28) = 0;
  *(_DWORD *)(v3 + 32) = 0;
  return result;
}
