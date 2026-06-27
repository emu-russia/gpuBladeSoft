int __cdecl sub_6F76F8A0(int a1, int a2, int a3)
{
  int result; // eax@2
  __int16 v4; // cx@4
  int v5; // edx@5
  int v6; // eax@6
  unsigned int v7; // ebp@6
  _DWORD *v8; // esi@6
  int v9; // ebx@6
  int v10; // eax@6
  int v11; // ecx@6
  _DWORD *v12; // ebx@6
  int v13; // esi@6
  int v14; // ebx@6
  int v15; // edi@6
  int v16; // edx@6
  char v17; // cl@6
  int v18; // ecx@8
  int v19; // edx@9
  int v20; // esi@23
  int v21; // ebx@23
  int *v22; // ebp@26
  int v23; // eax@32
  int v24; // edi@32
  _BYTE *v25; // esi@33
  unsigned int v26; // ebx@33
  int v27; // edx@33
  int v28; // ecx@33
  char v29; // al@37
  int v30; // [sp+8h] [bp-74h]@0
  int v31; // [sp+14h] [bp-68h]@3
  unsigned int v32; // [sp+18h] [bp-64h]@6
  int v33; // [sp+1Ch] [bp-60h]@3
  int v34; // [sp+20h] [bp-5Ch]@5
  int v35; // [sp+20h] [bp-5Ch]@8
  int v36; // [sp+20h] [bp-5Ch]@13
  int v37; // [sp+20h] [bp-5Ch]@21
  char v38; // [sp+20h] [bp-5Ch]@33
  int v39; // [sp+24h] [bp-58h]@6
  signed int v40; // [sp+28h] [bp-54h]@5
  int v41; // [sp+2Ch] [bp-50h]@6
  int v42; // [sp+38h] [bp-44h]@6
  int v43; // [sp+3Ch] [bp-40h]@6
  int v44; // [sp+40h] [bp-3Ch]@6
  int v45; // [sp+44h] [bp-38h]@6
  int v46; // [sp+48h] [bp-34h]@14
  int v47; // [sp+4Ch] [bp-30h]@14
  int v48; // [sp+50h] [bp-2Ch]@14
  int v49; // [sp+54h] [bp-28h]@14
  int v50; // [sp+58h] [bp-24h]@15
  int v51; // [sp+5Ch] [bp-20h]@15

  if ( !a1 )
    return 20;
  result = 6;
  if ( !a2 )
    return result;
  v31 = *(_DWORD *)(a2 + 16);
  v33 = *(_DWORD *)(a2 + 20);
  if ( *(_WORD *)a1 <= 0 )
    return 0;
  v4 = **(_WORD **)(a1 + 12);
  if ( v4 < 0 )
    return 20;
  v5 = 0;
  v40 = 0;
  v34 = 0;
  while ( 1 )
  {
    v39 = v4;
    v6 = *(_DWORD *)(a1 + 4);
    v7 = v6 + 8 * v5;
    v8 = (_DWORD *)(v6 + 8 * v4);
    v9 = *(_DWORD *)(v7 + 4);
    v32 = (unsigned int)v8;
    v10 = (*(_DWORD *)v7 << v31) - v33;
    v44 = v10;
    v11 = (v9 << v31) - v33;
    v12 = v8;
    v45 = v11;
    v13 = *v8;
    v14 = v12[1];
    v42 = v10;
    v41 = v11;
    v15 = *(_DWORD *)(a1 + 8);
    v43 = v11;
    v16 = v15 + v34;
    v17 = *(_BYTE *)(v15 + v34) & 3;
    if ( v17 == 2 )
      return 20;
    if ( !v17 )
    {
      v20 = (v13 << v31) - v33;
      v21 = (v14 << v31) - v33;
      if ( (*(_BYTE *)(v15 + v39) & 3) == 1 )
      {
        v44 = v20;
        v45 = v21;
        v32 -= 8;
      }
      else
      {
        v44 = (v20 + v10) / 2;
        v45 = (v41 + v21) / 2;
      }
      v7 -= 8;
      --v16;
    }
    v35 = v16;
    result = (*(int (__cdecl **)(int *, int, int))a2)(&v44, a3, v30);
    if ( result )
      return result;
    v19 = v35;
    while ( v32 > v7 )
    {
      if ( *(_BYTE *)(v19 + 1) & 3 )
      {
        if ( (*(_BYTE *)(v19 + 1) & 3) == 1 )
        {
          v37 = v19;
          v50 = (*(_DWORD *)(v7 + 8) << v31) - v33;
          v51 = (*(_DWORD *)(v7 + 12) << v31) - v33;
          result = (*(int (__cdecl **)(int *, int, int))(a2 + 4))(&v50, a3, v30);
          if ( result )
            return result;
          v7 += 8;
          v19 = v37 + 1;
        }
        else
        {
          if ( v32 < v7 + 16 )
            return 20;
          v36 = v19;
          if ( (*(_BYTE *)(v19 + 2) & 3) != 2 )
            return 20;
          v46 = (*(_DWORD *)(v7 + 8) << v31) - v33;
          v47 = (*(_DWORD *)(v7 + 12) << v31) - v33;
          v48 = (*(_DWORD *)(v7 + 16) << v31) - v33;
          v49 = (*(_DWORD *)(v7 + 20) << v31) - v33;
          if ( v32 < v7 + 24 )
          {
            result = (*(int (__cdecl **)(int *, int *, int *, int))(a2 + 12))(&v46, &v48, &v44, a3);
            goto LABEL_28;
          }
          v50 = (*(_DWORD *)(v7 + 24) << v31) - v33;
          v51 = (*(_DWORD *)(v7 + 28) << v31) - v33;
          result = (*(int (__cdecl **)(int *, int *, int *, int))(a2 + 12))(&v46, &v48, &v50, a3);
          if ( result )
            return result;
          v7 += 24;
          v19 = v36 + 3;
        }
      }
      else
      {
        v23 = (*(_DWORD *)(v7 + 8) << v31) - v33;
        v24 = (*(_DWORD *)(v7 + 12) << v31) - v33;
        v42 = (*(_DWORD *)(v7 + 8) << v31) - v33;
        v43 = v24;
        if ( v32 <= v7 + 8 )
        {
          v22 = &v42;
LABEL_27:
          result = (*(int (__cdecl **)(int *, int *, int))(a2 + 8))(v22, &v44, a3);
          goto LABEL_28;
        }
        v25 = (_BYTE *)(v19 + 2);
        v26 = v7 + 16;
        v38 = *(_BYTE *)(v19 + 2) & 3;
        v27 = (*(_DWORD *)(v7 + 16) << v31) - v33;
        v48 = (*(_DWORD *)(v7 + 16) << v31) - v33;
        v28 = (*(_DWORD *)(v7 + 20) << v31) - v33;
        v49 = (*(_DWORD *)(v7 + 20) << v31) - v33;
        if ( v38 != 1 )
        {
          if ( v38 )
            return 20;
          while ( 1 )
          {
            v50 = (v27 + v23) / 2;
            v51 = (v24 + v28) / 2;
            result = (*(int (__cdecl **)(int *, int *, int))(a2 + 8))(&v42, &v50, a3);
            if ( result )
              return result;
            v42 = v48;
            v43 = v49;
            if ( v32 <= v26 )
            {
              v22 = &v42;
              goto LABEL_27;
            }
            v26 += 8;
            ++v25;
            v27 = (*(_DWORD *)v26 << v31) - v33;
            v29 = *v25 & 3;
            v48 = (*(_DWORD *)v26 << v31) - v33;
            v28 = (*(_DWORD *)(v26 + 4) << v31) - v33;
            v49 = (*(_DWORD *)(v26 + 4) << v31) - v33;
            if ( v29 == 1 )
              break;
            if ( v29 )
              return 20;
            v23 = v42;
            v24 = v43;
          }
        }
        v30 = a3;
        result = (*(int (__thiscall **)(int))(a2 + 8))(v28);
        if ( result )
          return result;
        v19 = (int)v25;
        v7 = v26;
      }
    }
    result = (*(int (__fastcall **)(int, int))(a2 + 4))(v18, v19);
LABEL_28:
    if ( result )
      return result;
    ++v40;
    v5 = v39 + 1;
    v34 = v39 + 1;
    if ( *(_WORD *)a1 <= v40 )
      return 0;
    v4 = *(_WORD *)(*(_DWORD *)(a1 + 12) + 2 * v40);
    if ( v4 < 0 )
      return 20;
  }
}
