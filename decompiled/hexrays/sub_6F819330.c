int __usercall sub_6F819330@<eax>(int result@<eax>, int a2@<edx>, signed int a3@<ecx>)
{
  int v3; // esi@1
  unsigned __int16 v4; // bp@1
  int v5; // ebx@8
  int v6; // esi@9
  signed __int16 v7; // bx@9
  signed int v8; // edi@9
  signed int v9; // ecx@10
  int v10; // ST00_4@10
  int v11; // edx@10
  int v12; // edx@16
  __int16 v13; // bp@18
  __int16 v14; // cx@18
  int v15; // edi@26
  int v16; // ebx@27
  int v17; // ebx@46
  int v18; // [sp+4h] [bp-18h]@1
  signed __int16 v19; // [sp+Ah] [bp-12h]@2

  v18 = (a3 + 1) >> 1;
  v3 = *(_DWORD *)a2;
  v4 = *(_WORD *)(a2 + 4) & 0x3FFF;
  if ( (char)(*(_BYTE *)(a2 + 5) >> 6) != v18 )
  {
    v19 = 1;
LABEL_28:
    v5 = 0;
    goto LABEL_9;
  }
  if ( (signed int)v4 > 4128 )
  {
    ++v3;
    v19 = 1;
    goto LABEL_28;
  }
  if ( (signed int)v4 < 2 )
  {
    v15 = 0;
  }
  else if ( (signed int)v4 < 4 )
  {
    v15 = 1;
  }
  else if ( (signed int)v4 < 6 )
  {
    v15 = 2;
  }
  else if ( (signed int)v4 < 10 )
  {
    v15 = 3;
  }
  else if ( (signed int)v4 < 18 )
  {
    v15 = 4;
  }
  else
  {
    v15 = ((signed int)v4 >= 34) + 5;
  }
  v16 = v4 + 1;
  v19 = v16 & 0x3FFF;
  v3 -= (unsigned __int8)byte_6FB88A1A[v15];
  if ( v16 < 2 )
    goto LABEL_28;
  if ( v16 < 4 )
  {
    v5 = 1;
  }
  else if ( v16 < 6 )
  {
    v5 = 2;
  }
  else if ( v16 < 10 )
  {
    v5 = 3;
  }
  else if ( v16 < 18 )
  {
    v5 = 4;
  }
  else
  {
    v5 = (v16 >= 34) + 5;
  }
LABEL_9:
  v6 = (unsigned __int8)byte_6FB88A1A[v5] + v3;
  v7 = *(_WORD *)(a2 + 6) & 0x3FFF;
  v8 = (unsigned __int16)v7;
  if ( a3 )
  {
    v9 = a3 >> 1;
    v7 = 1;
    v10 = (char)(*(_BYTE *)(a2 + 7) >> 6);
    v11 = 1;
    if ( v10 == v9 )
    {
      if ( v8 <= 4128 )
      {
        if ( v8 < 2 )
        {
          v17 = 0;
        }
        else if ( v8 < 4 )
        {
          v17 = 1;
        }
        else if ( v8 < 6 )
        {
          v17 = 2;
        }
        else if ( v8 < 10 )
        {
          v17 = 3;
        }
        else if ( v8 < 18 )
        {
          v17 = 4;
        }
        else
        {
          v17 = (v8 >= 34) + 5;
        }
        v6 -= (unsigned __int8)byte_6FB88A1A[v17];
        v11 = v8 + 1;
        v7 = (v8 + 1) & 0x3FFF;
      }
      else
      {
        ++v6;
      }
    }
    if ( v11 < 2 )
    {
      v12 = 0;
    }
    else if ( v11 < 4 )
    {
      v12 = 1;
    }
    else if ( v11 < 6 )
    {
      v12 = 2;
    }
    else if ( v11 < 10 )
    {
      v12 = 3;
    }
    else if ( v11 < 18 )
    {
      v12 = 4;
    }
    else
    {
      v12 = (v11 >= 34) + 5;
    }
    v6 += (unsigned __int8)byte_6FB88A1A[v12];
  }
  else
  {
    LOBYTE(v9) = *(_BYTE *)(a2 + 7) >> 6;
  }
  *(_DWORD *)result = v6;
  *(_BYTE *)(result + 5) = *(_BYTE *)(result + 5) & 0x3F | ((_BYTE)v18 << 6);
  v13 = v19 | *(_WORD *)(result + 4) & 0xC000;
  *(_BYTE *)(result + 7) = *(_BYTE *)(result + 7) & 0x3F | ((_BYTE)v9 << 6);
  v14 = *(_WORD *)(result + 6);
  *(_WORD *)(result + 4) = v13;
  *(_WORD *)(result + 6) = v14 & 0xC000 | v7;
  return result;
}
