int __cdecl sub_6F8A3890(int a1, int a2)
{
  char v2; // di@2
  int v3; // ebp@3
  size_t v5; // eax@7
  size_t v6; // ebp@7
  char v7; // al@11
  void *v8; // edi@13
  char v9; // al@17
  char v10; // cl@19
  int v11; // eax@19
  char v12; // cl@26
  int v13; // [sp+2Ch] [bp-40h]@3
  int v14; // [sp+30h] [bp-3Ch]@5
  int v15; // [sp+34h] [bp-38h]@5
  int v16; // [sp+38h] [bp-34h]@5
  int v17; // [sp+3Ch] [bp-30h]@5
  int v18; // [sp+40h] [bp-2Ch]@5
  int v19; // [sp+44h] [bp-28h]@5
  int v20; // [sp+48h] [bp-24h]@5
  int v21; // [sp+4Ch] [bp-20h]@5

  if ( !a1 )
    goto LABEL_3;
  v2 = *(_BYTE *)a1;
  if ( !*(_BYTE *)a1 )
    goto LABEL_3;
  v5 = strlen((const char *)a1);
  v6 = v5;
  if ( v5 <= 1 || v5 - 2 <= 1 && *(_BYTE *)(a1 + 1) == 58 )
    goto LABEL_3;
  if ( v2 != 92 && v2 != 47 )
    goto LABEL_11;
  v9 = *(_BYTE *)(a1 + 1);
  if ( v9 != 92 && v9 != 47 )
    goto LABEL_11;
  v10 = *(_BYTE *)(a1 + 2);
  v11 = a1 + 2;
  if ( v10 != 92 && v10 )
  {
    while ( v10 != 47 )
    {
      v10 = *(_BYTE *)++v11;
      if ( !*(_BYTE *)v11 || v10 == 92 )
        goto LABEL_34;
    }
  }
  else
  {
LABEL_34:
    if ( !v10 )
      goto LABEL_26;
  }
  ++v11;
LABEL_26:
  v12 = *(_BYTE *)v11;
  if ( !*(_BYTE *)v11 )
    goto LABEL_3;
  if ( v12 != 92 )
  {
    while ( v12 != 47 )
    {
      v12 = *(_BYTE *)++v11;
      if ( !*(_BYTE *)v11 || v12 == 92 )
      {
        if ( !v12 )
          goto LABEL_3;
        break;
      }
    }
  }
  if ( !*(_BYTE *)(v11 + 1) )
    goto LABEL_3;
LABEL_11:
  v7 = *(_BYTE *)(a1 + v6 - 1);
  if ( v7 != 47 && v7 != 92 )
  {
LABEL_3:
    v3 = stat(a1, (int)&v13);
    goto LABEL_4;
  }
  v8 = malloc(v6);
  memcpy(v8, (const void *)a1, v6 - 1);
  *((char *)v8 + v6 - 1) = 0;
  v3 = stat((int)v8, (int)&v13);
  if ( (void *)a1 != v8 )
    free(v8);
LABEL_4:
  if ( v3 == -1 )
  {
    *(_DWORD *)a2 = 0;
    *(_DWORD *)(a2 + 32) = 0;
    memset((void *)((a2 + 4) & 0xFFFFFFFC), 0, 4 * ((a2 - ((a2 + 4) & 0xFFFFFFFC) + 36) >> 2));
  }
  else
  {
    *(_DWORD *)a2 = v13;
    *(_DWORD *)(a2 + 4) = v14;
    *(_DWORD *)(a2 + 8) = v15;
    *(_DWORD *)(a2 + 12) = v16;
    *(_DWORD *)(a2 + 16) = v17;
    *(_DWORD *)(a2 + 20) = v18;
    *(_DWORD *)(a2 + 24) = v19;
    *(_DWORD *)(a2 + 28) = v20;
    *(_DWORD *)(a2 + 32) = v21;
  }
  return v3;
}
