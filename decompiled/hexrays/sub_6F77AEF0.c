int *__usercall sub_6F77AEF0@<eax>(int a1@<eax>, unsigned int a2@<edx>, int a3@<ecx>, int *a4, signed int a5, char a6, int a7)
{
  unsigned int v7; // eax@2
  int v8; // edx@3
  int *result; // eax@3
  int v10; // esi@4
  unsigned int v11; // edi@4
  signed __int64 v12; // rax@4
  int v13; // ecx@4
  signed __int64 v14; // rax@4
  unsigned int v15; // eax@4
  signed __int64 v16; // rax@5
  signed int v17; // eax@5
  signed int v18; // ebp@6
  int v19; // edi@7
  int v20; // esi@7
  signed int v21; // edx@8
  signed int v22; // ST00_4@9
  int v23; // edi@9
  unsigned int v24; // eax@9
  int v25; // eax@11
  int v26; // eax@12
  signed int v27; // ST00_4@18
  int v28; // edx@19
  int v29; // edi@19
  int v30; // ebx@21
  signed int v31; // [sp+4h] [bp-48h]@11
  signed int v32; // [sp+8h] [bp-44h]@19
  int v33; // [sp+10h] [bp-3Ch]@4
  int v34; // [sp+10h] [bp-3Ch]@18
  int v35; // [sp+14h] [bp-38h]@4
  int v36; // [sp+18h] [bp-34h]@6
  unsigned int v37; // [sp+1Ch] [bp-30h]@4
  int v38; // [sp+20h] [bp-2Ch]@4
  int v39; // [sp+24h] [bp-28h]@7
  int v40; // [sp+28h] [bp-24h]@7
  int v41; // [sp+2Ch] [bp-20h]@7

  if ( a6 )
  {
    v10 = a1;
    v11 = a2;
    v33 = *(_DWORD *)a7;
    v38 = *(_DWORD *)(a7 + 4);
    v35 = *(_DWORD *)(a7 + 24);
    v12 = a1 * (signed __int64)(a3 + a5);
    v13 = (SHIDWORD(v12) >> 31) + 0x8000;
    v14 = (unsigned int)v13 + v12;
    HIDWORD(v14) <<= 16;
    v15 = HIDWORD(v14) + ((unsigned int)v14 >> 16);
    _BitScanReverse((_DWORD *)&v14 + 1, v15);
    _BitScanReverse((unsigned int *)&v13, v11);
    v37 = v15;
    if ( 31 - (HIDWORD(v14) ^ 0x1F) + 31 - (v13 ^ 0x1F) > 45 )
    {
      v17 = v35 << 16;
    }
    else
    {
      v16 = (unsigned int)(((signed int)((unsigned __int64)((signed int)v11 * (signed __int64)(signed int)v15) >> 32) >> 31)
                         + 0x8000)
          + (signed int)v11 * (signed __int64)(signed int)v15;
      v17 = (HIDWORD(v16) << 16) + ((unsigned int)v16 >> 16);
    }
    v18 = v11;
    v36 = v10;
    if ( v33 << 16 > v17 )
    {
      v31 = v11;
      v25 = *(_DWORD *)(a7 + 4);
      goto LABEL_12;
    }
    v19 = *(_DWORD *)(a7 + 8);
    v20 = *(_DWORD *)(a7 + 16);
    v41 = *(_DWORD *)(a7 + 12);
    v40 = *(_DWORD *)(a7 + 20);
    v39 = *(_DWORD *)(a7 + 28);
    if ( v17 < v19 << 16 )
    {
      v27 = v33 << 16;
      v34 = v19 - v33;
      v24 = sub_6F7C9760(v27, v18);
      if ( v34 )
      {
        v32 = v34;
        v28 = v41;
        v29 = v38;
        goto LABEL_21;
      }
    }
    else
    {
      v21 = v20 << 16;
      if ( v17 >= v20 << 16 )
      {
        if ( v17 >= v35 << 16 )
          goto LABEL_11;
LABEL_10:
        v24 = sub_6F7C9760(v21, v18);
        if ( v35 == v20 )
        {
LABEL_11:
          v25 = v39;
          v31 = v18;
LABEL_12:
          v26 = sub_6F7C9760(v25 << 16, v31);
          *a4 = v26;
LABEL_13:
          v7 = sub_6F7C9760(v26, 2 * v36);
          goto LABEL_3;
        }
        v28 = v39;
        v29 = v40;
        v32 = v35 - v20;
LABEL_21:
        v30 = sub_6F7C9420(v37 - v24, v28 - v29, v32);
        v26 = v30 + sub_6F7C9760(v29 << 16, v18);
        *a4 = v26;
        goto LABEL_13;
      }
    }
    v22 = v19 << 16;
    v23 = v20 - v19;
    v24 = sub_6F7C9760(v22, v18);
    v21 = v20 << 16;
    if ( v23 )
    {
      v32 = v23;
      v28 = v40;
      v29 = v41;
      goto LABEL_21;
    }
    goto LABEL_10;
  }
  v7 = *a4;
LABEL_3:
  v8 = v7 + a5 / 2;
  result = a4;
  *a4 = v8;
  return result;
}
