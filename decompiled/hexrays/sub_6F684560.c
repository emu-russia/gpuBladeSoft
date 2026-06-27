int __usercall sub_6F684560@<eax>(int result@<eax>, __int16 a2@<dx>, unsigned int a3@<ecx>)
{
  __int16 v3; // si@1
  int v4; // edx@1
  int v5; // esi@1
  int v6; // edi@6
  int v7; // ebp@9
  int v8; // ebp@11
  int v9; // ebx@11
  int v10; // ebp@17
  int v11; // eax@18
  int v12; // esi@20
  int v13; // edi@20
  int v14; // ebx@20
  int v15; // eax@20
  int v16; // ST08_4@24
  int v17; // ST04_4@24
  int v18; // ST00_4@24
  int v19; // ST08_4@25
  int v20; // ST04_4@25
  int v21; // ST00_4@25
  int v22; // eax@26
  int v23; // ecx@26
  int v24; // ST04_4@26
  int v25; // [sp+38h] [bp-64h]@16
  int v26; // [sp+3Ch] [bp-60h]@16
  int v27; // [sp+40h] [bp-5Ch]@16
  int v28; // [sp+48h] [bp-54h]@18
  int v29; // [sp+4Ch] [bp-50h]@20
  int v30; // [sp+50h] [bp-4Ch]@18
  int v31; // [sp+54h] [bp-48h]@18
  int v32; // [sp+58h] [bp-44h]@18
  int v33; // [sp+5Ch] [bp-40h]@18
  int v34; // [sp+64h] [bp-38h]@6
  int v35; // [sp+68h] [bp-34h]@17
  int v36; // [sp+6Ch] [bp-30h]@16
  int v37; // [sp+70h] [bp-2Ch]@13
  int v38; // [sp+74h] [bp-28h]@15
  int v39; // [sp+78h] [bp-24h]@15
  int v40; // [sp+7Ch] [bp-20h]@17

  v3 = a2 + dword_6FBBDB94;
  v4 = 2;
  v5 = (signed __int16)((signed __int16)(32 * v3) >> 5);
  if ( dword_6FBBDB9C - v5 > 0 )
  {
    v4 = 2 - (dword_6FBBDB9C - v5);
    v5 = (signed __int16)((signed __int16)(32 * dword_6FBBDB9C) >> 5);
  }
  if ( v5 - dword_6FBBDBA4 < 0 )
  {
    if ( v4 + v5 - dword_6FBBDBA4 > 0 )
      v4 -= v4 + v5 - dword_6FBBDBA4;
    v6 = 2;
    result = (signed __int16)((signed __int16)(32 * (dword_6FBBDB90 + result)) >> 5);
    v34 = result;
    if ( dword_6FBBDB98 - result > 0 )
    {
      v6 = 2 - (dword_6FBBDB98 - result);
      result = (signed __int16)((signed __int16)(32 * dword_6FBBDB98) >> 5);
      v34 = (signed __int16)((signed __int16)(32 * dword_6FBBDB98) >> 5);
    }
    if ( v34 - dword_6FBBDBA0 < 0 )
    {
      v7 = v6 + v34 - dword_6FBBDBA0;
      result = v6 - v7;
      if ( v7 > 0 )
        v6 -= v7;
      v8 = 0;
      v9 = 0;
      if ( v4 >= 0 )
        v9 = v4;
      v37 = v6;
      if ( v6 >= 0 )
        v8 = v6;
      v38 = dword_6FBB52F8 * v5;
      v39 = v9 - 1;
      if ( v4 > 0 )
      {
        result = BYTE1(a3);
        v26 = BYTE1(a3);
        v36 = v8 - 1;
        v25 = (unsigned __int8)(a3 >> 16);
        v27 = (unsigned __int8)a3;
        while ( 1 )
        {
          v40 = dword_6FBB52F8 - 1;
          v10 = v38;
          v35 = dword_6FBB52F8 + v38;
          if ( dword_6FBB52F8 )
          {
            do
            {
              v28 = dword_6FBB52F4;
              v30 = dword_6FBB52F4 * v34;
              v11 = dword_6FBB52F4 * v34 + dword_6FBB52F4 * (v10 << 10);
              v31 = dword_6FBB5068 + 2 * v11;
              v32 = dword_6FBB505C + 4 * v11;
              v33 = v36;
              if ( v37 > 0 )
              {
                while ( 1 )
                {
                  if ( v28 )
                  {
                    v12 = v32;
                    v13 = v31;
                    v14 = v30;
                    v29 = v30 + v28;
                    v15 = v28 & 3;
                    if ( !(v28 & 3) )
                      goto LABEL_37;
                    if ( v15 != 1 )
                    {
                      if ( v15 != 2 )
                      {
                        v14 = v30 + 1;
                        v12 = v32 + 4;
                        v13 = v31 + 2;
                        dword_6FBB5058(v31, v32, v30, v10, v27, v26, v25, 0, 0);
                      }
                      v16 = v14++;
                      v17 = v12;
                      v12 += 4;
                      v18 = v13;
                      v13 += 2;
                      dword_6FBB5058(v18, v17, v16, v10, v27, v26, v25, 0, 0);
                    }
                    v19 = v14++;
                    v20 = v12;
                    v12 += 4;
                    v21 = v13;
                    v13 += 2;
                    dword_6FBB5058(v21, v20, v19, v10, v27, v26, v25, 0, 0);
                    if ( v14 != v29 )
                    {
LABEL_37:
                      do
                      {
                        dword_6FBB5058(v13, v12, v14, v10, v27, v26, v25, 0, 0);
                        dword_6FBB5058(v13 + 2, v12 + 4, v14 + 1, v10, v27, v26, v25, 0, 0);
                        dword_6FBB5058(v13 + 4, v12 + 8, v14 + 2, v10, v27, v26, v25, 0, 0);
                        v22 = v13 + 6;
                        v23 = v14 + 3;
                        v24 = v12 + 12;
                        v13 += 8;
                        v12 += 16;
                        v14 += 4;
                        dword_6FBB5058(v22, v24, v23, v10, v27, v26, v25, 0, 0);
                      }
                      while ( v14 != v29 );
                    }
                    v30 += v28 - 1 + 1;
                    v31 += 2 * v28;
                    v32 += 4 * v28;
                  }
                  if ( !v33 )
                    break;
                  v33 = 0;
                  v28 = dword_6FBB52F4;
                }
              }
              ++v10;
            }
            while ( v10 != v35 );
            result = v40 + v38 + 1;
            v38 += v40 + 1;
          }
          if ( !v39 )
            break;
          v39 = 0;
        }
      }
    }
  }
  return result;
}
