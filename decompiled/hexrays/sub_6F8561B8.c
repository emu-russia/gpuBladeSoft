int __cdecl sub_6F8561B8(int a1)
{
  unsigned int v1; // eax@1
  int v2; // eax@5
  signed int v3; // eax@8
  int v4; // eax@17
  char v5; // al@25
  char v6; // al@25
  char v7; // al@26
  signed int v8; // eax@35
  int result; // eax@47
  char v10[256]; // [sp+2Ch] [bp-44Ch]@10
  char v11; // [sp+12Ch] [bp-34Ch]@10
  int v12; // [sp+42Ch] [bp-4Ch]@28
  char v13; // [sp+431h] [bp-47h]@19
  unsigned __int16 v14; // [sp+432h] [bp-46h]@19
  int v15; // [sp+434h] [bp-44h]@12
  int v16; // [sp+438h] [bp-40h]@10
  int v17; // [sp+43Ch] [bp-3Ch]@7
  int v18; // [sp+440h] [bp-38h]@3
  int v19; // [sp+444h] [bp-34h]@3
  int v20; // [sp+448h] [bp-30h]@3
  int v21; // [sp+44Ch] [bp-2Ch]@1
  int v22; // [sp+450h] [bp-28h]@1
  int v23; // [sp+454h] [bp-24h]@19
  int v24; // [sp+458h] [bp-20h]@10
  int i; // [sp+45Ch] [bp-1Ch]@10
  char v26[24]; // [sp+460h] [bp-18h]@14

  v22 = *(_DWORD *)a1;
  v21 = *(_DWORD *)(a1 + 12);
  v1 = *(_DWORD *)(v22 + 24);
  if ( v1 > 0x100 )
    v1 = 256;
  v20 = v1;
  v19 = *(_DWORD *)(v22 + 16);
  v18 = (v19 & 3) + 1;
  v2 = v19 & 0x20 && v19 & 1;
  v17 = v2;
  if ( v19 & 0x10 )
    v3 = 2;
  else
    v3 = 0;
  v16 = v3;
  memset(v10, 255, 0x100u);
  memset(&v11, 0, 0x300u);
  v24 = 0;
  for ( i = 0; i < v20; ++i )
  {
    if ( v19 & 4 )
    {
      v15 = 2 * v18 * i + v21;
      if ( v18 & 1 )
      {
        if ( v18 <= 2 )
        {
          v26[3 * i - 819] = ((unsigned __int16)word_6FB99280[255 * *(_WORD *)v15 >> 15]
                            + ((255 * *(_WORD *)v15 & 0x7FFF)
                             * (unsigned __int8)byte_6FB99680[255 * *(_WORD *)v15 >> 15] >> 12)) >> 8;
          v26[3 * i - 820] = v26[3 * i - 819];
          v26[3 * i - 818] = v26[3 * i - 820];
        }
        else
        {
          v26[3 * i - 818] = ((unsigned __int16)word_6FB99280[255 * *(_WORD *)(2 * (v16 ^ 2) + v15) >> 15]
                            + ((255 * *(_WORD *)(2 * (v16 ^ 2) + v15) & 0x7FFF)
                             * (unsigned __int8)byte_6FB99680[255 * *(_WORD *)(2 * (v16 ^ 2) + v15) >> 15] >> 12)) >> 8;
          v26[3 * i - 819] = ((unsigned __int16)word_6FB99280[255 * *(_WORD *)(v15 + 2) >> 15]
                            + ((255 * *(_WORD *)(v15 + 2) & 0x7FFF)
                             * (unsigned __int8)byte_6FB99680[255 * *(_WORD *)(v15 + 2) >> 15] >> 12)) >> 8;
          v26[3 * i - 820] = ((unsigned __int16)word_6FB99280[255 * *(_WORD *)(2 * v16 + v15) >> 15]
                            + ((255 * *(_WORD *)(2 * v16 + v15) & 0x7FFF)
                             * (unsigned __int8)byte_6FB99680[255 * *(_WORD *)(2 * v16 + v15) >> 15] >> 12)) >> 8;
        }
      }
      else
      {
        if ( v17 )
          v4 = 0;
        else
          v4 = 2 * (v18 - 1);
        v14 = *(_WORD *)(v15 + v4);
        v13 = (255 * (unsigned int)v14 + 32895) >> 16;
        v23 = 0;
        if ( v13 && v13 != -1 )
          v23 = ((v14 >> 1) + 2139062400) / v14;
        v10[i] = v13;
        if ( v13 != -1 )
          v24 = i + 1;
        if ( v18 <= 2 )
        {
          v7 = sub_6F855EBC(*(_WORD *)(2 * v17 + v15), v14, v23);
          v26[3 * i - 819] = v7;
          v26[3 * i - 820] = v26[3 * i - 819];
          v26[3 * i - 818] = v26[3 * i - 820];
        }
        else
        {
          v5 = sub_6F855EBC(*(_WORD *)(2 * ((v16 ^ 2) + v17) + v15), v14, v23);
          v26[3 * i - 818] = v5;
          v6 = sub_6F855EBC(*(_WORD *)(2 * (v17 + 1) + v15), v14, v23);
          v26[3 * i - 819] = v6;
          v26[3 * i - 820] = sub_6F855EBC(*(_WORD *)(2 * (v17 + v16) + v15), v14, v23);
        }
      }
    }
    else
    {
      v12 = v18 * i + v21;
      if ( v18 == 2 )
      {
        v10[i] = *(_BYTE *)((v17 ^ 1) + v12);
        if ( v10[i] != -1 )
          v24 = i + 1;
LABEL_42:
        v26[3 * i - 819] = *(_BYTE *)(v17 + v12);
        v26[3 * i - 820] = v26[3 * i - 819];
        v26[3 * i - 818] = v26[3 * i - 820];
        continue;
      }
      if ( v18 > 2 )
      {
        if ( v18 != 3 )
        {
          if ( v18 != 4 )
            continue;
          if ( v17 )
            v8 = 0;
          else
            v8 = 3;
          v10[i] = *(_BYTE *)(v12 + v8);
          if ( v10[i] != -1 )
            v24 = i + 1;
        }
        v26[3 * i - 818] = *(_BYTE *)((v16 ^ 2) + v17 + v12);
        v26[3 * i - 819] = *(_BYTE *)(v17 + 1 + v12);
        v26[3 * i - 820] = *(_BYTE *)(v17 + v16 + v12);
      }
      else if ( v18 == 1 )
      {
        goto LABEL_42;
      }
    }
  }
  sub_6F8515C4(**(_DWORD **)v22, *(_DWORD *)(*(_DWORD *)v22 + 4), &v11, v20);
  if ( v24 > 0 )
    sub_6F85206B(**(_DWORD **)v22, *(_DWORD *)(*(_DWORD *)v22 + 4), v10, v24, 0);
  result = v22;
  *(_DWORD *)(v22 + 24) = v20;
  return result;
}
