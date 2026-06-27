signed int __cdecl sub_6F7C5E70(int a1, _BYTE *a2, int a3)
{
  signed int v3; // ecx@1
  const char *v4; // edi@1
  bool v5; // cf@1
  bool v6; // zf@1
  _BYTE *v7; // esi@1
  int v8; // ebx@4
  bool v9; // cf@4
  bool v10; // zf@4
  int v11; // ecx@5
  _DWORD *v12; // eax@5
  int v13; // edx@5
  const char *v15; // edi@11
  signed int v16; // ecx@11
  _BYTE *v17; // esi@11
  int v18; // ebx@14
  bool v19; // cf@14
  bool v20; // zf@14
  const char *v21; // edi@15
  signed int v22; // ecx@15
  _BYTE *v23; // esi@15
  signed int v24; // ebx@18
  bool v25; // cf@18
  bool v26; // zf@18
  _BYTE *v27; // esi@19
  const char *v28; // edi@19
  signed int v29; // ecx@19
  int v30; // esi@28
  int v31; // eax@29
  int v32; // eax@32
  int v33; // [sp+Ch] [bp-20h]@29

  v3 = 16;
  v4 = "fallback-script";
  v5 = 0;
  v6 = 0;
  v7 = a2;
  do
  {
    if ( !v3 )
      break;
    v5 = *v7 < (const unsigned __int8)*v4;
    v6 = *v7++ == *v4++;
    --v3;
  }
  while ( v6 );
  v8 = (char)((!v5 && !v6) - v5);
  v9 = 0;
  v10 = v8 == 0;
  if ( !v8 )
  {
    v11 = 0;
    v12 = &unk_6FB6B930;
    v13 = 0;
    while ( 1 )
    {
      if ( v11 == *(_DWORD *)a3 && v12[4] == 10 )
      {
        *(_DWORD *)(a1 + 12) = v13;
        return 0;
      }
      v12 = *(&off_6FB6B420 + ++v13);
      if ( !v12 )
        break;
      v11 = v12[2];
    }
    return 6;
  }
  v15 = "default-script";
  v16 = 15;
  v17 = a2;
  do
  {
    if ( !v16 )
      break;
    v9 = *v17 < (const unsigned __int8)*v15;
    v10 = *v17++ == *v15++;
    --v16;
  }
  while ( v10 );
  v18 = (char)((!v9 && !v10) - v9);
  v19 = 0;
  v20 = v18 == 0;
  if ( v18 )
  {
    v21 = "increase-x-height";
    v22 = 18;
    v23 = a2;
    do
    {
      if ( !v22 )
        break;
      v19 = *v23 < (const unsigned __int8)*v21;
      v20 = *v23++ == *v21++;
      --v22;
    }
    while ( v20 );
    v24 = (char)((!v19 && !v20) - v19);
    v25 = 0;
    v26 = v24 == 0;
    if ( v24 )
    {
      v27 = a2;
      v28 = "warping";
      v29 = 8;
      do
      {
        if ( !v29 )
          break;
        v25 = *v27 < (const unsigned __int8)*v28;
        v26 = *v27++ == *v28++;
        --v29;
      }
      while ( v26 );
      v24 = (char)((!v25 && !v26) - v25);
      if ( (!v25 && !v26) != v25 )
        return 12;
      *(_BYTE *)(a1 + 20) = *(_BYTE *)a3;
      return v24;
    }
    v30 = *(_DWORD *)a3;
    if ( *(_DWORD *)a3 )
    {
      v33 = *(_DWORD *)(v30 + 116);
      v31 = v33;
      if ( !v33 )
      {
        v32 = sub_6F7C51E0(v30, &v33, a1);
        if ( v32 )
          return v32;
        v31 = v33;
        *(_DWORD *)(v30 + 120) = sub_6F7C23F0;
        *(_DWORD *)(v30 + 116) = v31;
      }
      *(_DWORD *)(v31 + 12) = *(_DWORD *)(a3 + 4);
    }
    else
    {
      v24 = 35;
    }
    return v24;
  }
  *(_DWORD *)(a1 + 16) = *(_DWORD *)a3;
  return 0;
}
