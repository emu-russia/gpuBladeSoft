void sub_6F7566C0()
{
  int v0; // ebx@4
  int v1; // esi@7
  int v2; // edi@7
  unsigned int v3; // edx@7
  unsigned int v4; // ecx@8
  size_t v5; // ebp@8
  int v6; // ST1C_4@9
  char *v7; // eax@9
  int v8; // ebp@9
  int v9; // eax@9
  int v10; // ecx@10
  int v11; // edi@10
  int v12; // edx@11
  int v13; // eax@11
  int v14; // ecx@18
  int v15; // eax@19
  int v16; // ebp@19
  int v17; // edi@20
  int v18; // eax@20
  int v19; // edi@21
  int v20; // ebp@21
  int v21; // eax@22
  int v22; // edi@22
  int v23; // eax@23
  int v24; // ebp@23
  int v25; // edi@24
  int v26; // eax@24
  int v27; // ebp@25
  int v28; // eax@25
  int v29; // esi@26
  int v30; // edi@26
  int v31; // edi@26
  int v32; // edi@26
  int v33; // edi@26
  int v34; // edi@26
  int v35; // edi@26
  int v36; // edi@26
  int v37; // edi@26
  int v38; // ST1C_4@30
  int v39; // [sp+14h] [bp-28h]@9
  int v40; // [sp+18h] [bp-24h]@9
  int v41; // [sp+1Ch] [bp-20h]@25

  if ( !dword_6FD400E8 || dword_6FD400D0 )
    return;
  v0 = dword_6FBBFE04;
  if ( dword_6FBBFE04 != dword_6FBBFE08 )
  {
    *(_DWORD *)dword_6FBBFE04 = 7;
    *(_DWORD *)(v0 + 4) = 0;
    dword_6FBBFE04 += 8;
    return;
  }
  v1 = dword_6FBBFE00;
  v2 = dword_6FBBFE04 - dword_6FBBFE00;
  v3 = (dword_6FBBFE04 - dword_6FBBFE00) >> 3;
  if ( !v3 )
  {
    v5 = 8;
LABEL_9:
    v6 = dword_6FBBFE04 - dword_6FBBFE00;
    v7 = (char *)sub_6F961B60(v5);
    v2 = v6;
    v8 = (int)&v7[v5];
    v39 = (int)v7;
    v9 = (int)(v7 + 8);
    v40 = v8;
    goto LABEL_10;
  }
  v4 = 2 * v3;
  v5 = -8;
  if ( v3 > 2 * v3 || v4 > 0x1FFFFFFF )
    goto LABEL_9;
  if ( v4 )
  {
    v5 = 16 * v3;
    goto LABEL_9;
  }
  v9 = 8;
  v40 = 0;
  v39 = 0;
LABEL_10:
  v10 = v39;
  v11 = v39 + v2;
  *(_DWORD *)v11 = 7;
  *(_DWORD *)(v11 + 4) = 0;
  if ( v0 != v1 )
  {
    v12 = v1;
    v13 = ((unsigned __int8)((unsigned int)(v0 - v1 - 8) >> 3) + 1) & 7;
    if ( ((unsigned __int8)((unsigned int)(v0 - v1 - 8) >> 3) + 1) & 7 )
    {
      if ( v13 != 1 )
      {
        if ( v13 != 2 )
        {
          if ( v13 != 3 )
          {
            if ( v13 != 4 )
            {
              if ( v13 != 5 )
              {
                if ( v13 != 6 )
                {
                  v14 = *(_DWORD *)v1;
                  *(_DWORD *)(v39 + 4) = *(_DWORD *)(v1 + 4);
                  v12 = v1 + 8;
                  *(_DWORD *)v39 = v14;
                  v10 = v39 + 8;
                }
                v15 = *(_DWORD *)v12;
                v16 = *(_DWORD *)(v12 + 4);
                v10 += 8;
                v12 += 8;
                *(_DWORD *)(v10 - 8) = v15;
                *(_DWORD *)(v10 - 4) = v16;
              }
              v17 = *(_DWORD *)v12;
              v18 = *(_DWORD *)(v12 + 4);
              v10 += 8;
              v12 += 8;
              *(_DWORD *)(v10 - 8) = v17;
              *(_DWORD *)(v10 - 4) = v18;
            }
            v19 = *(_DWORD *)v12;
            v20 = *(_DWORD *)(v12 + 4);
            v10 += 8;
            v12 += 8;
            *(_DWORD *)(v10 - 8) = v19;
            *(_DWORD *)(v10 - 4) = v20;
          }
          v21 = *(_DWORD *)v12;
          v22 = *(_DWORD *)(v12 + 4);
          v10 += 8;
          v12 += 8;
          *(_DWORD *)(v10 - 8) = v21;
          *(_DWORD *)(v10 - 4) = v22;
        }
        v23 = *(_DWORD *)v12;
        v24 = *(_DWORD *)(v12 + 4);
        v10 += 8;
        v12 += 8;
        *(_DWORD *)(v10 - 8) = v23;
        *(_DWORD *)(v10 - 4) = v24;
      }
      v25 = *(_DWORD *)v12;
      v26 = *(_DWORD *)(v12 + 4);
      v12 += 8;
      v10 += 8;
      *(_DWORD *)(v10 - 8) = v25;
      *(_DWORD *)(v10 - 4) = v26;
      if ( v0 == v12 )
        goto LABEL_28;
      v27 = v40;
      v28 = v39;
      v41 = v1;
    }
    else
    {
      v28 = v39;
      v27 = v40;
      v41 = v1;
    }
    do
    {
      v29 = *(_DWORD *)v12;
      v30 = *(_DWORD *)(v12 + 4);
      v12 += 64;
      v10 += 64;
      *(_DWORD *)(v10 - 64) = v29;
      *(_DWORD *)(v10 - 60) = v30;
      v31 = *(_DWORD *)(v12 - 52);
      *(_DWORD *)(v10 - 56) = *(_DWORD *)(v12 - 56);
      *(_DWORD *)(v10 - 52) = v31;
      v32 = *(_DWORD *)(v12 - 44);
      *(_DWORD *)(v10 - 48) = *(_DWORD *)(v12 - 48);
      *(_DWORD *)(v10 - 44) = v32;
      v33 = *(_DWORD *)(v12 - 36);
      *(_DWORD *)(v10 - 40) = *(_DWORD *)(v12 - 40);
      *(_DWORD *)(v10 - 36) = v33;
      v34 = *(_DWORD *)(v12 - 28);
      *(_DWORD *)(v10 - 32) = *(_DWORD *)(v12 - 32);
      *(_DWORD *)(v10 - 28) = v34;
      v35 = *(_DWORD *)(v12 - 20);
      *(_DWORD *)(v10 - 24) = *(_DWORD *)(v12 - 24);
      *(_DWORD *)(v10 - 20) = v35;
      v36 = *(_DWORD *)(v12 - 12);
      *(_DWORD *)(v10 - 16) = *(_DWORD *)(v12 - 16);
      *(_DWORD *)(v10 - 12) = v36;
      v37 = *(_DWORD *)(v12 - 4);
      *(_DWORD *)(v10 - 8) = *(_DWORD *)(v12 - 8);
      *(_DWORD *)(v10 - 4) = v37;
    }
    while ( v0 != v12 );
    v40 = v27;
    v1 = v41;
    v39 = v28;
LABEL_28:
    v9 = v39 + 8 * ((unsigned int)(v0 - 8 - v1) >> 3) + 16;
  }
  if ( v1 )
  {
    v38 = v9;
    j_free_1((void *)v1);
    v9 = v38;
  }
  dword_6FBBFE04 = v9;
  dword_6FBBFE00 = v39;
  dword_6FBBFE08 = v40;
}
