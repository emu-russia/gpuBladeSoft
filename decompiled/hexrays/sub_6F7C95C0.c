int __cdecl sub_6F7C95C0(signed int a1, signed int a2, signed int a3)
{
  unsigned int v3; // edi@1
  unsigned int v4; // edx@1
  unsigned int v5; // ebx@1
  signed int v6; // ebp@3
  int v7; // esi@3
  bool v8; // zf@5
  int result; // eax@6
  int v10; // ecx@18
  unsigned int v11; // edi@18
  int v12; // ebp@18
  unsigned int v13; // eax@18
  int v14; // edx@18
  int v15; // ecx@18
  int v16; // ebp@18
  unsigned int v17; // kr00_4@18
  unsigned int v18; // ebp@18
  int v19; // eax@20
  unsigned int v20; // ebp@20
  int v21; // ecx@20
  unsigned int v22; // edi@20
  int v23; // ebp@20
  int v24; // edx@21
  unsigned int v25; // edx@21

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( !a1 || a2 == a3 )
    return a1;
  v6 = -1;
  v7 = 1;
  if ( a1 < 0 )
  {
    v3 = -a1;
    v6 = 1;
    v7 = -1;
    if ( a2 >= 0 )
    {
LABEL_5:
      v8 = a3 == 0;
      if ( a3 >= 0 )
        goto LABEL_6;
LABEL_11:
      v7 = -v7;
      v5 = -a3;
LABEL_12:
      if ( v4 + v3 > 0x1FFFF )
      {
        v10 = (unsigned __int16)v3;
        v11 = v3 >> 16;
        v12 = (unsigned __int16)v4;
        v13 = v4 >> 16;
        v14 = (unsigned __int16)v4 * v10;
        v15 = v13 * v10;
        v16 = v11 * v12;
        v17 = ((v16 + v15) << 16) + v14;
        v18 = ((__PAIR__(((unsigned int)(v16 + v15) >> 16) + v11 * v13, (v16 + v15) << 16) + (unsigned int)v14) >> 32)
            + (-__CFADD__(v16, v15) & 0x10000);
        if ( v18 )
        {
          result = 0x7FFFFFFF;
          if ( v18 < v5 )
          {
            _BitScanReverse((unsigned int *)&result, v18);
            v19 = result ^ 0x1F;
            v20 = (v17 >> (32 - v19)) | (v18 << v19);
            v21 = 32 - v19;
            v22 = v17 << v19;
            result = v20 / v5;
            v23 = v20 - v5 * (v20 / v5);
            do
            {
              result *= 2;
              v24 = (unsigned __int64)v22 >> 31;
              v22 *= 2;
              v25 = 2 * v23 | v24;
              v23 = v25 - v5;
              if ( v25 < v5 )
                v23 = v25;
              if ( v25 >= v5 )
                result |= 1u;
              --v21;
            }
            while ( v21 );
          }
        }
        else
        {
          result = v17 / v5;
        }
      }
      else
      {
        result = v3 * v4 / v5;
      }
      goto LABEL_7;
    }
  }
  else if ( a2 >= 0 )
  {
    goto LABEL_5;
  }
  v4 = -a2;
  v8 = a3 == 0;
  v7 = v6;
  if ( a3 < 0 )
    goto LABEL_11;
LABEL_6:
  result = 0x7FFFFFFF;
  if ( !v8 )
    goto LABEL_12;
LABEL_7:
  if ( v7 == -1 )
    result = -result;
  return result;
}
