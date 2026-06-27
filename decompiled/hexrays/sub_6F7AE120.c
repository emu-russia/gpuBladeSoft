signed int __usercall sub_6F7AE120@<eax>(int a1@<eax>, int a2@<edx>)
{
  int v2; // ebx@1
  int v3; // ebp@1
  int v4; // esi@1
  int v5; // edi@1
  int v6; // ebp@2
  __int16 v7; // dx@3
  __int16 v8; // ax@3
  int v9; // ebp@3
  int v10; // eax@3
  unsigned __int16 v11; // di@3
  unsigned __int16 v12; // dx@3
  signed int result; // eax@6
  int v14; // ecx@7
  bool v15; // zf@7
  int v16; // edx@7
  int v17; // ecx@7
  __int16 v18; // ax@10
  int v19; // ecx@10
  __int16 v20; // dx@10
  int v21; // ebp@10
  unsigned __int16 v22; // di@10
  unsigned __int16 v23; // ax@10
  int v24; // [sp+2Ch] [bp-30h]@1
  __int16 v25; // [sp+38h] [bp-24h]@1
  __int16 v26; // [sp+3Ah] [bp-22h]@1
  unsigned __int16 v27; // [sp+3Ch] [bp-20h]@1
  unsigned __int16 v28; // [sp+3Eh] [bp-1Eh]@1

  v2 = a1;
  v3 = a2;
  v4 = *(_DWORD *)(a1 + 24);
  v5 = *(_DWORD *)a1;
  v26 = 0;
  v27 = 0;
  v25 = 0;
  v28 = 0;
  v24 = sub_6F7720A0(v4);
  (*(void (__cdecl **)(int, _DWORD, int, __int16 *, __int16 *))(*(_DWORD *)(v5 + 532) + 112))(
    v5,
    0,
    v3,
    &v25,
    (__int16 *)&v27);
  if ( *(_BYTE *)(v5 + 292) )
  {
    (*(void (__cdecl **)(int, signed int, int, __int16 *, __int16 *))(*(_DWORD *)(v5 + 532) + 112))(
      v5,
      1,
      v3,
      &v26,
      (__int16 *)&v28);
  }
  else
  {
    v6 = *(_DWORD *)(v2 + 48);
    if ( *(_WORD *)(v5 + 364) == -1 )
    {
      v18 = *(_WORD *)(v5 + 220);
      v19 = *(_WORD *)(v5 + 222);
      v20 = *(_WORD *)(v5 + 220) - v6;
      v21 = v18;
      v22 = *(_WORD *)(v5 + 222) - v18;
      v23 = v18 - v19;
      v26 = v20;
      if ( v21 - v19 < 0 )
        v23 = v22;
      v28 = v23;
    }
    else
    {
      v7 = *(_WORD *)(v5 + 434);
      v8 = *(_WORD *)(v5 + 434) - v6;
      v9 = *(_WORD *)(v5 + 434);
      v26 = v8;
      v10 = *(_WORD *)(v5 + 436);
      v11 = *(_WORD *)(v5 + 436) - v7;
      v12 = v7 - v10;
      if ( v9 - v10 < 0 )
        v12 = v11;
      v28 = v12;
    }
  }
  result = sub_6F771FF0(v4, v24);
  if ( !result )
  {
    v14 = v26;
    v15 = *(_BYTE *)(v2 + 64) == 0;
    *(_DWORD *)(v2 + 52) = v25;
    *(_DWORD *)(v2 + 176) = v14;
    v16 = v27;
    v17 = v28;
    *(_DWORD *)(v2 + 56) = v27;
    *(_DWORD *)(v2 + 180) = v17;
    if ( v15 )
    {
      *(_BYTE *)(v2 + 64) = 1;
      *(_DWORD *)(v2 + 60) = v16;
    }
  }
  return result;
}
