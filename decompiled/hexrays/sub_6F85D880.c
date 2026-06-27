int __cdecl sub_6F85D880(int a1)
{
  int v1; // ebx@1
  int v2; // eax@1
  int v3; // edi@2
  char v4; // dl@5
  int result; // eax@7
  int v6; // edx@16
  char v7; // bl@17
  int v8; // ecx@17
  int v9; // eax@30
  int v10; // [sp+1Ch] [bp-1Ch]@2

  v1 = *(_DWORD *)(a1 + 84);
  v2 = *(_DWORD *)(a1 + 76);
  if ( v2 <= 0 )
  {
    v10 = 0;
  }
  else
  {
    v10 = 0;
    v3 = 0;
    do
    {
      v10 += sub_6F85D3D0((int *)a1, *(_DWORD *)(v1 + 16));
      ++v3;
      v1 += 88;
      v2 = *(_DWORD *)(a1 + 76);
    }
    while ( v2 > v3 );
  }
  if ( *(_BYTE *)(a1 + 209) )
    goto LABEL_9;
  v4 = *(_BYTE *)(a1 + 248);
  if ( v4 )
  {
LABEL_6:
    if ( !v4 )
      goto LABEL_7;
    result = sub_6F85D5D4(a1, -62);
LABEL_11:
    if ( !*(_BYTE *)(a1 + 248) )
      return result;
    goto LABEL_12;
  }
  if ( *(_DWORD *)(a1 + 72) == 8 && *(_DWORD *)(a1 + 360) == 8 )
  {
    v6 = *(_DWORD *)(a1 + 84);
    if ( v2 <= 0 )
    {
      v7 = 1;
    }
    else
    {
      v7 = 1;
      v8 = 0;
      while ( 1 )
      {
        if ( *(_DWORD *)(v6 + 20) > 1 || *(_DWORD *)(v6 + 24) > 1 )
          v7 = 0;
        if ( ++v8 == v2 )
          break;
        v6 += 88;
      }
    }
    if ( v10 )
    {
      if ( v7 )
      {
        v9 = *(_DWORD *)a1;
        *(_DWORD *)(v9 + 20) = 77;
        (*(void (__cdecl **)(int, _DWORD))(v9 + 4))(a1, 0);
        if ( !*(_BYTE *)(a1 + 209) )
        {
          v4 = *(_BYTE *)(a1 + 248);
          goto LABEL_6;
        }
LABEL_9:
        if ( *(_BYTE *)(a1 + 248) )
          result = sub_6F85D5D4(a1, -54);
        else
          result = sub_6F85D5D4(a1, -55);
        goto LABEL_11;
      }
    }
    else if ( v7 )
    {
      result = sub_6F85D5D4(a1, -64);
      goto LABEL_11;
    }
  }
LABEL_7:
  result = sub_6F85D5D4(a1, -63);
  if ( !*(_BYTE *)(a1 + 248) )
    return result;
LABEL_12:
  if ( *(_DWORD *)(a1 + 360) != 8 )
  {
    sub_6F85D394(a1, -38);
    sub_6F85D3B0(a1, 6);
    sub_6F85D350(a1, 0);
    sub_6F85D350(a1, 0);
    sub_6F85D350(a1, *(_BYTE *)(a1 + 360) * *(_BYTE *)(a1 + 360) - 1);
    result = sub_6F85D350(a1, 0);
  }
  return result;
}
