signed int __cdecl sub_6F88BA20(unsigned int a1, _BYTE *a2, unsigned int a3)
{
  _BYTE *v3; // edi@1
  unsigned int v4; // ebp@1
  unsigned int v5; // eax@5
  int v6; // ecx@8
  _BYTE *v9; // eax@13
  int v10; // edi@14
  int v11; // ST00_4@14
  int v12; // ST04_4@14
  int v13; // ST08_4@14
  int v14; // ST0C_4@14
  int v15; // ST10_4@14
  int v16; // ebp@14
  int v17; // ST14_4@14
  int v18; // ST18_4@14
  int v19; // ST1C_4@14
  int v20; // ST20_4@14
  int v21; // ST24_4@14
  int v22; // edi@14
  int v23; // esi@14
  int v24; // ebx@14
  int v25; // ecx@14
  int v26; // edx@14
  unsigned int v28; // ebp@19
  int v29; // ecx@21
  _BYTE *v30; // edx@25
  int v31; // eax@26
  int v32; // ST00_4@26
  int v33; // ST04_4@26
  int v34; // ST08_4@26
  int v35; // ST0C_4@26
  int v36; // ST10_4@26
  int v37; // ebp@26
  int v38; // ST14_4@26
  int v39; // ST18_4@26
  int v40; // ST1C_4@26
  int v41; // esi@26
  int v42; // ebx@26
  int v43; // ecx@26
  int v44; // eax@26
  int v45; // ebp@26
  int v46; // ST20_4@26
  int v47; // ebp@26
  int v48; // ST24_4@26
  int v49; // edi@26
  unsigned int v50; // eax@27
  int v51; // edx@28
  unsigned int v52; // eax@28
  unsigned int v53; // [sp+2Ch] [bp-1Ch]@1
  int v54; // [sp+30h] [bp-18h]@13
  int v55; // [sp+30h] [bp-18h]@25
  unsigned int v56; // [sp+34h] [bp-14h]@25
  _BYTE *v57; // [sp+50h] [bp+8h]@25

  v3 = a2;
  v4 = (unsigned __int16)a1;
  v53 = a1 >> 16;
  if ( a3 != 1 )
  {
    if ( !a2 )
      return 1;
    if ( a3 <= 0xF )
    {
      if ( a3 )
      {
        v5 = a1 >> 16;
        do
        {
          v4 += *(++v3 - 1);
          v5 += v4;
        }
        while ( v3 != &a2[a3] );
        v53 = v5;
      }
      v6 = v4 - 65521;
      if ( v4 < 0xFFF1 )
        v6 = v4;
      return (v53 % 0xFFF1 << 16) | v6;
    }
    if ( a3 <= 0x15AF )
      goto LABEL_36;
    do
    {
      a3 -= 5552;
      v54 = (int)(v3 + 5552);
      v9 = v3;
      do
      {
        v10 = *v9;
        v9 += 16;
        v11 = v4 + v10;
        v12 = v4 + v10 + *(v9 - 15);
        v13 = v12 + *(v9 - 14);
        v14 = v13 + *(v9 - 13);
        v15 = v14 + *(v9 - 12);
        v16 = v15 + *(v9 - 11);
        v17 = v16;
        v18 = v16 + *(v9 - 10);
        v19 = v18 + *(v9 - 9);
        v20 = v19 + *(v9 - 8);
        v21 = v20 + *(v9 - 7);
        v22 = v21 + *(v9 - 6);
        v23 = v22 + *(v9 - 5);
        v24 = v23 + *(v9 - 4);
        v25 = v24 + *(v9 - 3);
        v26 = v25 + *(v9 - 2);
        v4 = v26 + *(v9 - 1);
        v53 += v4 + v24 + v23 + v22 + v21 + v20 + v19 + v18 + v17 + v15 + v14 + v13 + v11 + v12 + v25 + v26;
      }
      while ( v9 != (_BYTE *)v54 );
      v3 = v9;
      v4 %= 0xFFF1u;
      v53 %= 0xFFF1u;
    }
    while ( a3 > 0x15AF );
    if ( !a3 )
      return v4 | (v53 << 16);
    if ( a3 <= 0xF )
    {
      v50 = a3 - 1;
    }
    else
    {
LABEL_36:
      v30 = v3;
      v57 = v3;
      v56 = (a3 - 16) >> 4;
      v55 = (int)&v3[16 * v56 + 16];
      do
      {
        v31 = *v30;
        v30 += 16;
        v32 = v4 + v31;
        v33 = v4 + v31 + *(v30 - 15);
        v34 = v33 + *(v30 - 14);
        v35 = v34 + *(v30 - 13);
        v36 = v35 + *(v30 - 12);
        v37 = v36 + *(v30 - 11);
        v38 = v37;
        v39 = v37 + *(v30 - 10);
        v40 = v39 + *(v30 - 9);
        v41 = v40 + *(v30 - 8);
        v42 = v41 + *(v30 - 7);
        v43 = v42 + *(v30 - 6);
        v44 = v43 + *(v30 - 5);
        v45 = v44 + *(v30 - 4);
        v46 = v45;
        v47 = v45 + *(v30 - 3);
        v48 = v47;
        v49 = v47 + *(v30 - 2);
        v4 = v49 + *(v30 - 1);
        v53 += v4 + v49 + v48 + v46 + v40 + v39 + v38 + v36 + v35 + v34 + v32 + v33 + v41 + v42 + v43 + v44;
      }
      while ( v30 != (_BYTE *)v55 );
      v3 = &v57[16 * (v56 + 1)];
      v50 = a3 + -16 * v56 - 17;
      if ( !(a3 & 0xF) )
        return v4 % 0xFFF1 | (v53 % 0xFFF1 << 16);
    }
    v51 = (int)&v3[v50 + 1];
    v52 = v53;
    do
    {
      v4 += *(++v3 - 1);
      v52 += v4;
    }
    while ( v3 != (_BYTE *)v51 );
    v53 = v52;
    return v4 % 0xFFF1 | (v53 % 0xFFF1 << 16);
  }
  v28 = *a2 + (unsigned __int16)a1;
  if ( v28 >= 0xFFF1 )
    v28 -= 65521;
  v29 = v28 + v53 - 65521;
  if ( v28 + v53 < 0xFFF1 )
    v29 = v28 + v53;
  return v28 | (v29 << 16);
}
