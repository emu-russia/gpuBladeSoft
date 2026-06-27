signed int __usercall sub_6F77A280@<eax>(_DWORD *a1@<eax>, signed int a2@<edx>, signed int a3@<ecx>, int a4, int a5, int *a6, signed int *a7)
{
  _DWORD *v7; // esi@1
  int v8; // edi@1
  signed int v9; // ebx@1
  signed int result; // eax@1
  int v11; // edi@2
  int v12; // edx@8
  signed int v13; // eax@8
  signed __int64 v14; // rax@9
  signed __int64 v15; // rax@9
  int v16; // edi@13
  int v17; // eax@15
  int v18; // edx@22
  signed int v19; // eax@22
  signed __int64 v20; // rax@23
  signed __int64 v21; // rax@23
  int v22; // edi@25
  int v23; // [sp+0h] [bp-14h]@2

  v7 = a1;
  v8 = *a1;
  v9 = a4 - a2;
  result = a5 - a3;
  if ( *(_BYTE *)(v8 + 192) )
  {
    v11 = -v9;
    v23 = -result;
  }
  else
  {
    v23 = a5 - a3;
    v11 = a4 - a2;
  }
  *a7 = 0;
  *a6 = 0;
  if ( *((_BYTE *)v7 + 11666) )
  {
    *(_DWORD *)(v7[1] + 16) += (result >> 16) * (a2 >> 16) - (v9 >> 16) * (a3 >> 16);
    if ( v11 >= 0 )
    {
      if ( v23 >= 0 )
      {
        if ( v11 <= 2 * v23 )
        {
          if ( v23 <= 2 * v11 )
          {
            v12 = v7[2922];
            v13 = 45875;
LABEL_9:
            v14 = (unsigned int)(((signed int)((unsigned __int64)(v12 * (signed __int64)v13) >> 32) >> 31) + 0x8000)
                + v12 * (signed __int64)v13;
            *a6 = (HIDWORD(v14) << 16) + ((unsigned int)v14 >> 16);
            v15 = (unsigned int)(((signed int)((unsigned __int64)(19661i64 * v7[2923]) >> 32) >> 31) + 0x8000)
                + 19661i64 * v7[2923];
            result = (HIDWORD(v15) << 16) + ((unsigned int)v15 >> 16);
            *a7 = result;
            return result;
          }
          goto LABEL_15;
        }
LABEL_17:
        *a6 = 0;
        result = (signed int)a7;
        *a7 = 0;
        return result;
      }
      if ( v11 > -2 * v23 )
        goto LABEL_17;
      if ( -v23 <= 2 * v11 )
      {
        v12 = v7[2922];
        v13 = -45874;
        goto LABEL_9;
      }
LABEL_20:
      v17 = -v7[2922];
      goto LABEL_16;
    }
    if ( v23 < 0 )
    {
      v22 = -v11;
      if ( v22 <= -2 * v23 )
      {
        if ( -v23 > 2 * v22 )
          goto LABEL_20;
        v18 = v7[2922];
        v19 = -45874;
        goto LABEL_23;
      }
    }
    else
    {
      v16 = -v11;
      if ( v16 <= 2 * v23 )
      {
        if ( v23 > 2 * v16 )
        {
LABEL_15:
          v17 = v7[2922];
LABEL_16:
          *a6 = v17;
          result = v7[2923];
          *a7 = result;
          return result;
        }
        v18 = v7[2922];
        v19 = 45875;
LABEL_23:
        v20 = (unsigned int)(((signed int)((unsigned __int64)(v18 * (signed __int64)v19) >> 32) >> 31) + 0x8000)
            + v18 * (signed __int64)v19;
        *a6 = (HIDWORD(v20) << 16) + ((unsigned int)v20 >> 16);
        v21 = (unsigned int)(((signed int)((unsigned __int64)(111411i64 * v7[2923]) >> 32) >> 31) + 0x8000)
            + 111411i64 * v7[2923];
        result = (HIDWORD(v21) << 16) + ((unsigned int)v21 >> 16);
        *a7 = result;
        return result;
      }
    }
    *a6 = 0;
    result = 2 * v7[2923];
    *a7 = result;
  }
  return result;
}
