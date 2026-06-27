int __usercall sub_6F81AC30@<eax>(int result@<eax>)
{
  int v1; // edi@1
  int v2; // ebx@1
  unsigned __int8 v3; // cl@1
  int v4; // esi@2
  int v5; // edx@2
  int v6; // ecx@2
  int v7; // ecx@3
  signed int v8; // edi@3
  signed int v9; // esi@3
  int v10; // ecx@3
  char v11; // dl@4
  int v12; // edx@4
  unsigned int v13; // ebp@4
  int v14; // esi@11
  int v15; // ebx@12
  signed int v16; // ebp@13
  signed __int16 v17; // di@13
  int v18; // ecx@13
  int v19; // ecx@19
  int v20; // esi@20
  int v21; // ebp@22
  int v22; // edi@23
  int v23; // ecx@33
  int v24; // edi@41
  int v25; // [sp+0h] [bp-1Ch]@12
  signed __int16 v26; // [sp+8h] [bp-14h]@3
  char v27; // [sp+Bh] [bp-11h]@3

  v1 = *(_BYTE *)(result + 11);
  v2 = *(_DWORD *)result;
  v3 = *(_BYTE *)(result + 9);
  if ( *(_BYTE *)(result + 11) >> 6 != 1 )
  {
    v4 = 0;
    LOBYTE(v5) = 1;
    v6 = *(_BYTE *)(result + 10) + 1;
    if ( v6 > 15 )
      goto LABEL_3;
LABEL_23:
    v22 = (unsigned __int8)byte_6FB889FC[v4];
    *(_BYTE *)(result + 9) = v5;
    *(_BYTE *)(result + 10) = v6;
    *(_DWORD *)result = v22 + v2;
    *(_BYTE *)(result + 11) = *(_BYTE *)(result + 11) & 0x3F | 0x40;
    return result;
  }
  v4 = v3;
  v21 = (unsigned __int8)byte_6FB889FB[v3];
  v5 = v3 + 1;
  v6 = *(_BYTE *)(result + 10) + 1;
  v2 -= v21;
  if ( v6 <= 15 )
    goto LABEL_23;
  if ( v5 > 15 )
  {
    if ( v5 != 16 )
      v2 += (unsigned __int8)byte_6FB889EC[v4];
    v10 = 4 * v1;
    LOBYTE(v5) = *(_BYTE *)(result + 8);
    v26 = 1;
    v9 = 1;
    v27 = 0;
    LOBYTE(v10) = (char)(4 * v1) >> 6;
    v8 = 0;
    goto LABEL_4;
  }
LABEL_3:
  v7 = (unsigned __int8)byte_6FB889FC[v4];
  v27 = 1;
  v26 = 2;
  v8 = 1;
  v9 = 2;
  v2 += v7;
  v10 = 1;
LABEL_4:
  *(_BYTE *)(result + 9) = v5;
  *(_BYTE *)(result + 8) = v5;
  v11 = *(_BYTE *)(result + 11);
  *(_DWORD *)result = v2;
  *(_BYTE *)(result + 10) = 0;
  v12 = 16 * (v10 & 3) | (v10 << 6) | v11 & 0xF;
  LOBYTE(v13) = v12;
  *(_BYTE *)(result + 11) = v12;
  if ( v8 == (char)((char)((_BYTE)v12 << 6) >> 6) )
  {
    if ( v8 < 2 )
    {
      v23 = 0;
    }
    else if ( v8 < 4 )
    {
      v23 = 1;
    }
    else if ( v8 < 6 )
    {
      v23 = 2;
    }
    else if ( v8 < 10 )
    {
      v23 = 3;
    }
    else if ( v8 < 18 )
    {
      v23 = 4;
    }
    else
    {
      v23 = (v8 >= 34) + 5;
    }
    v2 -= (unsigned __int8)byte_6FB88A1A[v23];
  }
  else
  {
    v26 = 1;
    v9 = 1;
  }
  if ( v9 < 2 )
  {
    v14 = 0;
  }
  else if ( v9 < 4 )
  {
    v14 = 1;
  }
  else if ( v9 < 6 )
  {
    v14 = 2;
  }
  else if ( v9 < 10 )
  {
    v14 = 3;
  }
  else if ( v9 < 18 )
  {
    v14 = 4;
  }
  else
  {
    v14 = (v9 >= 34) + 5;
  }
  v15 = (unsigned __int8)byte_6FB88A1A[v14] + v2;
  v25 = v15;
  if ( !v8 )
  {
    v16 = *(_WORD *)(result + 6);
    v17 = 1;
    v18 = 1;
    if ( (char)(16 * *(_BYTE *)(result + 11)) >> 6 == 1 )
    {
      if ( v16 > 4128 )
      {
        v25 = v15 + 1;
      }
      else
      {
        if ( v16 < 2 )
        {
          v24 = 0;
        }
        else if ( v16 < 4 )
        {
          v24 = 1;
        }
        else if ( v16 < 6 )
        {
          v24 = 2;
        }
        else if ( v16 < 10 )
        {
          v24 = 3;
        }
        else if ( v16 < 18 )
        {
          v24 = 4;
        }
        else
        {
          v24 = (v16 >= 34) + 5;
        }
        v18 = v16 + 1;
        v25 = v15 - (unsigned __int8)byte_6FB88A1A[v24];
        v17 = v16 + 1;
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
    v20 = (unsigned __int8)byte_6FB88A1A[v19];
    *(_WORD *)(result + 6) = v17;
    v15 = v20 + v25;
    v13 = v12 & 0xFFFFFFF3 | 4;
    *(_BYTE *)(result + 11) = v13;
  }
  *(_DWORD *)result = v15;
  *(_WORD *)(result + 4) = v26;
  *(_BYTE *)(result + 11) = v13 & 0xFC | v27;
  return result;
}
