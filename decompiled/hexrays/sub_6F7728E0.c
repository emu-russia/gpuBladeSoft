signed int __cdecl sub_6F7728E0(int a1, int a2, int a3)
{
  signed int result; // eax@1
  int v4; // ebx@3
  int v5; // esi@3
  char v6; // dl@4
  signed int v7; // esi@5
  unsigned int v8; // ecx@11
  int v9; // eax@13
  int v10; // eax@13
  char v11; // cl@13
  char v12; // dl@16
  _WORD *v13; // ecx@16
  int v14; // eax@22
  unsigned int v15; // eax@24
  int v16; // eax@25
  int v17; // ecx@25
  int v18; // eax@26
  int v19; // ecx@26
  signed int v20; // eax@28
  char *v21; // edi@34
  char v22; // [sp+1Fh] [bp-1Dh]@3

  result = 6;
  if ( !a2 )
    return result;
  result = 40;
  if ( !a1 )
    return result;
  v4 = a2 + 4;
  v22 = 0;
  v5 = *(_DWORD *)(a1 + 32);
  while ( 2 )
  {
    v6 = *(_BYTE *)(v4 - 4);
    switch ( v6 )
    {
      default:
        *(_DWORD *)(a1 + 32) = v5;
        v7 = 0;
        goto LABEL_6;
      case 24:
      case 25:
        v8 = *(_BYTE *)(v4 - 3);
        if ( v5 + v8 <= *(_DWORD *)(a1 + 36) )
        {
          if ( v6 != 24 )
            goto LABEL_33;
          v21 = (char *)(a3 + *(_WORD *)(v4 - 2));
          if ( v8 >= 4 )
          {
            *(_DWORD *)v21 = *(_DWORD *)v5;
            *(_DWORD *)&v21[v8 - 4] = *(_DWORD *)(v5 + v8 - 4);
            qmemcpy(
              (void *)((unsigned int)(v21 + 4) & 0xFFFFFFFC),
              (const void *)(v5 - (_DWORD)&v21[-((unsigned int)(v21 + 4) & 0xFFFFFFFC)]),
              4 * ((unsigned int)(&v21[v8] - ((unsigned int)(v21 + 4) & 0xFFFFFFFC)) >> 2));
            v5 += v8;
          }
          else
          {
            if ( !*(_BYTE *)(v4 - 3) || (*v21 = *(_BYTE *)v5, !(v8 & 2)) )
            {
LABEL_33:
              v5 += v8;
              goto LABEL_20;
            }
            *(_WORD *)&v21[v8 - 2] = *(_WORD *)(v5 + v8 - 2);
            v5 += v8;
          }
LABEL_20:
          v4 += 4;
          continue;
        }
        v7 = 85;
LABEL_6:
        result = v7;
        if ( v22 )
        {
          if ( *(_DWORD *)(a1 + 20) )
          {
            sub_6F773D90(*(_DWORD *)(a1 + 28), *(_DWORD *)a1);
            *(_DWORD *)a1 = 0;
          }
          *(_DWORD *)(a1 + 32) = 0;
          *(_DWORD *)(a1 + 36) = 0;
          result = v7;
        }
        return result;
      case 22:
      case 23:
        v9 = *(_BYTE *)(v5 + 2);
        v5 += 3;
        v10 = *(_BYTE *)(v5 - 3) | (v9 << 16) | (*(_BYTE *)(v5 - 2) << 8);
        v11 = 8;
        goto LABEL_14;
      case 20:
      case 21:
        v14 = *(_BYTE *)v5;
        v5 += 3;
        v10 = *(_BYTE *)(v5 - 1) | (v14 << 16) | (*(_BYTE *)(v5 - 2) << 8);
        v11 = 8;
        goto LABEL_14;
      case 18:
      case 19:
        v10 = *(_DWORD *)v5;
        v11 = 0;
        v5 += 4;
        goto LABEL_14;
      case 16:
      case 17:
        v15 = *(_DWORD *)v5;
        v11 = 0;
        v5 += 4;
        v10 = _byteswap_ulong(v15);
        goto LABEL_14;
      case 14:
      case 15:
        v16 = *(_BYTE *)(v5 + 1);
        v17 = *(_BYTE *)v5;
        v5 += 2;
        v10 = v17 | (v16 << 8);
        v11 = 16;
        v10 = (unsigned __int16)v10;
        goto LABEL_14;
      case 12:
      case 13:
        v18 = *(_BYTE *)v5;
        v19 = *(_BYTE *)(v5 + 1);
        v5 += 2;
        v10 = v19 | (v18 << 8);
        v11 = 16;
        v10 = (unsigned __int16)v10;
        goto LABEL_14;
      case 8:
      case 9:
        v10 = *(_BYTE *)v5;
        v11 = 24;
        ++v5;
LABEL_14:
        if ( *(_BYTE *)(v4 - 4) & 1 )
          v10 = v10 << v11 >> v11;
        v12 = *(_BYTE *)(v4 - 3);
        v13 = (_WORD *)(a3 + *(_WORD *)(v4 - 2));
        if ( v12 == 2 )
        {
          *v13 = v10;
        }
        else if ( v12 != 4 && v12 == 1 )
        {
          *(_BYTE *)v13 = v10;
        }
        else
        {
          *(_DWORD *)v13 = v10;
        }
        goto LABEL_20;
      case 4:
        v20 = sub_6F772380(a1, *(_WORD *)(v4 - 2));
        if ( v20 )
        {
          v7 = v20;
          goto LABEL_6;
        }
        v5 = *(_DWORD *)(a1 + 32);
        v22 = 1;
        goto LABEL_20;
    }
  }
}
