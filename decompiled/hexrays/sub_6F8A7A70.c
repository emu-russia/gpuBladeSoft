int __usercall sub_6F8A7A70@<eax>(int a1@<eax>, int *a2@<edx>, int a3@<ecx>, double a4, int a5, int a6, int a7)
{
  int v7; // edi@1
  int *v8; // eax@1
  int v9; // ecx@1
  int v10; // esi@1
  int *v11; // ebx@1
  signed int v12; // eax@1
  int v13; // edx@1
  int v14; // ebp@5
  int v15; // eax@7
  int v16; // edx@7
  signed int v17; // ebp@13
  int v19; // eax@19
  int v20; // ecx@20
  signed int v21; // edx@20
  int v22; // ecx@22
  int v23; // edi@26
  signed int v24; // eax@27
  int v25; // eax@32
  signed int v26; // ST2C_4@24
  int v27; // ST28_4@24
  signed int v28; // eax@24
  int v29; // eax@46
  int v30; // [sp+18h] [bp-44h]@6
  int *v31; // [sp+1Ch] [bp-40h]@1
  _DWORD *v32; // [sp+20h] [bp-3Ch]@1
  signed int v33; // [sp+24h] [bp-38h]@6
  int v34; // [sp+38h] [bp-24h]@1
  int v35; // [sp+3Ch] [bp-20h]@1

  v7 = a1;
  v31 = a2;
  v32 = (_DWORD *)a3;
  v8 = sub_6F8B10C0(a4, (int)&v35, (int)&v34);
  v9 = v34;
  v10 = *(_DWORD *)v7;
  v11 = v8;
  v12 = v34 - *(_DWORD *)v7;
  v13 = v12 + v35;
  v34 -= *(_DWORD *)v7;
  v35 += v12;
  if ( v12 <= 0 )
  {
    if ( !a5 )
    {
      v17 = 0;
      goto LABEL_15;
    }
    v33 = 0;
    v30 = 0;
    if ( !v12 )
      goto LABEL_19;
    v11 = sub_6F8B0C60((int)v11, v10 - v9);
    goto LABEL_39;
  }
  if ( v10 == 53 )
  {
    v17 = 0;
    if ( !a5 || *(_DWORD *)(v7 + 12) != 1 )
      goto LABEL_15;
    v33 = sub_6F8B1430((int)v11, v12);
    if ( !v33 )
    {
      sub_6F8B0060((int)v11, v34);
      v13 = v35;
      v30 = 0;
      goto LABEL_19;
    }
LABEL_41:
    sub_6F8B0060((int)v11, v34);
    v30 = 16;
    goto LABEL_39;
  }
  if ( a6 != 1 )
  {
    if ( a6 == 2 )
    {
      v14 = 1;
    }
    else if ( v12 == 1 )
    {
      v17 = 0;
      if ( !a5 )
        goto LABEL_15;
      v14 = ((unsigned int)v11[5] >> 1) & 1;
    }
    else
    {
      v14 = ((unsigned int)v11[((v12 - 1) >> 5) + 5] >> (v12 - 1)) & 1;
    }
    v33 = sub_6F8B1430((int)v11, v12);
    v30 = 16 * (v33 != 0);
    sub_6F8B0060((int)v11, v34);
    if ( v14 )
    {
      v11 = (int *)sub_6F8A79D0((int)v11);
      v15 = v10 & 0x1F;
      v16 = 32 - v15;
      if ( v10 & 0x1F )
        v15 = 32 - v15;
      _BitScanReverse((unsigned int *)&v16, v11[v11[4] + 4]);
      if ( (v16 ^ 0x1F) == v15 )
      {
        v13 = v35;
        v30 = 32;
      }
      else
      {
        if ( !v33 )
          v33 = v11[5] & 1;
        sub_6F8B0060((int)v11, 1);
        v30 = 32;
        v13 = v35++ + 1;
      }
      goto LABEL_19;
    }
    goto LABEL_39;
  }
  v33 = sub_6F8B1430((int)v11, v12);
  if ( v33 )
    goto LABEL_41;
  sub_6F8B0060((int)v11, v34);
  v30 = 0;
LABEL_39:
  v13 = v35;
LABEL_19:
  v19 = *(_DWORD *)(v7 + 4);
  if ( v19 <= v13 )
  {
    v25 = *(_DWORD *)(v7 + 8);
    if ( v25 < v13 )
    {
      v35 = v25 + 1;
      *(_DWORD *)a7 = 163;
      v30 = 0;
      *errno() = 34;
      v13 = v35;
      v11[4] = 0;
    }
    goto LABEL_31;
  }
  v35 = *(_DWORD *)(v7 + 4);
  v20 = v19 - v13;
  v21 = v20;
  if ( v10 < v20 || (v17 = *(_DWORD *)(v7 + 16)) != 0 )
  {
    v11[4] = 0;
    v13 = v19;
    v30 = 0;
    *(_DWORD *)a7 = 80;
LABEL_31:
    v17 = 1;
    *v31 = v13;
    sub_6F8B13D0(v32, v10, (int)v11);
    *(_DWORD *)a7 |= v30;
    goto LABEL_15;
  }
  v22 = v20 - 1;
  if ( v22 > 0 && !v33 )
  {
    v26 = v21;
    v27 = v22;
    v28 = sub_6F8B1430((int)v11, v22);
    v21 = v26;
    v22 = v27;
    v33 = v28;
  }
  if ( a5 | v33 )
  {
    v23 = v11[(v22 >> 5) + 5] & (1 << v22);
    sub_6F8B0060((int)v11, v21);
    *(_DWORD *)a7 = 2;
    if ( v23 )
    {
      v29 = sub_6F8A79D0((int)v11);
      v13 = v35;
      v30 = 96;
      v11 = (int *)v29;
    }
    else
    {
      v13 = v35;
      v24 = 80;
      if ( !v33 )
        v24 = v30;
      v30 = v24;
    }
    goto LABEL_31;
  }
LABEL_15:
  sub_6F8B07F0(v11);
  return v17;
}
