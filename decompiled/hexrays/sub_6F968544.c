char __usercall sub_6F968544@<al>(int a1@<eax>, int a2@<edx>, signed int a3@<ecx>, int a4, signed int a5, signed int a6, signed int a7)
{
  int v7; // ebx@1
  signed int v8; // edi@3
  int v9; // eax@4
  signed int v10; // ebp@4
  int v11; // ecx@6
  signed int v12; // edx@7
  int v13; // esi@7
  int v14; // eax@11
  int v15; // esi@16
  int v17; // ebp@19
  int v18; // edx@19
  signed int v19; // eax@19
  signed int v20; // edi@20
  int v21; // edi@21
  int v22; // ecx@21
  int v23; // eax@23
  bool v24; // sf@23
  int v25; // [sp+10h] [bp-2Ch]@1
  int v26; // [sp+14h] [bp-28h]@1
  signed int v27; // [sp+18h] [bp-24h]@10
  signed int v28; // [sp+18h] [bp-24h]@21

  v7 = a1;
  v26 = a2;
  v25 = a5 - a3;
  if ( a3 > a7 || a5 < a6 || v25 <= 0 )
    return 0;
  v8 = a4 - a2;
  if ( a3 >= a6 )
  {
    v10 = a3 >> *(_DWORD *)a1;
    v9 = (*(_DWORD *)(a1 + 4) - 1) & a3;
  }
  else
  {
    v26 = sub_6F7C9420(a4 - a2, a6 - a3, v25) + a2;
    v9 = 0;
    v10 = a6 >> *(_DWORD *)v7;
  }
  v11 = *(_DWORD *)v7;
  if ( a5 <= a7 )
  {
    v13 = a5 & (*(_DWORD *)(v7 + 4) - 1);
    v12 = a5 >> v11;
  }
  else
  {
    v12 = a7 >> v11;
    v13 = 0;
  }
  if ( v9 <= 0 )
  {
    if ( *(_BYTE *)(v7 + 87) )
      *(_DWORD *)(v7 + 40) -= 4;
  }
  else
  {
    v27 = v12;
    if ( v10 == v12 )
      return 0;
    ++v10;
    v14 = sub_6F7C9420(v8, *(_DWORD *)(v7 + 4) - v9, v25);
    v12 = v27;
    v26 += v14;
  }
  *(_BYTE *)(v7 + 87) = v13 == 0;
  if ( *(_BYTE *)(v7 + 86) )
  {
    *(_DWORD *)(*(_DWORD *)(v7 + 88) + 20) = v10;
    *(_BYTE *)(v7 + 86) = 0;
  }
  v15 = v12 - v10 + 1;
  if ( *(_DWORD *)(v7 + 36) <= (unsigned int)(*(_DWORD *)(v7 + 40) + 4 * v15) )
  {
    *(_DWORD *)(v7 + 44) = 98;
    return 1;
  }
  if ( v8 <= 0 )
  {
    v20 = -v8;
    v17 = -sub_6F7C95C0(*(_DWORD *)(v7 + 4), v20, v25);
    v18 = v20 * *(_DWORD *)(v7 + 4) % v25;
    v19 = -1;
  }
  else
  {
    v17 = sub_6F7C95C0(*(_DWORD *)(v7 + 4), v8, v25);
    v18 = v8 * *(_DWORD *)(v7 + 4) % v25;
    v19 = 1;
  }
  v21 = *(_DWORD *)(v7 + 40);
  v28 = v19;
  v22 = -v25;
  while ( v15 > 0 )
  {
    v21 += 4;
    v23 = v26;
    v26 += v17;
    v24 = v18 + v22 < 0;
    v22 += v18;
    *(_DWORD *)(v21 - 4) = v23;
    if ( !v24 )
    {
      v22 -= v25;
      v26 += v28;
    }
    --v15;
  }
  *(_DWORD *)(v7 + 40) = v21;
  return 0;
}
