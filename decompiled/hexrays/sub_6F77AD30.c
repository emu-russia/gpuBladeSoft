signed int __usercall sub_6F77AD30@<eax>(int a1@<eax>, int a2@<edx>, char a3@<cl>)
{
  unsigned int v3; // ebp@1
  int v4; // esi@1
  int v5; // ebx@1
  int v6; // edi@1
  unsigned int v7; // edx@1
  unsigned int v8; // eax@1
  unsigned __int16 v9; // ax@3
  unsigned __int16 v10; // cx@3
  signed int result; // eax@3
  unsigned __int8 v12; // al@7
  int v13; // edx@11
  int v14; // ebp@11
  signed int v15; // eax@12
  int v16; // edx@13
  int v17; // eax@14
  int v18; // eax@19
  char v19; // [sp+18h] [bp-34h]@3
  unsigned __int16 v20; // [sp+1Eh] [bp-2Eh]@3
  int v21; // [sp+28h] [bp-24h]@3
  unsigned __int8 v22; // [sp+2Ch] [bp-20h]@12
  unsigned __int8 v23; // [sp+2Dh] [bp-1Fh]@15
  unsigned __int8 v24; // [sp+2Eh] [bp-1Eh]@16
  unsigned __int8 v25; // [sp+2Fh] [bp-1Dh]@17

  v3 = 0;
  v4 = a2;
  v5 = a1;
  v6 = *(_DWORD *)(a2 + 28);
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 28) = 0;
  v7 = (a1 + 4) & 0xFFFFFFFC;
  v8 = (a1 - v7 + 32) & 0xFFFFFFFC;
  do
  {
    *(_DWORD *)(v7 + v3) = 0;
    v3 += 4;
  }
  while ( v3 < v8 );
  *(_DWORD *)v5 = v4;
  v19 = a3;
  *(_DWORD *)(v5 + 4) = sub_6F7720A0(v4);
  v9 = sub_6F772620(v4, &v21);
  v10 = v9;
  v20 = v9;
  result = v21;
  if ( !v21 && v10 )
  {
    v12 = sub_6F7725A0(v4, &v21);
    if ( v21 )
      goto LABEL_10;
    if ( (unsigned __int8)(v12 - 1) > 3u )
      goto LABEL_25;
    *(_BYTE *)(v5 + 12) = v12;
    v13 = *(_DWORD *)(v5 + 4);
    *(_DWORD *)(v5 + 8) = v20;
    v14 = v12 * (v20 + 1);
    *(_DWORD *)(v5 + 16) = v14 + v13 + 3;
    v21 = sub_6F772040(v4, v14 - v12);
    if ( v21 )
      goto LABEL_10;
    v15 = sub_6F7720B0(*(_DWORD *)v5, &v22, *(_BYTE *)(v5 + 12));
    if ( v15 )
    {
      v21 = v15;
      goto LABEL_10;
    }
    v16 = *(_BYTE *)(v5 + 12);
    if ( !*(_BYTE *)(v5 + 12) )
      goto LABEL_25;
    v17 = v22;
    if ( v16 != 1 )
    {
      v17 = v23 | (v22 << 8);
      if ( v16 != 2 )
      {
        v17 = v24 | (v17 << 8);
        if ( v16 != 3 )
          v17 = v25 | (v17 << 8);
      }
    }
    v21 = 0;
    if ( !v17 )
    {
LABEL_25:
      v21 = 8;
      goto LABEL_10;
    }
    v18 = v17 - 1;
    *(_DWORD *)(v5 + 20) = v18;
    if ( v19 )
    {
      result = sub_6F772240(v4, v18, (int *)(v5 + 28));
      v21 = result;
    }
    else
    {
      result = sub_6F772040(v4, v18);
      v21 = result;
    }
  }
  if ( result )
  {
LABEL_10:
    sub_6F773D90(v6, *(_DWORD *)(v5 + 24));
    *(_DWORD *)(v5 + 24) = 0;
    result = v21;
  }
  return result;
}
