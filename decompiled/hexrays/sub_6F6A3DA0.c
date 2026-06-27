signed int __usercall sub_6F6A3DA0@<eax>(int a1@<eax>)
{
  int v1; // edx@1
  signed __int16 v2; // bp@1
  int v3; // ebx@1
  int v4; // ecx@1
  int v5; // ebp@1
  int v6; // esi@1
  int v7; // edi@1
  int v8; // ST0C_4@1
  int v9; // eax@1
  int v10; // ecx@1
  double v11; // st7@1
  int v12; // ST0C_4@1
  int v13; // edx@1
  double v14; // st7@1
  int v15; // ecx@3
  int v16; // ebp@3
  double v17; // st7@3
  double v18; // st7@7
  double v19; // st7@11
  int v20; // edx@12
  signed int result; // eax@12
  int v22; // [sp+0h] [bp-2Ch]@1
  int v23; // [sp+4h] [bp-28h]@1
  int v24; // [sp+8h] [bp-24h]@1
  int v25; // [sp+10h] [bp-1Ch]@1
  int v26; // [sp+14h] [bp-18h]@1

  v1 = (signed __int16)((signed __int16)(32 * *(_WORD *)(a1 + 4)) >> 5);
  v2 = 32 * *(_WORD *)(a1 + 12);
  v22 = (signed __int16)((signed __int16)(32 * *(_WORD *)a1) >> 5);
  v24 = (signed __int16)((signed __int16)(32 * *(_WORD *)(a1 + 8)) >> 5);
  v3 = (signed __int16)(v2 >> 5);
  v25 = (signed __int16)(v2 >> 5);
  v23 = (signed __int16)((signed __int16)(32 * *(_WORD *)(a1 + 2)) >> 5);
  v4 = (signed __int16)((signed __int16)(32 * *(_WORD *)(a1 + 6)) >> 5);
  v5 = (signed __int16)((signed __int16)(32 * *(_WORD *)(a1 + 14)) >> 5);
  v26 = v1 - v22;
  v6 = (signed __int16)((signed __int16)(32 * *(_WORD *)(a1 + 10)) >> 5);
  v7 = v5 - v4;
  v8 = (v5 - v4) * (v1 - v22);
  v9 = v4 - v23;
  v10 = v3 - v1;
  v11 = (double)v8;
  v12 = v9 * (v3 - v1);
  v13 = 1;
  v14 = v11 - (double)v12;
  if ( v14 >= 0.0 )
    v13 = 2 * (v14 > 0.0);
  v15 = (v6 - v5) * v10;
  v16 = v6 - v5;
  v17 = (double)v15 - (double)((v24 - v25) * v7);
  if ( v17 < 0.0 )
  {
    v13 |= 1u;
  }
  else
  {
    if ( v17 <= 0.0 )
      goto LABEL_7;
    v13 |= 2u;
  }
  if ( v13 == 3 )
    return 0;
LABEL_7:
  v18 = (double)((v23 - v6) * (v24 - v25)) - (double)((v22 - v24) * v16);
  if ( v18 < 0.0 )
  {
    v13 |= 1u;
  }
  else
  {
    if ( v18 <= 0.0 )
      goto LABEL_11;
    v13 |= 2u;
  }
  if ( v13 == 3 )
    return 0;
LABEL_11:
  v19 = (double)((v22 - v24) * v9) - (double)(v26 * (v23 - v6));
  if ( v19 < 0.0 )
  {
    v20 = v13 | 1;
  }
  else
  {
    v20 = v13 | 2;
    result = 1;
    if ( v19 <= 0.0 )
      return result;
  }
  return v20 != 3;
}
