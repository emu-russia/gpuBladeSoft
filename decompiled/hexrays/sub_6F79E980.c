signed int __cdecl sub_6F79E980(int a1, unsigned int a2, unsigned int a3, signed int a4, unsigned int a5)
{
  signed int result; // eax@1
  unsigned int v6; // edi@1
  int v7; // esi@2
  int v8; // ebx@2
  int v9; // eax@8
  unsigned int v10; // eax@8
  int v11; // ebx@8
  unsigned int v12; // ebp@8
  unsigned int v13; // eax@10
  _BYTE *v14; // esi@11
  unsigned int v15; // eax@11
  int v16; // ebp@11
  unsigned int v17; // edx@12
  _BYTE *v18; // edx@13
  int v19; // ebp@13
  int v20; // esi@13
  unsigned int v21; // eax@21
  int v22; // esi@21
  unsigned int v23; // eax@22
  _BYTE *v24; // eax@24
  int v25; // ecx@24
  int v26; // edx@24
  int v27; // ebx@25
  int v28; // ecx@29
  _BYTE *v29; // edx@29
  _BYTE *v30; // edx@38
  int v31; // [sp+0h] [bp-38h]@7
  int v32; // [sp+4h] [bp-34h]@4
  _BYTE *v33; // [sp+8h] [bp-30h]@10
  signed int v34; // [sp+8h] [bp-30h]@25
  int v35; // [sp+Ch] [bp-2Ch]@8
  int v36; // [sp+10h] [bp-28h]@10
  unsigned int v37; // [sp+10h] [bp-28h]@21
  bool v38; // [sp+14h] [bp-24h]@21
  int v39; // [sp+18h] [bp-20h]@10
  int v40; // [sp+18h] [bp-20h]@21
  int v41; // [sp+20h] [bp-18h]@21
  int v42; // [sp+24h] [bp-14h]@21

  result = 3;
  v6 = a2;
  if ( a4 >= 0 )
  {
    v7 = *(_DWORD *)(a1 + 12);
    v8 = *(_DWORD *)(a1 + 8);
    if ( *(_DWORD *)(v8 + 4) < (unsigned int)*(_WORD *)(v7 + 2) + a4 || a5 >> 31 )
      return 3;
    v32 = *(_WORD *)v7;
    if ( *(_DWORD *)v8 >= a5 + v32 )
    {
      v31 = *(_WORD *)(v7 + 2) * *(_BYTE *)(a1 + 18);
      if ( a3 >= a2 + v32 * ((v31 + 7) >> 3) )
      {
        v9 = *(_DWORD *)(v8 + 8);
        v35 = v9;
        v10 = *(_DWORD *)(v8 + 12) + (a4 >> 3) + a5 * v9;
        v11 = a4 & 7;
        v12 = v10;
        if ( a4 & 7 )
        {
          if ( *(_WORD *)v7 )
          {
            v33 = (_BYTE *)v10;
            v13 = (unsigned int)(v31 - 8) >> 3;
            v36 = v13 + 1;
            v39 = v31 - 8 + -8 * v13;
            do
            {
              v14 = v33;
              v15 = 0;
              v16 = v6 + v36;
              if ( v31 <= 7 )
              {
                v19 = (int)v33;
                v18 = (_BYTE *)v6;
                v20 = v31;
              }
              else
              {
                do
                {
                  v17 = *(_BYTE *)(++v6 - 1) | v15;
                  v15 = v17 << 8;
                  *v14++ |= v17 >> v11;
                }
                while ( v6 != v16 );
                v18 = (_BYTE *)v16;
                v19 = (int)&v33[v36];
                v20 = v39;
              }
              v6 = (unsigned int)v18;
              if ( v20 )
              {
                v6 = (unsigned int)(v18 + 1);
                v15 |= (0xFF00u >> v20) & *v18;
              }
              *(_BYTE *)v19 |= v15 >> v11;
              if ( v11 + v20 > 8 )
                *(_BYTE *)(v19 + 1) |= v15 << 8 >> v11;
              v33 += v35;
              --v32;
            }
            while ( v32 );
          }
          return 0;
        }
        if ( !*(_WORD *)v7 )
          return 0;
        v21 = (unsigned int)(v31 - 8) >> 3;
        v38 = v21 + 1 > 6;
        v37 = ((v21 - 3) >> 2) + 1;
        v40 = v31 - 8 + -8 * v21;
        v41 = 4 * v37;
        v22 = v21 + 1;
        v42 = v31 + -32 * v37;
        while ( 1 )
        {
          v28 = v31;
          v29 = (_BYTE *)v12;
          v24 = (_BYTE *)v6;
          if ( v31 <= 7 )
            goto LABEL_30;
          if ( v6 < v12 + 4 && v12 < v6 + 4 || !v38 || ((unsigned __int8)v6 | (unsigned __int8)v12) & 3 )
          {
            v24 = (_BYTE *)(v6 + v22);
            v30 = (_BYTE *)v12;
            do
              *v30++ |= *(_BYTE *)(++v6 - 1);
            while ( (_BYTE *)v6 != v24 );
          }
          else
          {
            if ( (unsigned int)(v31 - 8) <= 0x17 )
            {
              v26 = v12;
              v25 = v6;
              v34 = v31;
              v27 = v31;
              goto LABEL_26;
            }
            v23 = 0;
            do
            {
              *(_DWORD *)(v12 + 4 * v23) |= *(_DWORD *)(v6 + 4 * v23);
              ++v23;
            }
            while ( v37 > v23 );
            v24 = (_BYTE *)(v6 + v22);
            v25 = v6 + v41;
            v26 = v12 + v41;
            if ( v22 != v41 )
            {
              v34 = v42;
              v27 = v42;
LABEL_26:
              *(_BYTE *)v26 |= *(_BYTE *)v25;
              v24 = (_BYTE *)(v6 + v22);
              if ( v27 - 8 > 7 )
              {
                *(_BYTE *)(v26 + 1) |= *(_BYTE *)(v25 + 1);
                if ( v34 > 23 )
                  *(_BYTE *)(v26 + 2) |= *(_BYTE *)(v25 + 2);
              }
              goto LABEL_29;
            }
          }
LABEL_29:
          v28 = v40;
          v29 = (_BYTE *)(v12 + v22);
LABEL_30:
          v6 = (unsigned int)v24;
          if ( v28 )
          {
            v6 = (unsigned int)(v24 + 1);
            *v29 |= *v24 & (unsigned __int8)(0xFF00u >> v28);
          }
          v12 += v35;
          if ( !--v32 )
            return 0;
        }
      }
    }
  }
  return result;
}
