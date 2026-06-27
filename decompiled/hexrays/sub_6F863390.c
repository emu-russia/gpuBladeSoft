int __usercall sub_6F863390@<eax>(int result@<eax>, int a2@<edx>, unsigned int a3@<ecx>, int a4)
{
  unsigned int v4; // ebx@1
  int v5; // edx@3
  char v6; // cl@12
  int v7; // ecx@15
  char v8; // ST1F_1@20
  int v9; // ecx@21
  int v10; // ST18_4@21
  int v11; // ST14_4@21
  int v12; // ecx@22
  int v13; // ecx@22
  unsigned __int8 v14; // cl@23
  int v15; // ecx@29
  int v16; // [sp+14h] [bp-14h]@22
  int v17; // [sp+18h] [bp-10h]@22
  unsigned __int8 v18; // [sp+1Fh] [bp-9h]@23

  v4 = a3 + a4;
  if ( a3 <= 0xD )
  {
    if ( a3 <= 5 || *(_BYTE *)a2 != 74 || *(_BYTE *)(a2 + 1) != 70 )
      goto LABEL_3;
    goto LABEL_9;
  }
  if ( *(_BYTE *)a2 != 74 || *(_BYTE *)(a2 + 1) != 70 )
    goto LABEL_3;
  if ( *(_BYTE *)(a2 + 2) != 73 || *(_BYTE *)(a2 + 3) != 70 || *(_BYTE *)(a2 + 4) )
  {
LABEL_9:
    if ( *(_BYTE *)(a2 + 2) == 88 && *(_BYTE *)(a2 + 3) == 88 && !*(_BYTE *)(a2 + 4) )
    {
      v6 = *(_BYTE *)(a2 + 5);
      if ( v6 == 17 )
      {
        v5 = *(_DWORD *)result;
        *(_DWORD *)(*(_DWORD *)result + 20) = 111;
        goto LABEL_4;
      }
      if ( v6 == 19 )
      {
        v5 = *(_DWORD *)result;
        *(_DWORD *)(*(_DWORD *)result + 20) = 112;
        goto LABEL_4;
      }
      if ( v6 == 16 )
      {
        v5 = *(_DWORD *)result;
        *(_DWORD *)(*(_DWORD *)result + 20) = 110;
        goto LABEL_4;
      }
      v7 = *(_DWORD *)result;
      *(_DWORD *)(v7 + 20) = 91;
      *(_DWORD *)(v7 + 24) = *(_BYTE *)(a2 + 5);
      *(_DWORD *)(*(_DWORD *)result + 28) = v4;
      return (*(int (__cdecl **)(int, signed int))(*(_DWORD *)result + 4))(result, 1);
    }
LABEL_3:
    v5 = *(_DWORD *)result;
    *(_DWORD *)(*(_DWORD *)result + 20) = 79;
LABEL_4:
    *(_DWORD *)(v5 + 24) = v4;
    return (*(int (__cdecl **)(int, signed int))(*(_DWORD *)result + 4))(result, 1);
  }
  *(_BYTE *)(result + 256) = 1;
  v8 = *(_BYTE *)(a2 + 5);
  *(_BYTE *)(result + 257) = v8;
  *(_BYTE *)(result + 258) = *(_BYTE *)(a2 + 6);
  *(_BYTE *)(result + 259) = *(_BYTE *)(a2 + 7);
  *(_WORD *)(result + 260) = *(_BYTE *)(a2 + 9) + (*(_BYTE *)(a2 + 8) << 8);
  *(_WORD *)(result + 262) = *(_BYTE *)(a2 + 11) + (*(_BYTE *)(a2 + 10) << 8);
  if ( v8 != 1 )
  {
    v9 = *(_DWORD *)result;
    *(_DWORD *)(v9 + 20) = 122;
    *(_DWORD *)(v9 + 24) = *(_BYTE *)(result + 257);
    *(_DWORD *)(*(_DWORD *)result + 28) = *(_BYTE *)(result + 258);
    v10 = result;
    v11 = a2;
    (*(void (__cdecl **)(int, signed int))(*(_DWORD *)result + 4))(result, -1);
    a2 = v11;
    result = v10;
  }
  v12 = *(_DWORD *)result;
  *(_DWORD *)(v12 + 24) = *(_BYTE *)(result + 257);
  *(_DWORD *)(v12 + 28) = *(_BYTE *)(result + 258);
  *(_DWORD *)(v12 + 32) = *(_WORD *)(result + 260);
  *(_DWORD *)(v12 + 36) = *(_WORD *)(result + 262);
  *(_DWORD *)(v12 + 40) = *(_BYTE *)(result + 259);
  v13 = *(_DWORD *)result;
  *(_DWORD *)(v13 + 20) = 89;
  v17 = result;
  v16 = a2;
  (*(void (__cdecl **)(int, signed int))(v13 + 4))(result, 1);
  result = v17;
  if ( __PAIR__(*(_BYTE *)(v16 + 13), *(_BYTE *)(v16 + 12)) )
  {
    v15 = *(_DWORD *)v17;
    *(_DWORD *)(v15 + 20) = 92;
    *(_DWORD *)(v15 + 24) = *(_BYTE *)(v16 + 12);
    *(_DWORD *)(*(_DWORD *)v17 + 28) = *(_BYTE *)(v16 + 13);
    (*(void (__cdecl **)(int, signed int))(*(_DWORD *)v17 + 4))(v17, 1);
    v18 = *(_BYTE *)(v16 + 12);
    v14 = *(_BYTE *)(v16 + 13);
    result = v17;
  }
  else
  {
    v14 = 0;
    v18 = 0;
  }
  v4 -= 14;
  if ( 3 * v14 * v18 != v4 )
  {
    v5 = *(_DWORD *)result;
    *(_DWORD *)(*(_DWORD *)result + 20) = 90;
    goto LABEL_4;
  }
  return result;
}
