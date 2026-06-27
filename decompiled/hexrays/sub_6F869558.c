unsigned int __cdecl sub_6F869558(int *a1, int a2, unsigned int a3, unsigned int a4, char a5)
{
  int v5; // ecx@0
  unsigned int v6; // edi@1
  int v7; // eax@3
  unsigned int v8; // eax@4
  unsigned int v9; // eax@10
  unsigned int v10; // edx@12
  int v11; // eax@17
  int v12; // ecx@18
  int v14; // eax@20
  unsigned int v15; // edx@23
  int v16; // esi@24
  int v17; // eax@7
  int v18; // eax@35
  unsigned int v19; // [sp+18h] [bp-20h]@23
  unsigned int v20; // [sp+1Ch] [bp-1Ch]@23

  v6 = a4 + a3;
  if ( a4 + a3 > *(_DWORD *)(a2 + 4) || a4 > *(_DWORD *)(a2 + 12) || !*(_DWORD *)a2 )
  {
    v7 = *a1;
    *(_DWORD *)(v7 + 20) = 23;
    (*(void (__cdecl **)(int *))v7)(a1);
  }
  v8 = *(_DWORD *)(a2 + 24);
  if ( a3 < v8 || v6 > *(_DWORD *)(a2 + 16) + v8 )
  {
    if ( !*(_BYTE *)(a2 + 34) )
    {
      v17 = *a1;
      *(_DWORD *)(v17 + 20) = 71;
      (*(void (__cdecl **)(int *))v17)(a1);
    }
    if ( *(_BYTE *)(a2 + 33) )
    {
      sub_6F868D58((int)a1, a2, 1);
      *(_BYTE *)(a2 + 33) = 0;
    }
    v9 = a3;
    if ( a3 <= *(_DWORD *)(a2 + 24) )
    {
      v9 = v6 - *(_DWORD *)(a2 + 16);
      if ( ((v6 - *(_DWORD *)(a2 + 16)) & 0x80000000) != 0 )
        v9 = 0;
    }
    *(_DWORD *)(a2 + 24) = v9;
    sub_6F868D58((int)a1, a2, 0);
  }
  v10 = *(_DWORD *)(a2 + 28);
  if ( v6 <= v10 )
    goto LABEL_26;
  if ( a3 <= v10 )
  {
    if ( !a5 )
    {
LABEL_22:
      if ( !*(_BYTE *)(a2 + 32) )
        goto LABEL_16;
      goto LABEL_23;
    }
LABEL_21:
    *(_DWORD *)(a2 + 28) = v6;
    goto LABEL_22;
  }
  if ( a5 )
  {
    v14 = *a1;
    *(_DWORD *)(v14 + 20) = 23;
    (*(void (__cdecl **)(int *))v14)(a1);
    v10 = a3;
    goto LABEL_21;
  }
  v10 = a3;
  if ( *(_BYTE *)(a2 + 32) )
  {
LABEL_23:
    v19 = *(_DWORD *)(a2 + 8);
    v11 = *(_DWORD *)(a2 + 24);
    v12 = v11;
    v15 = v10 - v11;
    v20 = v15;
    if ( v15 >= v6 - v11 )
      goto LABEL_27;
    v16 = 4 * v15;
    do
    {
      memset(*(void **)(*(_DWORD *)a2 + v16), 0, v19);
      ++v20;
      v16 += 4;
    }
    while ( v6 - v11 > v20 );
LABEL_26:
    v11 = *(_DWORD *)(a2 + 24);
    v12 = *(_DWORD *)(a2 + 24);
LABEL_27:
    if ( !a5 )
      return *(_DWORD *)a2 + 4 * (a3 - v12);
    goto LABEL_18;
  }
LABEL_16:
  if ( !a5 )
  {
    v18 = *a1;
    *(_DWORD *)(v18 + 20) = 23;
    (*(void (__fastcall **)(int, unsigned int))v18)(v5, v10);
    v12 = *(_DWORD *)(a2 + 24);
    return *(_DWORD *)a2 + 4 * (a3 - v12);
  }
  v11 = *(_DWORD *)(a2 + 24);
LABEL_18:
  *(_BYTE *)(a2 + 33) = 1;
  v12 = v11;
  return *(_DWORD *)a2 + 4 * (a3 - v12);
}
