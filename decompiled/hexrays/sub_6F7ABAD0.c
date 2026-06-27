int __usercall sub_6F7ABAD0@<eax>(int a1@<eax>, int a2@<edx>)
{
  signed int *v2; // ebp@1
  int v3; // esi@1
  int v4; // ebx@2
  int v5; // edi@3
  __int16 v7; // ST38_2@13
  unsigned int v8; // esi@17
  unsigned int v9; // esi@21
  unsigned int v10; // esi@24
  unsigned int v11; // esi@33
  char *v12; // eax@36
  signed int v13; // edx@36
  int v14; // esi@36
  int v15; // eax@38
  _WORD *v16; // ebx@43
  signed __int64 v17; // rax@43
  int v18; // esi@48
  signed __int64 v19; // rax@49
  char *v20; // [sp+24h] [bp-68h]@4
  char *v21; // [sp+28h] [bp-64h]@4
  char *v22; // [sp+2Ch] [bp-60h]@4
  int v23; // [sp+30h] [bp-5Ch]@7
  int v24; // [sp+30h] [bp-5Ch]@14
  int v25; // [sp+34h] [bp-58h]@7
  __int16 v26; // [sp+34h] [bp-58h]@15
  int v27; // [sp+34h] [bp-58h]@42
  int v28; // [sp+34h] [bp-58h]@48
  int v29; // [sp+38h] [bp-54h]@15
  int v30; // [sp+3Ch] [bp-50h]@13
  int v31; // [sp+40h] [bp-4Ch]@14
  int v32; // [sp+44h] [bp-48h]@38
  int v33; // [sp+48h] [bp-44h]@13
  int v34; // [sp+4Ch] [bp-40h]@14
  signed int v35; // [sp+50h] [bp-3Ch]@26
  int v36; // [sp+54h] [bp-38h]@42
  int v37; // [sp+58h] [bp-34h]@36
  int v38; // [sp+5Ch] [bp-30h]@41
  int v39; // [sp+64h] [bp-28h]@4
  unsigned int v40; // [sp+68h] [bp-24h]@3
  int v41; // [sp+6Ch] [bp-20h]@36

  v2 = *(signed int **)(a1 + 676);
  v3 = *(_DWORD *)(a2 + 28);
  if ( !v2
    || (v4 = a1, !*(_DWORD *)(a1 + 648))
    || (v5 = a2, (*(int (__cdecl **)(int, signed int, int, int *))(a1 + 508))(a1, 1668702578, a2, (int *)&v40))
    || (v39 = sub_6F772380(v5, v40)) != 0 )
  {
    v39 = 0;
    v21 = 0;
    v20 = 0;
    v22 = 0;
  }
  else
  {
    v23 = *(_DWORD *)(v5 + 32);
    v25 = *(_DWORD *)v5;
    if ( sub_6F772560(v5) != 0x10000 )
    {
      v39 = 0;
      v21 = 0;
      v20 = 0;
      v22 = 0;
      goto LABEL_9;
    }
    v22 = sub_6F773B30(v3, 4, 0, *v2, 0, &v39);
    v21 = 0;
    v20 = 0;
    if ( !v39 )
    {
      v20 = sub_6F773B30(v3, 4, 0, *v2, 0, &v39);
      if ( !v39 )
      {
        v21 = sub_6F773B30(v3, 4, 0, *v2, 0, &v39);
        if ( !v39 )
        {
          v7 = sub_6F7724C0(v5);
          v30 = v23 - v25 + (unsigned __int16)sub_6F7724C0(v5);
          v33 = v7 & 0xFFF;
          if ( v7 & 0xFFF )
          {
            v24 = 0;
            v34 = v3;
            v31 = v4;
            while ( 1 )
            {
              v29 = (unsigned __int16)sub_6F7724C0(v5);
              v26 = sub_6F7724C0(v5);
              if ( v26 >= 0 )
              {
                if ( v26 & 0x4000 && 2 * *v2 )
                {
                  v11 = 0;
                  do
                  {
                    ++v11;
                    sub_6F7724C0(v5);
                  }
                  while ( 2 * *v2 > v11 );
                }
              }
              else
              {
                if ( *v2 )
                {
                  v8 = 0;
                  do
                    *(_DWORD *)&v22[4 * v8++] = 4 * (signed __int16)sub_6F7724C0(v5);
                  while ( *v2 > v8 );
                  if ( v26 & 0x4000 )
                  {
                    if ( *v2 )
                    {
                      v9 = 0;
                      do
                        *(_DWORD *)&v20[4 * v9++] = 4 * (signed __int16)sub_6F7724C0(v5);
                      while ( *v2 > v9 );
                      if ( *v2 )
                      {
                        v10 = 0;
                        do
                          *(_DWORD *)&v21[4 * v10++] = 4 * (signed __int16)sub_6F7724C0(v5);
                        while ( *v2 > v10 );
                      }
                    }
                  }
                }
                v35 = sub_6F7AAAA0((unsigned int *)v2, v26, (int)v22, (int)v20, (int)v21);
                if ( v35 && v26 & 0x2000 )
                {
                  v37 = *(_DWORD *)(v5 + 32) - *(_DWORD *)v5;
                  *(_DWORD *)(v5 + 32) = v30 + *(_DWORD *)v5;
                  v12 = sub_6F969250(v5, (unsigned int *)&v41);
                  v13 = v41;
                  v14 = (int)v12;
                  if ( !v41 )
                    v13 = *(_DWORD *)(v31 + 644);
                  v15 = sub_6F9693CD(v5, v13);
                  v32 = v15;
                  if ( v14 && v15 )
                  {
                    if ( v14 == -1 )
                    {
                      v18 = 0;
                      v28 = *(_DWORD *)(v31 + 644);
                      while ( v18 != v28 )
                      {
                        v19 = (unsigned int)(((signed int)((unsigned __int64)(v35
                                                                            * (signed __int64)*(_WORD *)(v32 + 2 * v18)) >> 32) >> 31)
                                           + 0x8000)
                            + v35 * (signed __int64)*(_WORD *)(v32 + 2 * v18);
                        *(_WORD *)(*(_DWORD *)(v31 + 648) + 2 * v18++) += WORD1(v19);
                      }
                    }
                    else
                    {
                      v38 = v41;
                      if ( v41 )
                      {
                        v27 = 0;
                        v36 = *(_DWORD *)(v31 + 648);
                        do
                        {
                          v16 = (_WORD *)(v36 + 2 * *(_WORD *)(v14 + 2 * v27));
                          v17 = (unsigned int)(((signed int)((unsigned __int64)(v35
                                                                              * (signed __int64)*(_WORD *)(v32 + 2 * v27)) >> 32) >> 31)
                                             + 0x8000)
                              + v35 * (signed __int64)*(_WORD *)(v32 + 2 * v27);
                          ++v27;
                          *v16 += WORD1(v17);
                        }
                        while ( v27 != v38 );
                      }
LABEL_44:
                      sub_6F773D90(v34, v14);
                    }
                  }
                  else if ( v14 != -1 )
                  {
                    goto LABEL_44;
                  }
                  sub_6F773D90(v34, v32);
                  v30 += v29;
                  *(_DWORD *)(v5 + 32) = *(_DWORD *)v5 + v37;
                  goto LABEL_29;
                }
              }
              v30 += v29;
LABEL_29:
              if ( ++v24 == v33 )
              {
                v3 = v34;
                break;
              }
            }
          }
        }
      }
    }
LABEL_9:
    sub_6F772460(v5);
  }
  sub_6F773D90(v3, (int)v22);
  sub_6F773D90(v3, (int)v20);
  sub_6F773D90(v3, (int)v21);
  return v39;
}
