signed int __cdecl sub_6F789460(int a1, int a2)
{
  int v2; // esi@1
  int v3; // edi@1
  signed int result; // eax@2
  int v5; // ecx@3
  int v6; // eax@3
  unsigned int v7; // ebx@4
  void *v8; // ebp@6
  int v9; // eax@8
  int v10; // ebx@8
  int v11; // edx@8
  int v12; // eax@8
  int v13; // eax@8
  int v14; // edx@8
  int v15; // eax@8
  int v16; // eax@8
  int v17; // ebx@8
  signed int v18; // eax@15
  signed int v19; // eax@15
  signed int v20; // eax@15
  int v21; // ebx@19
  int v22; // eax@21
  int v23; // edx@21
  int v24; // eax@22
  int v25; // edx@24
  int v26; // ecx@25
  int v27; // edx@25
  int v28; // ebp@25
  int v29; // ecx@27
  int v30; // eax@27
  int v31; // ebp@27
  int v32; // ebp@29
  int v33; // [sp+18h] [bp-54h]@1
  int v34; // [sp+1Ch] [bp-50h]@1
  int v35; // [sp+20h] [bp-4Ch]@6
  int v36; // [sp+24h] [bp-48h]@1
  int v37; // [sp+28h] [bp-44h]@27
  int v38; // [sp+2Ch] [bp-40h]@25
  int v39; // [sp+3Ch] [bp-30h]@1
  int v40; // [sp+40h] [bp-2Ch]@2
  int v41; // [sp+44h] [bp-28h]@6
  int v42; // [sp+48h] [bp-24h]@15
  int v43; // [sp+4Ch] [bp-20h]@15

  v39 = 0;
  v2 = *(_DWORD *)(a1 + 4);
  v34 = *(_DWORD *)(v2 + 328);
  v33 = *(_DWORD *)(v2 + 100);
  v36 = *(_DWORD *)(v2 + 136);
  v3 = *(_DWORD *)(*(_DWORD *)(v2 + 128) + 48);
  if ( !v3 )
  {
    v21 = *(_DWORD *)(v2 + 288) + *(_DWORD *)(v2 + 292);
    result = sub_6F771FF0(v34, *(_DWORD *)(v2 + 308) + *(_DWORD *)(v2 + 284) + v21 * a2);
    v39 = result;
    if ( result )
      return result;
    result = sub_6F772380(v34, 2 * v21);
    v39 = result;
    if ( result )
      return result;
    v22 = *(_DWORD *)(v2 + 288);
    v23 = *(_DWORD *)(v34 + 32);
    if ( (_BYTE)v22 )
    {
      v7 = 0;
      v24 = v23 + (unsigned __int8)(v22 - 1) + 1;
      do
        v7 = *(_BYTE *)(++v23 - 1) | (v7 << 8);
      while ( v23 != v24 );
    }
    else
    {
      v24 = *(_DWORD *)(v34 + 32);
      v7 = 0;
    }
    v25 = *(_DWORD *)(v2 + 292);
    if ( (_BYTE)v25 )
    {
      v26 = (unsigned __int8)(v25 - 1) + 1;
      v27 = 0;
      v28 = v24 + v26;
      v38 = v26;
      do
        v27 = *(_BYTE *)(++v24 - 1) | (v27 << 8);
      while ( v24 != v28 );
      v37 = v27;
      v29 = v24 + *(_DWORD *)(v2 + 288);
      v30 = 0;
      v31 = v29 + v38;
      do
        v30 = *(_BYTE *)(++v29 - 1) | (v30 << 8);
      while ( v29 != v31 );
      v35 = v30 - v27;
      v32 = v30 - v27;
      sub_6F772460(v34);
      result = 9;
      if ( *(_DWORD *)(v2 + 300) <= v7 )
        return result;
      if ( v32 )
      {
        v8 = sub_6F773A50(v33, v35, &v39);
        result = v39;
        if ( v39 )
          return result;
        result = sub_6F772140(v34, *(_DWORD *)(v2 + 308) + v37, v8, v35);
        v39 = result;
        if ( result )
          return result;
        goto LABEL_8;
      }
    }
    else
    {
      sub_6F772460(v34);
      result = 9;
      if ( v7 >= *(_DWORD *)(v2 + 300) )
        return result;
    }
    return v39;
  }
  result = (**(int (__cdecl ***)(_DWORD, int, int *))v3)(*(_DWORD *)(v3 + 4), a2, &v40);
  v39 = result;
  if ( !result )
  {
    v5 = *(_DWORD *)(v2 + 288);
    v6 = v40;
    if ( (_BYTE)v5 )
    {
      v7 = 0;
      do
        v7 = *(_BYTE *)(++v6 - 1) | (v7 << 8);
      while ( v6 != v40 + (unsigned __int8)(v5 - 1) + 1 );
    }
    else
    {
      v7 = 0;
    }
    v8 = 0;
    v35 = 0;
    if ( v41 )
    {
      v35 = v41 - v5;
      v8 = sub_6F773A50(v33, v41 - v5, &v39);
      if ( !v39 )
        memcpy(v8, (const void *)(v40 + *(_DWORD *)(v2 + 288)), v35);
    }
    (*(void (__cdecl **)(_DWORD, int *))(*(_DWORD *)v3 + 4))(*(_DWORD *)(v3 + 4), &v40);
    result = v39;
    if ( !v39 )
    {
LABEL_8:
      v9 = *(_DWORD *)(v2 + 316) + 8 * v7;
      v10 = *(_DWORD *)(v2 + 304) + 252 * v7;
      v11 = *(_DWORD *)v9;
      v12 = *(_DWORD *)(v9 + 4);
      *(_DWORD *)(a1 + 1372) = 0;
      *(_DWORD *)(a1 + 1368) = v12;
      v13 = *(_DWORD *)(v10 + 216);
      *(_DWORD *)(a1 + 1364) = v11;
      v14 = *(_DWORD *)(v10 + 236);
      *(_DWORD *)(a1 + 1376) = v13;
      *(_DWORD *)(a1 + 1380) = *(_DWORD *)(v10 + 220);
      *(_DWORD *)(a1 + 1384) = *(_DWORD *)(v10 + 224);
      *(_DWORD *)(a1 + 1388) = *(_DWORD *)(v10 + 228);
      v15 = *(_DWORD *)(v10 + 232);
      *(_DWORD *)(a1 + 1396) = v14;
      *(_DWORD *)(a1 + 1392) = v15;
      v16 = *(_DWORD *)(v10 + 4);
      v17 = 0;
      *(_DWORD *)(a1 + 1360) = v16;
      if ( v16 >= 0 )
        v17 = v16;
      if ( v16 >= 0 )
        (*(void (__cdecl **)(void *, int, signed int))(v36 + 16))(v8, v35, 4330);
      v39 = (*(int (__cdecl **)(int, int, int))(a1 + 1484))(a1, (int)v8 + v17, v35 - v17);
      sub_6F773D90(v33, (int)v8);
      result = v39;
      if ( v3 && !v39 )
      {
        if ( *(_DWORD *)(*(_DWORD *)v3 + 8) )
        {
          LOWORD(v18) = sub_6F7C9390(*(_DWORD *)(a1 + 32));
          v41 = 0;
          v40 = v18 >> 16;
          LOWORD(v19) = sub_6F7C9390(*(_DWORD *)(a1 + 40));
          v42 = v19 >> 16;
          LOWORD(v20) = sub_6F7C9390(*(_DWORD *)(a1 + 44));
          v43 = v20 >> 16;
          result = (*(int (__cdecl **)(_DWORD, int, _DWORD, int *))(*(_DWORD *)v3 + 8))(
                     *(_DWORD *)(v3 + 4),
                     a2,
                     0,
                     &v40);
          *(_DWORD *)(a1 + 32) = v40 << 16;
          *(_DWORD *)(a1 + 40) = v42 << 16;
          *(_DWORD *)(a1 + 44) = v43 << 16;
        }
      }
      return result;
    }
  }
  return result;
}
