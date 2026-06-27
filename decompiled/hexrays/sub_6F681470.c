unsigned int __usercall sub_6F681470@<eax>(int a1@<eax>)
{
  _DWORD *v1; // ebx@1
  int v2; // edx@2
  int v3; // eax@2
  unsigned int result; // eax@2
  int v5; // esi@3
  int v6; // edx@3
  int v7; // ecx@3
  unsigned int v8; // eax@3
  unsigned int v9; // edi@4
  size_t v10; // ebp@4
  int v11; // ST1C_4@5
  int v12; // ST18_4@5
  char *v13; // eax@5
  int v14; // ecx@5
  int v15; // ebp@5
  int v16; // eax@6
  int v17; // edx@6
  int v18; // edx@7
  int v19; // ecx@7
  int v20; // ebp@7
  int v21; // ecx@14
  int v22; // eax@15
  int v23; // ebp@15
  int v24; // edi@16
  int v25; // eax@16
  int v26; // edi@17
  int v27; // ebp@17
  int v28; // eax@18
  int v29; // edi@18
  int v30; // eax@19
  int v31; // ebp@19
  int v32; // eax@20
  int v33; // edi@20
  int v34; // eax@20
  int v35; // edi@21
  int v36; // ebp@21
  int v37; // ebp@21
  int v38; // ebp@21
  int v39; // ebp@21
  int v40; // ebp@21
  int v41; // ebp@21
  int v42; // ebp@21
  int v43; // ebp@21
  unsigned int v44; // ebx@23
  int v45; // ST18_4@25
  int v46; // [sp+10h] [bp-2Ch]@5
  int v47; // [sp+14h] [bp-28h]@5

  v1 = (_DWORD *)dword_6FBBFE04;
  if ( dword_6FBBFE04 != dword_6FBBFE08 )
  {
    v2 = *(_DWORD *)(a1 + 4);
    v3 = *(_DWORD *)a1;
    *(_DWORD *)(dword_6FBBFE04 + 4) = v2;
    *v1 = v3;
    result = dword_6FBBFE04;
    dword_6FBBFE04 += 8;
    return result;
  }
  v5 = dword_6FBBFE00;
  v6 = a1;
  v7 = dword_6FBBFE04 - dword_6FBBFE00;
  v8 = (dword_6FBBFE04 - dword_6FBBFE00) >> 3;
  if ( !v8 )
  {
    v10 = 8;
LABEL_5:
    v11 = v6;
    v12 = dword_6FBBFE04 - dword_6FBBFE00;
    v13 = (char *)sub_6F961B60(v10);
    v6 = v11;
    v14 = (int)&v13[v10];
    v46 = (int)v13;
    v15 = (int)(v13 + 8);
    v47 = v14;
    v7 = v12;
    goto LABEL_6;
  }
  v9 = 2 * v8;
  v10 = -8;
  if ( v8 > 2 * v8 || v9 > 0x1FFFFFFF )
    goto LABEL_5;
  if ( v9 )
  {
    v10 = 16 * v8;
    goto LABEL_5;
  }
  v15 = 8;
  v47 = 0;
  v46 = 0;
LABEL_6:
  v16 = *(_DWORD *)v6;
  v17 = *(_DWORD *)(v6 + 4);
  *(_DWORD *)(v46 + v7) = v16;
  *(_DWORD *)(v46 + v7 + 4) = v17;
  if ( v1 == (_DWORD *)v5 )
  {
    result = v46;
    goto LABEL_24;
  }
  v18 = v5;
  v19 = v46;
  v20 = ((unsigned __int8)(((unsigned int)v1 + -v5 - 8) >> 3) + 1) & 7;
  if ( ((unsigned __int8)(((unsigned int)v1 + -v5 - 8) >> 3) + 1) & 7 )
  {
    if ( v20 != 1 )
    {
      if ( v20 != 2 )
      {
        if ( v20 != 3 )
        {
          if ( v20 != 4 )
          {
            if ( v20 != 5 )
            {
              if ( v20 != 6 )
              {
                v21 = *(_DWORD *)v5;
                v18 = v5 + 8;
                *(_DWORD *)(v46 + 4) = *(_DWORD *)(v5 + 4);
                *(_DWORD *)v46 = v21;
                v19 = v46 + 8;
              }
              v22 = *(_DWORD *)v18;
              v23 = *(_DWORD *)(v18 + 4);
              v19 += 8;
              v18 += 8;
              *(_DWORD *)(v19 - 8) = v22;
              *(_DWORD *)(v19 - 4) = v23;
            }
            v24 = *(_DWORD *)v18;
            v25 = *(_DWORD *)(v18 + 4);
            v19 += 8;
            v18 += 8;
            *(_DWORD *)(v19 - 8) = v24;
            *(_DWORD *)(v19 - 4) = v25;
          }
          v26 = *(_DWORD *)v18;
          v27 = *(_DWORD *)(v18 + 4);
          v19 += 8;
          v18 += 8;
          *(_DWORD *)(v19 - 8) = v26;
          *(_DWORD *)(v19 - 4) = v27;
        }
        v28 = *(_DWORD *)v18;
        v29 = *(_DWORD *)(v18 + 4);
        v19 += 8;
        v18 += 8;
        *(_DWORD *)(v19 - 8) = v28;
        *(_DWORD *)(v19 - 4) = v29;
      }
      v30 = *(_DWORD *)v18;
      v31 = *(_DWORD *)(v18 + 4);
      v19 += 8;
      v18 += 8;
      *(_DWORD *)(v19 - 8) = v30;
      *(_DWORD *)(v19 - 4) = v31;
    }
    v32 = *(_DWORD *)(v18 + 4);
    v33 = *(_DWORD *)v18;
    v18 += 8;
    v19 += 8;
    *(_DWORD *)(v19 - 4) = v32;
    v34 = v46;
    *(_DWORD *)(v19 - 8) = v33;
    if ( v1 == (_DWORD *)v18 )
      goto LABEL_23;
  }
  else
  {
    v34 = v46;
  }
  do
  {
    v35 = *(_DWORD *)v18;
    v36 = *(_DWORD *)(v18 + 4);
    v18 += 64;
    v19 += 64;
    *(_DWORD *)(v19 - 64) = v35;
    *(_DWORD *)(v19 - 60) = v36;
    v37 = *(_DWORD *)(v18 - 52);
    *(_DWORD *)(v19 - 56) = *(_DWORD *)(v18 - 56);
    *(_DWORD *)(v19 - 52) = v37;
    v38 = *(_DWORD *)(v18 - 44);
    *(_DWORD *)(v19 - 48) = *(_DWORD *)(v18 - 48);
    *(_DWORD *)(v19 - 44) = v38;
    v39 = *(_DWORD *)(v18 - 36);
    *(_DWORD *)(v19 - 40) = *(_DWORD *)(v18 - 40);
    *(_DWORD *)(v19 - 36) = v39;
    v40 = *(_DWORD *)(v18 - 28);
    *(_DWORD *)(v19 - 32) = *(_DWORD *)(v18 - 32);
    *(_DWORD *)(v19 - 28) = v40;
    v41 = *(_DWORD *)(v18 - 20);
    *(_DWORD *)(v19 - 24) = *(_DWORD *)(v18 - 24);
    *(_DWORD *)(v19 - 20) = v41;
    v42 = *(_DWORD *)(v18 - 12);
    *(_DWORD *)(v19 - 16) = *(_DWORD *)(v18 - 16);
    *(_DWORD *)(v19 - 12) = v42;
    v43 = *(_DWORD *)(v18 - 4);
    *(_DWORD *)(v19 - 8) = *(_DWORD *)(v18 - 8);
    *(_DWORD *)(v19 - 4) = v43;
  }
  while ( v1 != (_DWORD *)v18 );
  v46 = v34;
LABEL_23:
  v44 = ((unsigned int)v1 + -v5 - 8) >> 3;
  result = v46 + 8 * v44 + 8;
  v15 = v46 + 8 * v44 + 16;
LABEL_24:
  if ( v5 )
  {
    v45 = result;
    j_free_1((void *)v5);
    result = v45;
  }
  dword_6FBBFE04 = v15;
  dword_6FBBFE00 = v46;
  dword_6FBBFE08 = v47;
  return result;
}
