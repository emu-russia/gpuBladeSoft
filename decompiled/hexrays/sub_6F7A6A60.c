__int16 __usercall sub_6F7A6A60@<ax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>, signed int a4, __int16 a5)
{
  int v5; // esi@1
  int v6; // ecx@3
  int v7; // edi@3
  int v8; // ebx@5
  signed int v9; // eax@5
  int v10; // ebp@5
  void (__cdecl *v11)(_DWORD, signed int, int, _DWORD); // edx@7
  int v12; // ST1C_4@8
  int v14; // [sp+1Ch] [bp-30h]@5
  unsigned __int16 v15; // [sp+26h] [bp-26h]@24

  v5 = ((a4 >> 31) ^ (a4 >> 9)) - (a4 >> 31);
  if ( *(_BYTE *)(a1 + 1060) & 2 )
  {
    v5 &= 0x1FFu;
    if ( v5 > 256 )
    {
      v6 = *(_DWORD *)(a1 + 80) + a3;
      v5 = 512 - v5;
      v7 = a2 + *(_DWORD *)(a1 + 72);
      if ( v7 > 32766 )
      {
        v7 = 0x7FFF;
        goto LABEL_5;
      }
      goto LABEL_16;
    }
    if ( v5 == 256 )
    {
      v6 = *(_DWORD *)(a1 + 80) + a3;
      v5 = 255;
      v7 = a2 + *(_DWORD *)(a1 + 72);
      if ( v7 >= 0x7FFF )
        v7 = 0x7FFF;
      goto LABEL_5;
    }
  }
  else if ( v5 > 255 )
  {
    v5 = 255;
  }
  v6 = *(_DWORD *)(a1 + 80) + a3;
  v7 = a2 + *(_DWORD *)(a1 + 72);
  if ( v7 >= 0x7FFF )
    v7 = 0x7FFF;
LABEL_16:
  if ( !v5 )
    return a1;
LABEL_5:
  v8 = a1;
  v9 = *(_DWORD *)(a1 + 1296);
  v10 = v8 + 1104;
  v14 = v8 + 1104 + 6 * v9 - 6;
  if ( v9 > 0 )
  {
    if ( *(_DWORD *)(v8 + 1308) != v6 )
      goto LABEL_32;
    v15 = *(_WORD *)(v14 + 2);
    if ( v15 + *(_WORD *)v14 == v7 && *(_BYTE *)(v14 + 4) == v5 )
    {
      LOWORD(a1) = a5 + v15;
      *(_WORD *)(v14 + 2) = a5 + v15;
      return a1;
    }
    if ( v9 > 31 )
    {
LABEL_32:
      v11 = *(void (__cdecl **)(_DWORD, signed int, int, _DWORD))(v8 + 1300);
      if ( v11 )
      {
        v12 = v6;
        v11(*(_DWORD *)(v8 + 1308), v9, v8 + 1104, *(_DWORD *)(v8 + 1304));
        v6 = v12;
      }
      goto LABEL_9;
    }
LABEL_23:
    v10 = v8 + 1104 + 6 * v9;
    goto LABEL_10;
  }
  if ( *(_DWORD *)(v8 + 1308) == v6 )
    goto LABEL_23;
LABEL_9:
  *(_DWORD *)(v8 + 1296) = 0;
  *(_DWORD *)(v8 + 1308) = v6;
LABEL_10:
  *(_WORD *)v10 = v7;
  *(_WORD *)(v10 + 2) = a5;
  LOWORD(a1) = v5;
  *(_BYTE *)(v10 + 4) = v5;
  ++*(_DWORD *)(v8 + 1296);
  return a1;
}
