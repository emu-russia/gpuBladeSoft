signed int __cdecl sub_6F7D13E0(int a1, int a2)
{
  signed int v2; // esi@3
  signed int result; // eax@4
  int *v4; // eax@10
  int v5; // esi@10
  int *v6; // edx@10
  int v7; // eax@12
  signed int v8; // eax@12
  int v9; // edx@12
  int v10; // eax@17
  int v11; // [sp+14h] [bp-38h]@3
  int v12; // [sp+18h] [bp-34h]@12
  int v13; // [sp+1Ch] [bp-30h]@12
  char v14; // [sp+2Ah] [bp-22h]@14
  char v15; // [sp+2Bh] [bp-21h]@16
  int v16; // [sp+2Ch] [bp-20h]@4

  if ( !a1 || !a2 )
    return 40;
  v11 = *(_DWORD *)(a2 + 28);
  v2 = sub_6F771FF0(a2, 0);
  if ( v2 )
    return v2;
  result = sub_6F7720B0(a2, &v16, 2u);
  if ( !result )
  {
    result = 3;
    if ( (_BYTE)v16 == 31 && BYTE1(v16) == -99 )
    {
      v16 = 0;
      *(_DWORD *)a1 = 0;
      *(_DWORD *)(a1 + 36) = 0;
      memset((void *)((a1 + 4) & 0xFFFFFFFC), 0, 4 * ((a1 - ((a1 + 4) & 0xFFFFFFFC) + 40) >> 2));
      *(_DWORD *)(a1 + 28) = v11;
      v4 = (int *)sub_6F773A50(v11, 4292, &v16);
      v5 = v16;
      v6 = v4;
      if ( v16 )
      {
LABEL_11:
        *(_DWORD *)(a1 + 4) = 0x7FFFFFFF;
        *(_DWORD *)(a1 + 8) = 0;
        result = v5;
        *(_DWORD *)a1 = 0;
        *(_DWORD *)(a1 + 20) = sub_6F7D0290;
        *(_DWORD *)(a1 + 24) = sub_6F7D01A0;
        return result;
      }
      v7 = *(_DWORD *)(a1 + 28);
      v6[1] = a1;
      *v6 = a2;
      v6[1070] = 0;
      v12 = (int)v6;
      v13 = (int)(v6 + 3);
      v6[2] = v7;
      v6[1072] = (int)(v6 + 1070);
      v6[1071] = (int)(v6 + 1070);
      v8 = sub_6F771FF0(a2, 0);
      v9 = v12;
      if ( !v8 )
      {
        v8 = sub_6F7720B0(a2, &v14, 2u);
        v9 = v12;
        if ( !v8 )
        {
          v8 = 3;
          if ( v14 == 31 && v15 == -99 )
          {
            *(_DWORD *)(v12 + 12) = 0;
            *(_DWORD *)(v13 + 168) = 0;
            memset((void *)((v13 + 4) & 0xFFFFFFFC), 0, 4 * ((v13 - ((v13 + 4) & 0xFFFFFFFC) + 172) >> 2));
            *(_DWORD *)(v12 + 176) = a2;
            v10 = *(_DWORD *)(a2 + 28);
            *(_DWORD *)(v12 + 88) = 0;
            *(_DWORD *)(v12 + 92) = 0;
            *(_DWORD *)(v12 + 96) = 0;
            *(_DWORD *)(v12 + 108) = 64;
            *(_DWORD *)(v12 + 16) = 0;
            *(_DWORD *)(v12 + 180) = v10;
            *(_DWORD *)(v12 + 36) = 0;
            *(_DWORD *)(v12 + 40) = 0;
            *(_BYTE *)(v12 + 44) = 0;
            *(_DWORD *)(v12 + 100) = v12 + 112;
            *(_DWORD *)(v12 + 48) = 0;
            *(_DWORD *)(v12 + 104) = 0;
            *(_DWORD *)(v12 + 64) = 9;
            *(_DWORD *)(v12 + 12) = 0;
            *(_DWORD *)(a1 + 12) = v12;
            goto LABEL_11;
          }
        }
      }
      v16 = v8;
      sub_6F773D90(v11, v9);
      return v16;
    }
  }
  return result;
}
