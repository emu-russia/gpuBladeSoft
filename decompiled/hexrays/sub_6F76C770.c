unsigned int __cdecl sub_6F76C770(int a1, int a2)
{
  int v2; // ebx@1
  unsigned int v3; // edx@3
  unsigned int v4; // ecx@3
  unsigned int result; // eax@3
  signed int v6; // eax@6
  signed int v7; // edx@6
  int v8; // ecx@8
  signed int v9; // edi@9
  int v10; // ecx@9
  int v11; // edx@10
  unsigned int v12; // eax@11
  int v13; // edx@11
  int v14; // eax@12
  int v15; // ecx@12
  unsigned int v16; // edx@12
  int v17; // eax@14
  int v18; // edx@16
  signed int v19; // ST18_4@23
  unsigned int v20; // eax@23
  int v21; // eax@26
  int v22; // edx@29
  signed int v23; // [sp+14h] [bp-28h]@7
  int v24; // [sp+18h] [bp-24h]@9
  signed int v25; // [sp+18h] [bp-24h]@11
  signed int v26; // [sp+1Ch] [bp-20h]@7

  v2 = *(_DWORD *)(a1 + 88);
  if ( *(_BYTE *)(a1 + 8) & 1 )
  {
    switch ( *(_DWORD *)a2 )
    {
      case 3:
        v6 = *(_WORD *)(a1 + 76);
        v7 = *(_WORD *)(a1 + 70) - *(_WORD *)(a1 + 72);
        goto LABEL_7;
      case 4:
        v14 = *(_DWORD *)(a2 + 4);
        v18 = *(_DWORD *)(a2 + 8);
        *(_DWORD *)(v2 + 16) = v14;
        *(_DWORD *)(v2 + 20) = v18;
        if ( v14 )
        {
          if ( !v18 )
            *(_DWORD *)(v2 + 20) = v14;
        }
        else
        {
          *(_DWORD *)(v2 + 16) = v18;
          v14 = v18;
        }
        goto LABEL_18;
      case 1:
        v6 = *(_WORD *)(a1 + 70) - *(_WORD *)(a1 + 72);
        v7 = *(_WORD *)(a1 + 70) - *(_WORD *)(a1 + 72);
        goto LABEL_7;
      case 0:
        v8 = *(_DWORD *)(a2 + 12);
        v23 = *(_WORD *)(a1 + 68);
        v26 = *(_WORD *)(a1 + 68);
        if ( !v8 )
          goto LABEL_21;
        goto LABEL_9;
      case 2:
        v6 = *(_DWORD *)(a1 + 60) - *(_DWORD *)(a1 + 52);
        v7 = *(_DWORD *)(a1 + 64) - *(_DWORD *)(a1 + 56);
LABEL_7:
        v23 = ((v6 >> 31) ^ v6) - (v6 >> 31);
        v26 = ((v7 >> 31) ^ v7) - (v7 >> 31);
        break;
      default:
        v26 = 0;
        v23 = 0;
        break;
    }
    v8 = *(_DWORD *)(a2 + 12);
    if ( v8 )
    {
LABEL_9:
      v24 = *(_DWORD *)(a2 + 4);
      v9 = (v24 * v8 + 36) / 72;
      v10 = *(_DWORD *)(a2 + 16);
      if ( v10 )
        goto LABEL_10;
    }
    else
    {
LABEL_21:
      v10 = *(_DWORD *)(a2 + 16);
      v9 = *(_DWORD *)(a2 + 4);
      v24 = *(_DWORD *)(a2 + 4);
      if ( v10 )
      {
LABEL_10:
        v11 = (*(_DWORD *)(a2 + 8) * v10 + 36) / 72;
        if ( v24 )
        {
LABEL_11:
          v25 = v11;
          v12 = sub_6F7C9760(v9, v23);
          v13 = *(_DWORD *)(a2 + 8);
          *(_DWORD *)(v2 + 16) = v12;
          if ( v13 )
          {
            v14 = sub_6F7C9760(v25, v26);
            v15 = *(_DWORD *)a2;
            *(_DWORD *)(v2 + 20) = v14;
            v16 = v25;
            if ( v15 == 3 )
            {
              v22 = *(_DWORD *)(v2 + 16);
              if ( v14 <= v22 )
              {
                *(_DWORD *)(v2 + 16) = v14;
              }
              else
              {
                *(_DWORD *)(v2 + 20) = v22;
                v14 = v22;
              }
              goto LABEL_18;
            }
          }
          else
          {
            *(_DWORD *)(v2 + 20) = v12;
            v21 = sub_6F7C9420(v9, v26, v23);
            v15 = *(_DWORD *)a2;
            v16 = v21;
          }
          if ( !v15 )
          {
LABEL_14:
            v17 = *(_DWORD *)(v2 + 20);
            *(_WORD *)(v2 + 14) = (signed int)(v16 + 32) >> 6;
            *(_WORD *)(v2 + 12) = (v9 + 32) >> 6;
            *(_DWORD *)(v2 + 24) = (sub_6F7C9730(*(_WORD *)(a1 + 70), v17) + 63) & 0xFFFFFFC0;
            *(_DWORD *)(v2 + 28) = sub_6F7C9730(*(_WORD *)(a1 + 72), *(_DWORD *)(v2 + 20)) & 0xFFFFFFC0;
            *(_DWORD *)(v2 + 32) = (sub_6F7C9730(*(_WORD *)(a1 + 74), *(_DWORD *)(v2 + 20)) + 32) & 0xFFFFFFC0;
            result = (sub_6F7C9730(*(_WORD *)(a1 + 76), *(_DWORD *)(v2 + 16)) + 32) & 0xFFFFFFC0;
            *(_DWORD *)(v2 + 36) = result;
            return result;
          }
LABEL_24:
          v14 = *(_DWORD *)(v2 + 16);
LABEL_18:
          v9 = sub_6F7C9730(*(_WORD *)(a1 + 68), v14);
          v16 = sub_6F7C9730(*(_WORD *)(a1 + 68), *(_DWORD *)(v2 + 20));
          goto LABEL_14;
        }
LABEL_23:
        v19 = v11;
        v20 = sub_6F7C9760(v11, v26);
        *(_DWORD *)(v2 + 20) = v20;
        *(_DWORD *)(v2 + 16) = v20;
        v9 = sub_6F7C9420(v19, v23, v26);
        v16 = v19;
        if ( !*(_DWORD *)a2 )
          goto LABEL_14;
        goto LABEL_24;
      }
    }
    v11 = *(_DWORD *)(a2 + 8);
    if ( v24 )
      goto LABEL_11;
    goto LABEL_23;
  }
  *(_DWORD *)(v2 + 12) = 0;
  *(_DWORD *)(v2 + 36) = 0;
  v3 = 0;
  v4 = (v2 + 16) & 0xFFFFFFFC;
  result = (v2 + 12 - v4 + 28) & 0xFFFFFFFC;
  do
  {
    *(_DWORD *)(v4 + v3) = 0;
    v3 += 4;
  }
  while ( v3 < result );
  *(_DWORD *)(v2 + 16) = 0x10000;
  *(_DWORD *)(v2 + 20) = 0x10000;
  return result;
}
