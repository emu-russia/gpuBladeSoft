signed int __usercall sub_6F78BC30@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>)
{
  int v3; // ebp@1
  int v4; // edi@1
  int v5; // esi@2
  int v6; // ebx@2
  signed int v7; // ebx@6
  signed int result; // eax@7
  unsigned int v9; // ebx@8
  unsigned int v10; // ecx@8
  int v11; // esi@10
  int v12; // edi@10
  int v13; // eax@11
  int v14; // ebp@11
  int v15; // ecx@16
  void *v16; // eax@16
  int v17; // eax@22
  void *v18; // eax@24
  int v19; // [sp+8h] [bp-44h]@13
  int v20; // [sp+1Ch] [bp-30h]@13
  int v21; // [sp+2Ch] [bp-20h]@11

  v3 = *(_DWORD *)(a2 + 188);
  v4 = *(_DWORD *)(a2 + 192);
  if ( !v3 )
    return 3;
  v5 = 0;
  v6 = v4 + 16;
  if ( a3 != *(_DWORD *)v4 )
  {
    while ( v3 != ++v5 )
    {
      v4 = v6;
      v6 += 16;
      if ( a3 == *(_DWORD *)(v6 - 16) )
        goto LABEL_8;
    }
    return 3;
  }
LABEL_8:
  v9 = *(_DWORD *)(a1 + 8);
  v10 = *(_DWORD *)(v4 + 12);
  if ( v9 > v10 )
    return 83;
  v11 = a2;
  v12 = a1;
  if ( sub_6F772040(a1, v10 - v9) )
    return 83;
  v21 = 0;
  v13 = sub_6F772860(v12, &v21);
  v7 = v21;
  v14 = v13;
  if ( v21 || v13 & 0xFFFFFE00 )
    return v7;
  v20 = v13 & 4;
  v19 = v11 + 196;
  if ( v13 & 4 )
  {
    result = sub_6F7728E0(v12, (int)&unk_6FB58300, v19);
    v21 = result;
    if ( result )
      return result;
    result = sub_6F7728E0(v12, (int)&unk_6FB583C0, v11 + 216);
    v21 = result;
    if ( result )
      return result;
    v15 = v11 + 232;
    v16 = &unk_6FB583C0;
  }
  else
  {
    result = sub_6F7728E0(v12, (int)&unk_6FB58340, v19);
    v21 = result;
    if ( result )
      return result;
    result = sub_6F7728E0(v12, (int)&unk_6FB583E0, v11 + 216);
    v21 = result;
    if ( result )
      return result;
    v15 = v11 + 232;
    v16 = &unk_6FB583E0;
  }
  result = sub_6F7728E0(v12, (int)v16, v15);
  v21 = result;
  if ( !result )
  {
    v17 = v14;
    LOBYTE(v17) = 0;
    if ( v17 == 256 )
    {
      v18 = &unk_6FB583E0;
      if ( v20 )
        v18 = &unk_6FB583C0;
      v21 = sub_6F7728E0(v12, (int)v18, v11 + 248);
      v7 = v21;
      if ( !v21 )
        v7 = sub_6F78BA10(v12, (unsigned __int8)v14, v11 + 264);
    }
    else
    {
      *(_DWORD *)(v11 + 248) = *(_DWORD *)(v11 + 216);
      *(_DWORD *)(v11 + 252) = *(_DWORD *)(v11 + 220);
      *(_DWORD *)(v11 + 256) = *(_DWORD *)(v11 + 224);
      *(_DWORD *)(v11 + 260) = *(_DWORD *)(v11 + 228);
      *(_DWORD *)(v11 + 264) = *(_DWORD *)(v11 + 232);
      *(_DWORD *)(v11 + 268) = *(_DWORD *)(v11 + 236);
      *(_DWORD *)(v11 + 272) = *(_DWORD *)(v11 + 240);
      *(_DWORD *)(v11 + 276) = *(_DWORD *)(v11 + 244);
    }
    return v7;
  }
  return result;
}
