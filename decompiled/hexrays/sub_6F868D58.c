int __usercall sub_6F868D58@<eax>(int a1@<eax>, int a2@<edx>, char a3@<cl>)
{
  int v3; // ebx@1
  int v4; // ecx@1
  int result; // eax@1
  int v6; // edx@2
  int v7; // eax@3
  int v8; // esi@6
  int v9; // edx@7
  int v10; // ecx@10
  int v11; // edi@16
  int v12; // [sp+2Ch] [bp-2Ch]@6
  char v13; // [sp+33h] [bp-25h]@1
  int v14; // [sp+34h] [bp-24h]@1
  int v15; // [sp+38h] [bp-20h]@1
  int v16; // [sp+3Ch] [bp-1Ch]@6

  v14 = a1;
  v3 = a2;
  v13 = a3;
  v15 = *(_DWORD *)(a2 + 8);
  v4 = *(_DWORD *)(a2 + 24);
  result = *(_DWORD *)(a2 + 16);
  if ( result <= 0 )
    return result;
  v6 = *(_DWORD *)(a2 + 20);
  if ( v6 > result )
  {
    v6 = result;
    v7 = *(_DWORD *)(v3 + 28) - v4;
    if ( v6 <= v7 )
    {
LABEL_4:
      result = *(_DWORD *)(v3 + 4) - v4;
      if ( v6 <= result )
        goto LABEL_5;
      goto LABEL_19;
    }
  }
  else
  {
    v7 = *(_DWORD *)(v3 + 28) - v4;
    if ( v6 <= v7 )
      goto LABEL_4;
  }
  v6 = v7;
  result = *(_DWORD *)(v3 + 4) - v4;
  if ( v6 > result )
LABEL_19:
    v6 = result;
LABEL_5:
  if ( v6 > 0 )
  {
    v16 = v15 * v4;
    v8 = 0;
    v12 = v3 + 40;
    while ( 1 )
    {
      v11 = v6 * v15;
      if ( v13 )
      {
        (*(void (__cdecl **)(int, int, _DWORD, int, int))(v3 + 44))(
          v14,
          v12,
          *(_DWORD *)(*(_DWORD *)v3 + 4 * v8),
          v16,
          v6 * v15);
        result = *(_DWORD *)(v3 + 20);
        v8 += result;
        v9 = *(_DWORD *)(v3 + 16);
        if ( v9 <= v8 )
          return result;
      }
      else
      {
        (*(void (__cdecl **)(int, int, _DWORD, int, int))(v3 + 40))(
          v14,
          v12,
          *(_DWORD *)(*(_DWORD *)v3 + 4 * v8),
          v16,
          v6 * v15);
        result = *(_DWORD *)(v3 + 20);
        v8 += result;
        v9 = *(_DWORD *)(v3 + 16);
        if ( v9 <= v8 )
          return result;
      }
      v6 = v9 - v8;
      if ( v6 > result )
        v6 = result;
      v10 = v8 + *(_DWORD *)(v3 + 24);
      if ( v6 > *(_DWORD *)(v3 + 28) - v10 )
        v6 = *(_DWORD *)(v3 + 28) - v10;
      result = *(_DWORD *)(v3 + 4) - v10;
      if ( v6 > result )
        v6 = *(_DWORD *)(v3 + 4) - v10;
      if ( v6 <= 0 )
        break;
      v16 += v11;
    }
  }
  return result;
}
