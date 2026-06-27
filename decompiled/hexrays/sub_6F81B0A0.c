int __usercall sub_6F81B0A0@<eax>(int result@<eax>)
{
  int v1; // ebx@1
  unsigned __int8 v2; // si@1
  int v3; // ebp@2
  char v4; // cl@2
  int v5; // edx@2
  signed int v6; // esi@3
  signed int v7; // edi@3
  int v8; // edx@3
  char v9; // bp@4
  int v10; // edx@4
  char v11; // bp@4
  int v12; // esi@11
  int v13; // ebx@12
  signed int v14; // edi@13
  signed __int16 v15; // si@13
  int v16; // ecx@13
  int v17; // ecx@19
  int v18; // ebp@20
  char v19; // dl@20
  int v20; // edi@22
  int v21; // esi@22
  int v22; // ebp@24
  int v23; // ecx@35
  int v24; // ecx@43
  int v25; // ebp@44
  char v26; // [sp+1h] [bp-17h]@1
  signed __int16 v27; // [sp+2h] [bp-16h]@3

  v1 = *(_DWORD *)result;
  v2 = *(_BYTE *)(result + 9);
  v26 = *(_BYTE *)(result + 11) >> 6;
  if ( v26 )
  {
    v3 = 0;
    v4 = 1;
    v5 = *(_BYTE *)(result + 10) + 1;
    if ( v5 > 15 )
      goto LABEL_3;
LABEL_24:
    v22 = (unsigned __int8)byte_6FB889FC[v3];
    *(_BYTE *)(result + 9) = v4;
    *(_BYTE *)(result + 10) = v5;
    *(_BYTE *)(result + 11) &= 0x3Fu;
    *(_DWORD *)result = v22 + v1;
    return result;
  }
  v3 = v2;
  v20 = (unsigned __int8)byte_6FB889FB[v2];
  v21 = v2 + 1;
  v5 = *(_BYTE *)(result + 10) + 1;
  v1 -= v20;
  if ( v5 <= 15 )
  {
    v4 = v21;
    goto LABEL_24;
  }
  if ( v21 > 15 )
  {
    if ( v21 != 16 )
      v1 += (unsigned __int8)byte_6FB889EC[v3];
    v8 = 4 * *(_BYTE *)(result + 11);
    v4 = *(_BYTE *)(result + 8);
    v27 = 1;
    v6 = 1;
    v7 = 0;
    LOBYTE(v8) = (char)v8 >> 6;
    goto LABEL_4;
  }
  v4 = v21;
LABEL_3:
  v6 = 2;
  v27 = 2;
  v26 = 1;
  v7 = 1;
  v1 += (unsigned __int8)byte_6FB889FC[v3];
  v8 = 0;
LABEL_4:
  v9 = *(_BYTE *)(result + 11);
  *(_BYTE *)(result + 9) = v4;
  *(_BYTE *)(result + 8) = v4;
  *(_DWORD *)result = v1;
  *(_BYTE *)(result + 10) = 0;
  v10 = v9 & 0xF | (v8 << 6) | 16 * (v8 & 3);
  v11 = v10;
  *(_BYTE *)(result + 11) = v10;
  if ( v7 == (char)((char)((_BYTE)v10 << 6) >> 6) )
  {
    if ( v7 < 2 )
    {
      v23 = 0;
    }
    else if ( v7 < 4 )
    {
      v23 = 1;
    }
    else if ( v7 < 6 )
    {
      v23 = 2;
    }
    else if ( v7 < 10 )
    {
      v23 = 3;
    }
    else if ( v7 < 18 )
    {
      v23 = 4;
    }
    else
    {
      v23 = (v7 >= 34) + 5;
    }
    v1 -= (unsigned __int8)byte_6FB88A1A[v23];
  }
  else
  {
    v27 = 1;
    v6 = 1;
  }
  if ( v6 < 2 )
  {
    v12 = 0;
  }
  else if ( v6 < 4 )
  {
    v12 = 1;
  }
  else if ( v6 < 6 )
  {
    v12 = 2;
  }
  else if ( v6 < 10 )
  {
    v12 = 3;
  }
  else if ( v6 < 18 )
  {
    v12 = 4;
  }
  else
  {
    v12 = (v6 >= 34) + 5;
  }
  v13 = (unsigned __int8)byte_6FB88A1A[v12] + v1;
  if ( !v7 )
  {
    v14 = *(_WORD *)(result + 6);
    v15 = 1;
    v16 = 1;
    if ( !(*(_BYTE *)(result + 11) & 0xC) )
    {
      if ( v14 > 4128 )
      {
        ++v13;
      }
      else
      {
        if ( v14 < 2 )
        {
          v24 = 0;
        }
        else if ( v14 < 4 )
        {
          v24 = 1;
        }
        else if ( v14 < 6 )
        {
          v24 = 2;
        }
        else if ( v14 < 10 )
        {
          v24 = 3;
        }
        else if ( v14 < 18 )
        {
          v24 = 4;
        }
        else
        {
          v24 = (v14 >= 34) + 5;
        }
        v25 = (unsigned __int8)byte_6FB88A1A[v24];
        v16 = v14 + 1;
        v15 = v14 + 1;
        v13 -= v25;
      }
    }
    if ( v16 < 2 )
    {
      v17 = 0;
    }
    else if ( v16 < 4 )
    {
      v17 = 1;
    }
    else if ( v16 < 6 )
    {
      v17 = 2;
    }
    else if ( v16 < 10 )
    {
      v17 = 3;
    }
    else if ( v16 < 18 )
    {
      v17 = 4;
    }
    else
    {
      v17 = (v16 >= 34) + 5;
    }
    v18 = (unsigned __int8)byte_6FB88A1A[v17];
    v19 = v10 & 0xF3;
    *(_WORD *)(result + 6) = v15;
    *(_BYTE *)(result + 11) = v19;
    v13 += v18;
    v11 = v19;
  }
  *(_DWORD *)result = v13;
  *(_WORD *)(result + 4) = v27;
  *(_BYTE *)(result + 11) = v11 & 0xFC | v26 & 3;
  return result;
}
