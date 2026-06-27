int __usercall sub_6F768E50@<eax>(int a1@<eax>, _DWORD *a2@<edx>, char a3@<cl>, int a4, int a5, int a6, _DWORD *a7)
{
  _DWORD *v7; // edi@1
  int v8; // ebx@1
  char v9; // bp@1
  void *v10; // esi@1
  _DWORD *v11; // eax@4
  int v12; // ebx@4
  int v13; // edx@5
  int v14; // eax@5
  int v15; // ecx@9
  int (__cdecl *v16)(_DWORD, void *, int, int, int); // eax@11
  int v17; // eax@12
  int v18; // edx@12
  int v19; // ebx@13
  int v20; // ebp@14
  int v21; // edi@14
  int v22; // edx@14
  void (__cdecl *v23)(int); // eax@14
  int v24; // ST20_4@15
  bool v25; // sf@16
  unsigned __int8 v26; // of@16
  void (__cdecl *v27)(void *); // eax@18
  unsigned int v29; // edi@25
  unsigned int v30; // ecx@26
  unsigned int v31; // eax@26
  int v32; // edx@28
  int v33; // ebp@29
  int v34; // [sp+24h] [bp-38h]@1
  int v35; // [sp+28h] [bp-34h]@4
  int v36; // [sp+2Ch] [bp-30h]@1
  int v37; // [sp+3Ch] [bp-20h]@1

  v7 = a2;
  v8 = a1;
  v9 = a3;
  v36 = *(_DWORD *)(a1 + 12);
  v34 = *(_DWORD *)(a1 + 8);
  v10 = sub_6F773A50(*(_DWORD *)(a1 + 8), *(_DWORD *)(v36 + 36), &v37);
  if ( v37 )
  {
    v35 = 0;
    if ( !v10 )
    {
LABEL_18:
      v27 = *(void (__cdecl **)(void *))(v36 + 52);
      if ( v27 )
        v27(v10);
      sub_6F773D90(v34, v35);
      sub_6F773D90(v34, (int)v10);
      v12 = v37;
      *a7 = 0;
      return v12;
    }
LABEL_13:
    v19 = 0;
    if ( *((_DWORD *)v10 + 9) > 0 )
    {
      do
      {
        v20 = 4 * v19;
        v21 = *(_DWORD *)(*((_DWORD *)v10 + 10) + 4 * v19);
        v22 = *(_DWORD *)(*(_DWORD *)v21 + 100);
        v23 = *(void (__cdecl **)(int))(*(_DWORD *)(v21 + 12) + 8);
        if ( v23 )
        {
          v24 = *(_DWORD *)(*(_DWORD *)v21 + 100);
          v23(v21);
          v22 = v24;
        }
        ++v19;
        sub_6F773D90(v22, v21);
        v26 = __OFSUB__(v19, *((_DWORD *)v10 + 9));
        v25 = v19 - *((_DWORD *)v10 + 9) < 0;
        *(_DWORD *)(*((_DWORD *)v10 + 10) + v20) = 0;
      }
      while ( v25 ^ v26 );
    }
    sub_6F773D90(v34, *((_DWORD *)v10 + 10));
    *((_DWORD *)v10 + 10) = 0;
    *((_DWORD *)v10 + 9) = 0;
    goto LABEL_18;
  }
  *((_DWORD *)v10 + 24) = v8;
  *((_DWORD *)v10 + 25) = v34;
  *((_DWORD *)v10 + 26) = *v7;
  if ( v9 )
    *((_DWORD *)v10 + 2) |= 0x400u;
  v11 = sub_6F773A50(v34, 60, &v37);
  v12 = v37;
  v35 = (int)v11;
  if ( v37 )
    goto LABEL_13;
  v13 = 0;
  *((_DWORD *)v10 + 32) = v11;
  v11[12] = 0;
  v14 = a6;
  if ( a5 > 0 )
  {
    while ( *(_DWORD *)v14 == 1768842098 )
    {
LABEL_9:
      ++v13;
      v15 = *(_DWORD *)(v14 + 4);
      *(_DWORD *)(v35 + 48) = v15;
      if ( a5 != v13 )
      {
        v14 += 8;
        if ( !v15 )
          continue;
      }
      goto LABEL_11;
    }
    while ( a5 != ++v13 )
    {
      v14 += 8;
      if ( *(_DWORD *)v14 == 1768842098 )
        goto LABEL_9;
    }
  }
LABEL_11:
  v16 = *(int (__cdecl **)(_DWORD, void *, int, int, int))(v36 + 48);
  if ( v16 )
  {
    v17 = v16(*v7, v10, a4, a5, a6);
    v18 = *((_DWORD *)v10 + 26);
    v37 = v17;
    *v7 = v18;
    if ( v17 )
      goto LABEL_13;
  }
  else
  {
    *v7 = *((_DWORD *)v10 + 26);
  }
  v29 = *((_DWORD *)v10 + 10);
  if ( v29 )
  {
    v30 = v29 + 4 * *((_DWORD *)v10 + 9);
    v31 = v29 + 4 * *((_DWORD *)v10 + 9);
    while ( 1 )
    {
      v31 -= 4;
      if ( v29 > v31 )
        break;
      v32 = *(_DWORD *)v31;
      if ( *(_DWORD *)(*(_DWORD *)v31 + 4) == 1970170211 )
      {
        v33 = *(_DWORD *)(v32 + 8);
        if ( v33 == 655363 || v33 == 0x40000 )
        {
          *((_DWORD *)v10 + 23) = v32;
          goto LABEL_32;
        }
      }
    }
    while ( 1 )
    {
      v30 -= 4;
      if ( v29 > v30 )
        break;
      if ( *(_DWORD *)(*(_DWORD *)v30 + 4) == 1970170211 )
      {
        *((_DWORD *)v10 + 23) = *(_DWORD *)v30;
        break;
      }
    }
  }
LABEL_32:
  *a7 = v10;
  return v12;
}
