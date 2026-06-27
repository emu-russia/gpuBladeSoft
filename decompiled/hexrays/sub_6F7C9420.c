int __cdecl sub_6F7C9420(signed int a1, signed int a2, signed int a3)
{
  unsigned int v3; // edx@1
  unsigned int v4; // ecx@1
  unsigned int v5; // ebx@1
  signed int v6; // eax@3
  int v7; // esi@3
  bool v8; // zf@5
  int result; // eax@6
  int v10; // eax@18
  int v11; // ebp@18
  unsigned __int64 v12; // kr08_8@18
  int v13; // eax@20
  unsigned int v14; // edi@20
  int v15; // ecx@20
  unsigned int v16; // ebp@20
  int v17; // ebp@20
  int v18; // edx@21
  unsigned int v19; // edx@21

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
      if ( v3 + v4 > 129894 - (v5 >> 17) )
      {
        v10 = (unsigned __int16)v3;
        v11 = (unsigned __int16)v4;
        v12 = __PAIR__(-__CFADD__((v4 >> 16) * v10, (v3 >> 16) * v11) & 0x10000, v5 >> 1)
            + __PAIR__(
                (v3 >> 16) * (v4 >> 16) + (((v4 >> 16) * v10 + (v3 >> 16) * v11) >> 16),
                ((v4 >> 16) * v10 + (v3 >> 16) * v11) << 16)
            + (unsigned int)(v11 * v10);
        if ( HIDWORD(v12) )
        {
          result = 0x7FFFFFFF;
          if ( HIDWORD(v12) < v5 )
          {
            _BitScanReverse((unsigned int *)&result, HIDWORD(v12));
            v13 = result ^ 0x1F;
            v14 = (_DWORD)v12 << v13;
            v15 = 32 - v13;
            v16 = ((unsigned int)v12 >> (32 - v13)) | (HIDWORD(v12) << v13);
            result = v16 / v5;
            v17 = v16 - v5 * (v16 / v5);
            do
            {
              result *= 2;
              v18 = (unsigned __int64)v14 >> 31;
              v14 *= 2;
              v19 = 2 * v17 | v18;
              v17 = v19 - v5;
              if ( v19 < v5 )
                v17 = v19;
              if ( v19 >= v5 )
                result |= 1u;
              --v15;
            }
            while ( v15 );
          }
        }
        else
        {
          result = (unsigned int)v12 / v5;
        }
      }
      else
      {
        result = (v3 * v4 + (v5 >> 1)) / v5;
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
