int __usercall sub_6F89F080@<eax>(int a1@<eax>, int a2@<edx>, int *a3@<ecx>, int a4)
{
  int *v4; // ebp@1
  int v5; // edi@1
  int v6; // ebx@1
  int v7; // eax@3
  unsigned int v8; // ecx@5
  signed int v9; // ecx@6
  int v10; // eax@9
  int v11; // edx@9
  int v12; // eax@10
  int v13; // ecx@10
  int v14; // edx@13
  int result; // eax@14
  int v16; // eax@15
  int v17; // eax@17
  char v18; // dl@18
  signed int v19; // eax@18
  int v20; // edx@20
  int v21; // eax@21
  int v22; // eax@21
  int v23; // eax@28
  int v24; // eax@29
  int v25; // eax@30
  int v26; // [sp+1Ch] [bp-20h]@9

  v4 = a3;
  v5 = a2;
  v6 = a1;
  if ( !a4 || *(_DWORD *)(a4 + 8) )
  {
LABEL_9:
    v10 = *(_DWORD *)(v6 + 276);
    *(_DWORD *)(v6 + 276) = 0;
    v26 = v10;
    sub_6F89F3B0(v6, a2, (int *)a4, 0);
    v11 = *(_DWORD *)(v6 + 256);
    if ( v11 == 255 )
      goto LABEL_15;
LABEL_10:
    v12 = v11 + 1;
    *(_DWORD *)(v6 + 256) = v11 + 1;
    *(_BYTE *)(v6 + v11) = 40;
    *(_BYTE *)(v6 + 260) = 40;
    v13 = *v4;
    if ( !*v4 )
      goto LABEL_12;
    goto LABEL_11;
  }
  v7 = a4;
  while ( 1 )
  {
    v8 = **(_DWORD **)(v7 + 4) - 25;
    if ( v8 <= 0x12 )
    {
      v9 = 1 << v8;
      if ( v9 & 0x43107 )
      {
        v18 = *(_BYTE *)(v6 + 260);
        v19 = *(_DWORD *)(v6 + 256);
        goto LABEL_25;
      }
      if ( BYTE1(v9) & 0xE )
        break;
    }
    v7 = *(_DWORD *)v7;
    if ( !v7 || *(_DWORD *)(v7 + 8) )
      goto LABEL_9;
  }
  v18 = *(_BYTE *)(v6 + 260);
  v19 = *(_DWORD *)(v6 + 256);
  if ( (*(_BYTE *)(v6 + 260) & 0xFD) == 40 )
    goto LABEL_19;
LABEL_25:
  if ( v18 != 32 )
  {
    if ( v19 == 255 )
    {
      v24 = *(_DWORD *)(v6 + 268);
      *(_BYTE *)(v6 + 255) = 0;
      (*(void (__cdecl **)(int, signed int, int))(v6 + 264))(v6, 255, v24);
      *(_BYTE *)v6 = 32;
      v19 = 1;
      ++*(_DWORD *)(v6 + 296);
    }
    else
    {
      *(_DWORD *)(v6 + 256) = v19 + 1;
      *(_BYTE *)(v6 + v19++) = 32;
      *(_BYTE *)(v6 + 260) = 32;
      if ( v19 == 255 )
        goto LABEL_28;
    }
LABEL_20:
    v20 = v19 + 1;
    goto LABEL_21;
  }
LABEL_19:
  if ( v19 != 255 )
    goto LABEL_20;
LABEL_28:
  v23 = *(_DWORD *)(v6 + 268);
  *(_BYTE *)(v6 + 255) = 0;
  (*(void (__cdecl **)(int, signed int, int))(v6 + 264))(v6, 255, v23);
  ++*(_DWORD *)(v6 + 296);
  v20 = 1;
  v19 = 0;
LABEL_21:
  *(_DWORD *)(v6 + 256) = v20;
  *(_BYTE *)(v6 + v19) = 40;
  v21 = *(_DWORD *)(v6 + 276);
  *(_BYTE *)(v6 + 260) = 40;
  *(_DWORD *)(v6 + 276) = 0;
  v26 = v21;
  sub_6F89F3B0(v6, v5, (int *)a4, 0);
  v22 = *(_DWORD *)(v6 + 256);
  if ( v22 == 255 )
  {
    v25 = *(_DWORD *)(v6 + 268);
    *(_BYTE *)(v6 + 255) = 0;
    (*(void (__cdecl **)(int, signed int, int))(v6 + 264))(v6, 255, v25);
    *(_BYTE *)v6 = 41;
    v11 = 1;
    ++*(_DWORD *)(v6 + 296);
    goto LABEL_10;
  }
  v11 = v22 + 1;
  *(_DWORD *)(v6 + 256) = v22 + 1;
  *(_BYTE *)(v6 + v22) = 41;
  *(_BYTE *)(v6 + 260) = 41;
  if ( v22 != 254 )
    goto LABEL_10;
LABEL_15:
  v16 = *(_DWORD *)(v6 + 268);
  *(_BYTE *)(v6 + 255) = 0;
  (*(void (__cdecl **)(int, signed int, int))(v6 + 264))(v6, 255, v16);
  *(_BYTE *)v6 = 40;
  *(_BYTE *)(v6 + 260) = 40;
  v13 = *v4;
  ++*(_DWORD *)(v6 + 296);
  *(_DWORD *)(v6 + 256) = 1;
  if ( !v13 )
  {
    v12 = 1;
    goto LABEL_13;
  }
LABEL_11:
  sub_6F899DD0(v6, v5, v13);
  v12 = *(_DWORD *)(v6 + 256);
LABEL_12:
  if ( v12 == 255 )
  {
    v17 = *(_DWORD *)(v6 + 268);
    *(_BYTE *)(v6 + 255) = 0;
    (*(void (__cdecl **)(int, signed int, int))(v6 + 264))(v6, 255, v17);
    ++*(_DWORD *)(v6 + 296);
    v14 = 1;
    v12 = 0;
    goto LABEL_14;
  }
LABEL_13:
  v14 = v12 + 1;
LABEL_14:
  *(_DWORD *)(v6 + 256) = v14;
  *(_BYTE *)(v6 + v12) = 41;
  *(_BYTE *)(v6 + 260) = 41;
  sub_6F89F3B0(v6, v5, (int *)a4, 1);
  result = v26;
  *(_DWORD *)(v6 + 276) = v26;
  return result;
}
