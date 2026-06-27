unsigned int __usercall sub_6F77A6B0@<eax>(_BYTE *a1@<eax>, unsigned int a2@<edx>, int a3@<ecx>, int *a4)
{
  int v4; // esi@3
  int v5; // ecx@3
  signed int v6; // ebx@6
  signed int v7; // edx@6
  int v8; // edx@6
  unsigned int result; // eax@11
  int v10; // ebp@20
  int v11; // ebx@23
  int v12; // ebx@24
  int v13; // edi@25
  int v14; // ebx@25
  int v15; // ecx@27
  signed int v16; // eax@28
  int v17; // ebx@31
  signed int v18; // edx@47
  int v19; // edx@47
  int v20; // ecx@66
  int v21; // edi@68
  int v22; // esi@72
  int v23; // ecx@75
  unsigned int v24; // [sp+10h] [bp-3Ch]@1
  int v25; // [sp+14h] [bp-38h]@3
  signed int v26; // [sp+14h] [bp-38h]@20
  signed int v27; // [sp+18h] [bp-34h]@3
  int v28; // [sp+1Ch] [bp-30h]@3
  int v29; // [sp+20h] [bp-2Ch]@34
  signed int v30; // [sp+20h] [bp-2Ch]@44
  int v31; // [sp+24h] [bp-28h]@1
  unsigned int v32; // [sp+28h] [bp-24h]@43

  v24 = a2;
  v31 = a3;
  if ( a4 )
    *a4 = 0;
  v28 = 0;
  v27 = 0;
  v4 = 0;
  v5 = 4;
  v25 = 0;
LABEL_4:
  if ( v5 )
  {
    if ( (unsigned int)++a1 >= v24 )
      goto LABEL_11;
  }
  while ( 1 )
  {
    v6 = *a1;
    v7 = v6 >> v5;
    v5 = 4 - v5;
    v8 = v7 & 0xF;
    if ( v8 == 14 )
    {
      v27 = 1;
      goto LABEL_4;
    }
    if ( v8 > 9 )
      break;
    if ( v4 <= 214748363 )
    {
      if ( v8 || v4 )
      {
        ++v28;
        v4 = v8 + 10 * v4;
      }
      else
      {
        v4 = 0;
      }
      goto LABEL_4;
    }
    ++v25;
    if ( v5 )
    {
      if ( (unsigned int)++a1 >= v24 )
        goto LABEL_11;
    }
  }
  v10 = v25;
  v26 = 0;
  if ( v8 == 10 )
  {
    v29 = v10;
LABEL_35:
    if ( !v5 )
      goto LABEL_38;
LABEL_36:
    if ( v24 <= (unsigned int)(a1 + 1) )
      goto LABEL_11;
    v6 = (a1++)[1];
LABEL_38:
    while ( 1 )
    {
      v8 = (v6 >> v5) & 0xF;
      v5 = 4 - v5;
      if ( v8 > 9 )
        break;
      if ( v8 || v4 )
      {
        if ( v4 <= 214748363 && v26 <= 8 )
        {
          ++v26;
          v4 = v8 + 10 * v4;
        }
        goto LABEL_35;
      }
      --v29;
      if ( v5 )
        goto LABEL_36;
    }
    v10 = v29;
    if ( v8 != 12 )
      goto LABEL_22;
    goto LABEL_43;
  }
  if ( v8 == 12 )
  {
LABEL_43:
    v32 = 1;
    goto LABEL_44;
  }
LABEL_22:
  if ( v8 != 11 )
  {
    result = 0;
    v11 = 0;
    if ( !v4 )
      goto LABEL_12;
    goto LABEL_24;
  }
  v32 = 0;
LABEL_44:
  v30 = 0;
  v11 = 0;
LABEL_45:
  if ( !v5 )
    goto LABEL_47;
LABEL_46:
  if ( v24 <= (unsigned int)++a1 )
    goto LABEL_11;
LABEL_47:
  while ( 1 )
  {
    v18 = (signed int)*a1 >> v5;
    v5 = 4 - v5;
    v19 = v18 & 0xF;
    if ( v19 > 9 )
      break;
    if ( v11 > 1000 )
    {
      v30 = 1;
      goto LABEL_45;
    }
    v11 = v19 + 10 * v11;
    if ( v5 )
      goto LABEL_46;
  }
  if ( v32 )
    v11 = -v11;
  if ( !v4 )
    goto LABEL_11;
  if ( v30 )
  {
    result = v32 < 1 ? 0x7FFFFFFF : 0;
    goto LABEL_12;
  }
LABEL_24:
  v12 = v31 + v10 + v11;
  if ( a4 )
  {
    v13 = v28 + v26;
    v14 = v28 + v12;
    if ( v28 + v26 > 5 )
    {
      if ( v4 / dword_6FB5750C[v13] <= 0x7FFF )
      {
        result = sub_6F7C9760(v4, dword_6FB5750C[v13]);
        *a4 = v14 - 5;
      }
      else
      {
        result = sub_6F7C9760(v4, dword_6FB57510[v13]);
        *a4 = v14 - 4;
      }
    }
    else if ( v4 > 0x7FFF )
    {
      result = sub_6F7C9760(v4, 10);
      *a4 = v14 - v13 + 1;
    }
    else
    {
      v15 = v14 - v13;
      if ( v14 > 0 )
      {
        v16 = 5;
        if ( v14 <= 5 )
          v16 = v14;
        if ( v16 - v13 > 0 )
        {
          v4 *= dword_6FB57520[v16 - v13];
          v17 = v14 - v16;
          v15 = v17;
          if ( v4 > 0x7FFF )
          {
            v15 = v17 + 1;
            v4 /= 10;
          }
        }
      }
      result = v4 << 16;
      *a4 = v15;
    }
    goto LABEL_12;
  }
  result = 0x7FFFFFFF;
  v20 = v12 + v28;
  if ( v12 + v28 > 5 )
    goto LABEL_12;
  result = 0;
  if ( v20 < -5 )
    goto LABEL_12;
  v21 = v26 - v12;
  if ( v20 < 0 )
  {
    v21 += v20;
    v4 /= dword_6FB57520[-v20];
  }
  if ( v21 == 10 )
  {
    v23 = 1000000000;
    v4 /= 10;
LABEL_76:
    result = sub_6F7C9760(v4, v23);
    goto LABEL_12;
  }
  if ( v21 > 0 )
  {
    v23 = dword_6FB57520[v21];
    if ( v4 / v23 <= 0x7FFF )
      goto LABEL_76;
LABEL_11:
    result = 0;
    goto LABEL_12;
  }
  result = 0x7FFFFFFF;
  v22 = dword_6FB57520[-v21] * v4;
  if ( v22 <= 0x7FFF )
    result = v22 << 16;
LABEL_12:
  if ( v27 )
    result = -result;
  return result;
}
