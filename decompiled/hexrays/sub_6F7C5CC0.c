signed int __cdecl sub_6F7C5CC0(int a1, _BYTE *a2, int a3)
{
  signed int v3; // ecx@1
  const char *v4; // edi@1
  bool v5; // cf@1
  bool v6; // zf@1
  _BYTE *v7; // esi@1
  int v8; // ebx@4
  bool v9; // cf@4
  bool v10; // zf@4
  const char *v11; // edi@5
  signed int v12; // ecx@5
  _BYTE *v13; // esi@5
  int v14; // ebx@8
  bool v15; // cf@8
  bool v16; // zf@8
  const char *v17; // edi@9
  signed int v18; // ecx@9
  _BYTE *v19; // esi@9
  int v20; // ebx@12
  bool v21; // cf@12
  bool v22; // zf@12
  const char *v23; // edi@13
  signed int v24; // ecx@13
  _BYTE *v25; // esi@13
  bool v26; // cf@16
  bool v27; // zf@16
  _BYTE *v28; // esi@17
  const char *v29; // edi@17
  signed int v30; // ecx@17
  signed int result; // eax@21
  int v32; // edi@24
  int v33; // eax@25
  int v34; // esi@27
  int v35; // eax@28
  int v36; // eax@33
  int v37; // [sp+Ch] [bp-20h]@25

  v3 = 20;
  v4 = "glyph-to-script-map";
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
  if ( v8 )
  {
    v11 = "fallback-script";
    v12 = 16;
    v13 = a2;
    do
    {
      if ( !v12 )
        break;
      v9 = *v13 < (const unsigned __int8)*v11;
      v10 = *v13++ == *v11++;
      --v12;
    }
    while ( v10 );
    v14 = (char)((!v9 && !v10) - v9);
    v15 = 0;
    v16 = v14 == 0;
    if ( !v14 )
    {
      *(_DWORD *)a3 = *((_DWORD *)*(&off_6FB6B420 + *(_DWORD *)(a1 + 12)) + 2);
      return v14;
    }
    v17 = "default-script";
    v18 = 15;
    v19 = a2;
    do
    {
      if ( !v18 )
        break;
      v15 = *v19 < (const unsigned __int8)*v17;
      v16 = *v19++ == *v17++;
      --v18;
    }
    while ( v16 );
    v20 = (char)((!v15 && !v16) - v15);
    v21 = 0;
    v22 = v20 == 0;
    if ( v20 )
    {
      v23 = "increase-x-height";
      v24 = 18;
      v25 = a2;
      do
      {
        if ( !v24 )
          break;
        v21 = *v25 < (const unsigned __int8)*v23;
        v22 = *v25++ == *v23++;
        --v24;
      }
      while ( v22 );
      v14 = (char)((!v21 && !v22) - v21);
      v26 = 0;
      v27 = v14 == 0;
      if ( v14 )
      {
        v28 = a2;
        v29 = "warping";
        v30 = 8;
        do
        {
          if ( !v30 )
            break;
          v26 = *v28 < (const unsigned __int8)*v29;
          v27 = *v28++ == *v29++;
          --v30;
        }
        while ( v27 );
        v14 = (char)((!v26 && !v27) - v26);
        if ( (!v26 && !v27) != v26 )
          return 12;
        *(_BYTE *)a3 = *(_BYTE *)(a1 + 20);
        return v14;
      }
      v34 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 )
      {
        v37 = *(_DWORD *)(v34 + 116);
        v35 = v37;
        if ( v37 )
        {
LABEL_29:
          *(_DWORD *)(a3 + 4) = *(_DWORD *)(v35 + 12);
          return v14;
        }
        v36 = sub_6F7C51E0(v34, &v37, a1);
        if ( !v36 )
        {
          v35 = v37;
          *(_DWORD *)(v34 + 120) = sub_6F7C23F0;
          *(_DWORD *)(v34 + 116) = v35;
          goto LABEL_29;
        }
        return v36;
      }
      return 35;
    }
    *(_DWORD *)a3 = *(_DWORD *)(a1 + 16);
    result = 0;
  }
  else
  {
    v32 = *(_DWORD *)a3;
    if ( !*(_DWORD *)a3 )
      return 35;
    v37 = *(_DWORD *)(v32 + 116);
    v33 = v37;
    if ( !v37 )
    {
      v36 = sub_6F7C51E0(v32, &v37, a1);
      if ( v36 )
        return v36;
      v33 = v37;
      *(_DWORD *)(v32 + 120) = sub_6F7C23F0;
      *(_DWORD *)(v32 + 116) = v33;
    }
    *(_DWORD *)(a3 + 4) = *(_DWORD *)(v33 + 8);
    result = 0;
  }
  return result;
}
