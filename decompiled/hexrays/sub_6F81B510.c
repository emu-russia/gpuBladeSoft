int __usercall sub_6F81B510@<eax>(int a1@<eax>)
{
  char v1; // dl@1
  int v2; // ecx@1
  unsigned __int8 v3; // di@1
  int v4; // ebx@1
  int v5; // esi@2
  int v6; // edi@2
  int v7; // eax@3
  signed int v8; // edi@3
  signed int v9; // eax@3
  int v10; // eax@10
  int v11; // esi@11
  int v12; // ebp@12
  int v13; // ebp@18
  signed int v14; // eax@23
  signed int v15; // edx@23
  int v16; // eax@31
  int v17; // eax@32
  int v18; // edx@33
  int v19; // edx@39
  int v21; // edx@41
  int v22; // ebp@56
  int v23; // ebx@64
  int v24; // edx@72
  int v25; // ebp@73
  int v26; // eax@80
  char v27; // [sp+7h] [bp-1Dh]@1
  signed int v28; // [sp+8h] [bp-1Ch]@2
  int v29; // [sp+Ch] [bp-18h]@3
  char v30; // [sp+10h] [bp-14h]@1
  char v31; // [sp+11h] [bp-13h]@1
  unsigned __int16 v32; // [sp+12h] [bp-12h]@1

  v1 = *(_BYTE *)(a1 + 11);
  v2 = *(_DWORD *)a1;
  v3 = *(_BYTE *)(a1 + 10);
  v32 = *(_WORD *)(a1 + 6);
  v30 = (char)(*(_BYTE *)(a1 + 11) << 6) >> 6;
  v27 = v1 >> 6;
  v31 = (char)(16 * v1) >> 6;
  v4 = *(_BYTE *)(a1 + 9);
  if ( v1 >> 6 )
  {
    v5 = *(_DWORD *)a1;
    v6 = 0;
    v28 = *(_BYTE *)(a1 + 10);
    if ( v28 > 14 )
      goto LABEL_3;
LABEL_43:
    v11 = (unsigned __int8)byte_6FB889FC[v6] + v5;
    if ( v27 == 1 )
    {
      v2 -= (unsigned __int8)byte_6FB889FB[v4];
      goto LABEL_45;
    }
LABEL_21:
    v4 = 0;
    if ( v28 > 14 )
    {
      v29 = v30;
LABEL_23:
      v14 = 2;
      v15 = 1;
      v2 += (unsigned __int8)byte_6FB889FC[v4];
      goto LABEL_24;
    }
LABEL_45:
    v17 = v2 + (unsigned __int8)byte_6FB889FC[v4];
    return v17 - v11;
  }
  v21 = v4 + 1;
  v5 = v2 - (unsigned __int8)byte_6FB889FB[v4];
  v28 = v3;
  if ( (signed int)v3 <= 14 )
  {
    v6 = *(_BYTE *)(a1 + 9);
    goto LABEL_43;
  }
  if ( v21 > 15 )
  {
    if ( v21 != 16 )
      v5 += (unsigned __int8)byte_6FB889EC[v4];
    v8 = 0;
    v9 = 1;
    v29 = v30;
    if ( v30 )
      goto LABEL_4;
    goto LABEL_51;
  }
  v6 = *(_BYTE *)(a1 + 9);
LABEL_3:
  v7 = (unsigned __int8)byte_6FB889FC[v6];
  v8 = 1;
  v5 += v7;
  v9 = 2;
  v29 = v30;
  if ( 1 != v30 )
  {
LABEL_4:
    v9 = 1;
    goto LABEL_5;
  }
LABEL_51:
  if ( v8 < 2 )
  {
    v22 = 0;
  }
  else if ( v8 < 4 )
  {
    v22 = 1;
  }
  else if ( v8 < 6 )
  {
    v22 = 2;
  }
  else if ( v8 < 10 )
  {
    v22 = 3;
  }
  else if ( v8 < 18 )
  {
    v22 = 4;
  }
  else
  {
    v22 = (v8 >= 34) + 5;
  }
  v5 -= (unsigned __int8)byte_6FB88A1A[v22];
LABEL_5:
  if ( v9 < 2 )
  {
    v10 = 0;
  }
  else if ( v9 < 4 )
  {
    v10 = 1;
  }
  else if ( v9 < 6 )
  {
    v10 = 2;
  }
  else if ( v9 < 10 )
  {
    v10 = 3;
  }
  else if ( v9 < 18 )
  {
    v10 = 4;
  }
  else
  {
    v10 = (v9 >= 34) + 5;
  }
  v11 = (unsigned __int8)byte_6FB88A1A[v10] + v5;
  if ( !v8 )
  {
    v12 = 1;
    if ( !v31 )
    {
      if ( (signed int)v32 > 4128 )
      {
        ++v11;
      }
      else
      {
        if ( (signed int)v32 < 2 )
        {
          v26 = 0;
        }
        else if ( (signed int)v32 < 4 )
        {
          v26 = 1;
        }
        else if ( (signed int)v32 < 6 )
        {
          v26 = 2;
        }
        else if ( (signed int)v32 < 10 )
        {
          v26 = 3;
        }
        else if ( (signed int)v32 < 18 )
        {
          v26 = 4;
        }
        else
        {
          v26 = ((signed int)v32 >= 34) + 5;
        }
        v12 = v32 + 1;
        v11 -= (unsigned __int8)byte_6FB88A1A[v26];
      }
    }
    if ( v12 < 2 )
    {
      v13 = 0;
    }
    else if ( v12 < 4 )
    {
      v13 = 1;
    }
    else if ( v12 < 6 )
    {
      v13 = 2;
    }
    else if ( v12 < 10 )
    {
      v13 = 3;
    }
    else if ( v12 < 18 )
    {
      v13 = 4;
    }
    else
    {
      v13 = (v12 >= 34) + 5;
    }
    v11 += (unsigned __int8)byte_6FB88A1A[v13];
  }
  if ( v27 != 1 )
    goto LABEL_21;
  v2 -= (unsigned __int8)byte_6FB889FB[v4];
  if ( v4 + 1 <= 15 )
    goto LABEL_23;
  if ( v4 != 15 )
    v2 += (unsigned __int8)byte_6FB889EC[v4];
  v14 = 1;
  v15 = 0;
LABEL_24:
  if ( v15 == v29 )
  {
    if ( v15 < 2 )
    {
      v23 = 0;
    }
    else if ( v15 < 4 )
    {
      v23 = 1;
    }
    else if ( v15 < 6 )
    {
      v23 = 2;
    }
    else if ( v15 < 10 )
    {
      v23 = 3;
    }
    else if ( v15 < 18 )
    {
      v23 = 4;
    }
    else
    {
      v23 = (v15 >= 34) + 5;
    }
    v2 -= (unsigned __int8)byte_6FB88A1A[v23];
  }
  else
  {
    v14 = 1;
  }
  if ( v14 < 2 )
  {
    v16 = 0;
  }
  else if ( v14 < 4 )
  {
    v16 = 1;
  }
  else if ( v14 < 6 )
  {
    v16 = 2;
  }
  else if ( v14 < 10 )
  {
    v16 = 3;
  }
  else if ( v14 < 18 )
  {
    v16 = 4;
  }
  else
  {
    v16 = (v14 >= 34) + 5;
  }
  v17 = v2 + (unsigned __int8)byte_6FB88A1A[v16];
  if ( v15 )
    return v17 - v11;
  v18 = 1;
  if ( v31 == 1 )
  {
    if ( (signed int)v32 > 4128 )
    {
      ++v17;
    }
    else
    {
      if ( (signed int)v32 < 2 )
      {
        v24 = 0;
      }
      else if ( (signed int)v32 < 4 )
      {
        v24 = 1;
      }
      else if ( (signed int)v32 < 6 )
      {
        v24 = 2;
      }
      else if ( (signed int)v32 < 10 )
      {
        v24 = 3;
      }
      else if ( (signed int)v32 < 18 )
      {
        v24 = 4;
      }
      else
      {
        v24 = ((signed int)v32 >= 34) + 5;
      }
      v25 = (unsigned __int8)byte_6FB88A1A[v24];
      v18 = v32 + 1;
      v17 -= v25;
    }
  }
  if ( v18 < 2 )
  {
    v19 = 0;
  }
  else if ( v18 < 4 )
  {
    v19 = 1;
  }
  else if ( v18 < 6 )
  {
    v19 = 2;
  }
  else if ( v18 < 10 )
  {
    v19 = 3;
  }
  else if ( v18 < 18 )
  {
    v19 = 4;
  }
  else
  {
    v19 = (v18 >= 34) + 5;
  }
  return (unsigned __int8)byte_6FB88A1A[v19] + v17 - v11;
}
