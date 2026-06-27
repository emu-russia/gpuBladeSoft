int __usercall sub_6F89F770@<eax>(unsigned int a1@<eax>, int a2@<edx>, int *a3@<ecx>, int *a4)
{
  int *v4; // edi@1
  int v5; // esi@1
  unsigned int v6; // ebx@1
  int *v7; // eax@1
  int v8; // eax@5
  int v9; // edx@7
  int result; // eax@9
  int v11; // ecx@9
  int v12; // edx@12
  int v13; // eax@14
  int v14; // eax@16
  int v15; // eax@19
  signed int v16; // eax@20
  void *v17; // ebp@20
  char i; // dl@20
  signed int v19; // ecx@21
  int v20; // eax@25
  char v21; // ST1F_1@25
  int v22; // edx@26
  int v23; // eax@28

  v4 = a3;
  v5 = a2;
  v6 = a1;
  v7 = a4;
  if ( !a4 )
  {
LABEL_5:
    v8 = *(_DWORD *)(v6 + 256);
    goto LABEL_6;
  }
  while ( v7[2] )
  {
    v7 = (int *)*v7;
    if ( !v7 )
    {
      sub_6F89F3B0(v6, a2, a4, 0);
      goto LABEL_5;
    }
  }
  if ( *(_DWORD *)v7[1] != 42 )
  {
    v16 = *(_DWORD *)(v6 + 256);
    v17 = &unk_6FBA5148;
    for ( i = 32; ; i = *(_BYTE *)v17 )
    {
      if ( v16 == 255 )
      {
        v20 = *(_DWORD *)(v6 + 268);
        v21 = i;
        *(_BYTE *)(v6 + 255) = 0;
        (*(void (__cdecl **)(unsigned int, signed int, int))(v6 + 264))(v6, 255, v20);
        ++*(_DWORD *)(v6 + 296);
        v16 = 1;
        v19 = 0;
        i = v21;
      }
      else
      {
        v19 = v16++;
      }
      *(_DWORD *)(v6 + 256) = v16;
      v17 = (char *)v17 + 1;
      *(_BYTE *)(v6 + v19) = i;
      *(_BYTE *)(v6 + 260) = i;
      if ( &unk_6FBA514A == v17 )
        break;
    }
    sub_6F89F3B0(v6, v5, a4, 0);
    v22 = *(_DWORD *)(v6 + 256);
    if ( v22 == 255 )
    {
      v23 = *(_DWORD *)(v6 + 268);
      *(_BYTE *)(v6 + 255) = 0;
      (*(void (__cdecl **)(unsigned int, signed int, int))(v6 + 264))(v6, 255, v23);
      *(_BYTE *)v6 = 41;
      v8 = 1;
      ++*(_DWORD *)(v6 + 296);
LABEL_7:
      v9 = v8 + 1;
      *(_DWORD *)(v6 + 256) = v8 + 1;
      *(_BYTE *)(v6 + v8) = 32;
      *(_BYTE *)(v6 + 260) = 32;
      goto LABEL_8;
    }
    v8 = v22 + 1;
    *(_DWORD *)(v6 + 256) = v22 + 1;
    *(_BYTE *)(v6 + v22) = 41;
    *(_BYTE *)(v6 + 260) = 41;
LABEL_6:
    if ( v8 == 255 )
    {
      v15 = *(_DWORD *)(v6 + 268);
      *(_BYTE *)(v6 + 255) = 0;
      (*(void (__cdecl **)(unsigned int, signed int, int))(v6 + 264))(v6, 255, v15);
      *(_BYTE *)v6 = 32;
      v9 = 1;
      ++*(_DWORD *)(v6 + 296);
LABEL_9:
      result = v9 + 1;
      *(_DWORD *)(v6 + 256) = v9 + 1;
      *(_BYTE *)(v6 + v9) = 91;
      *(_BYTE *)(v6 + 260) = 91;
      v11 = *v4;
      if ( !*v4 )
        goto LABEL_11;
      goto LABEL_10;
    }
    goto LABEL_7;
  }
  sub_6F89F3B0(v6, a2, a4, 0);
  v9 = *(_DWORD *)(v6 + 256);
LABEL_8:
  if ( v9 != 255 )
    goto LABEL_9;
  v13 = *(_DWORD *)(v6 + 268);
  *(_BYTE *)(v6 + 255) = 0;
  (*(void (__cdecl **)(unsigned int, signed int, int))(v6 + 264))(v6, 255, v13);
  *(_BYTE *)v6 = 91;
  *(_BYTE *)(v6 + 260) = 91;
  v11 = *v4;
  ++*(_DWORD *)(v6 + 296);
  *(_DWORD *)(v6 + 256) = 1;
  if ( !v11 )
  {
    result = 1;
    goto LABEL_12;
  }
LABEL_10:
  sub_6F899DD0(v6, v5, v11);
  result = *(_DWORD *)(v6 + 256);
LABEL_11:
  if ( result == 255 )
  {
    v14 = *(_DWORD *)(v6 + 268);
    *(_BYTE *)(v6 + 255) = 0;
    (*(void (__cdecl **)(unsigned int, signed int, int))(v6 + 264))(v6, 255, v14);
    ++*(_DWORD *)(v6 + 296);
    v12 = 1;
    result = 0;
    goto LABEL_13;
  }
LABEL_12:
  v12 = result + 1;
LABEL_13:
  *(_DWORD *)(v6 + 256) = v12;
  *(_BYTE *)(v6 + result) = 93;
  *(_BYTE *)(v6 + 260) = 93;
  return result;
}
