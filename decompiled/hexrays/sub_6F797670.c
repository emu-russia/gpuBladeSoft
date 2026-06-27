int __cdecl sub_6F797670(int a1, int a2, char **a3)
{
  char *v3; // esi@1
  int result; // eax@1
  int v5; // eax@2
  int v6; // ecx@2
  _WORD *v7; // edx@2
  int v8; // edi@2
  int v9; // eax@2
  int v10; // edi@3
  int v11; // eax@5
  int v12; // ecx@5
  _WORD *v13; // edx@5
  int v14; // edi@5
  int v15; // eax@5
  int v16; // edi@6
  _WORD *v17; // ecx@9
  signed __int16 v18; // ax@9
  unsigned int v19; // edi@9
  _WORD *v20; // ecx@14
  unsigned int v21; // edi@14
  _WORD *v22; // ecx@19
  unsigned int v23; // edi@19
  _WORD *v24; // ecx@24
  unsigned int v25; // edi@24
  signed int v26; // eax@28
  int v27; // eax@30
  int v28; // [sp+1Ch] [bp-20h]@1

  v3 = (char *)sub_6F773A50(a1, 2496, &v28);
  result = v28;
  if ( !v28 )
  {
    v5 = *(_WORD *)(a2 + 120);
    *(_DWORD *)v3 = a1;
    v6 = (int)(v3 + 224);
    v7 = (_WORD *)(a2 + 128);
    *((_DWORD *)v3 + 53) = v5;
    v8 = *(_BYTE *)(a2 + 124);
    v9 = *(_BYTE *)(a2 + 124);
    if ( *(_BYTE *)(a2 + 124) )
    {
      do
      {
        v10 = *v7;
        v6 += 12;
        ++v7;
        *(_DWORD *)(v6 - 12) = v10;
        --v9;
      }
      while ( v9 );
      v8 = *(_BYTE *)(a2 + 124);
    }
    v11 = *(_WORD *)(a2 + 122);
    v12 = (int)(v3 + 20);
    *((_DWORD *)v3 + 52) = v8 + 1;
    v13 = (_WORD *)(a2 + 154);
    *((_DWORD *)v3 + 2) = v11;
    v14 = *(_BYTE *)(a2 + 125);
    v15 = *(_BYTE *)(a2 + 125);
    if ( *(_BYTE *)(a2 + 125) )
    {
      do
      {
        v16 = *v13;
        v12 += 12;
        ++v13;
        *(_DWORD *)(v12 - 12) = v16;
        --v15;
      }
      while ( v15 );
      v14 = *(_BYTE *)(a2 + 125);
    }
    *((_DWORD *)v3 + 1) = v14 + 1;
    sub_6F796F30((int)(v3 + 412), *(_BYTE *)(a2 + 8), a2 + 12, *(_BYTE *)(a2 + 9), a2 + 40, *(_DWORD *)(a2 + 116), 0);
    sub_6F796F30((int)(v3 + 412), *(_BYTE *)(a2 + 10), a2 + 60, *(_BYTE *)(a2 + 11), a2 + 88, *(_DWORD *)(a2 + 116), 1);
    if ( *(_BYTE *)(a2 + 8) )
    {
      v17 = (_WORD *)(a2 + 14);
      v18 = 1;
      v19 = 0;
      do
      {
        if ( v18 < (signed __int16)(*v17 - *(v17 - 1)) )
          v18 = *v17 - *(v17 - 1);
        v19 += 2;
        v17 += 2;
      }
      while ( *(_BYTE *)(a2 + 8) > v19 );
    }
    else
    {
      v18 = 1;
    }
    if ( *(_BYTE *)(a2 + 9) )
    {
      v20 = (_WORD *)(a2 + 42);
      v21 = 0;
      do
      {
        if ( v18 < (signed __int16)(*v20 - *(v20 - 1)) )
          v18 = *v20 - *(v20 - 1);
        v21 += 2;
        v20 += 2;
      }
      while ( *(_BYTE *)(a2 + 9) > v21 );
    }
    if ( *(_BYTE *)(a2 + 10) )
    {
      v22 = (_WORD *)(a2 + 62);
      v23 = 0;
      do
      {
        if ( v18 < (signed __int16)(*v22 - *(v22 - 1)) )
          v18 = *v22 - *(v22 - 1);
        v23 += 2;
        v22 += 2;
      }
      while ( *(_BYTE *)(a2 + 10) > v23 );
    }
    if ( *(_BYTE *)(a2 + 11) )
    {
      v24 = (_WORD *)(a2 + 90);
      v25 = 0;
      do
      {
        if ( v18 < (signed __int16)(*v24 - *(v24 - 1)) )
          v18 = *v24 - *(v24 - 1);
        v25 += 2;
        v24 += 2;
      }
      while ( *(_BYTE *)(a2 + 11) > v25 );
    }
    v26 = sub_6F7C9760(1000, v18);
    if ( *(_DWORD *)(a2 + 108) <= v26 )
      v26 = *(_DWORD *)(a2 + 108);
    *((_DWORD *)v3 + 619) = v26;
    *((_DWORD *)v3 + 620) = *(_DWORD *)(a2 + 112);
    v27 = *(_DWORD *)(a2 + 116);
    *((_DWORD *)v3 + 50) = 0;
    *((_DWORD *)v3 + 51) = 0;
    *((_DWORD *)v3 + 101) = 0;
    *((_DWORD *)v3 + 102) = 0;
    *((_DWORD *)v3 + 622) = v27;
    result = v28;
  }
  *a3 = v3;
  return result;
}
