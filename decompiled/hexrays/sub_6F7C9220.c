unsigned int __usercall sub_6F7C9220@<eax>(unsigned int a1@<eax>, signed int a2@<edx>, signed int a3@<ecx>)
{
  int v3; // esi@1
  signed int v4; // ebx@1
  bool v5; // zf@3
  unsigned int v6; // edi@4
  unsigned int v8; // ebx@10
  int v9; // edi@14
  int v10; // ebp@14
  unsigned int v11; // eax@14
  unsigned int v12; // edx@14
  int v13; // ecx@14
  int v14; // edi@14
  int v15; // ebp@14
  int v16; // eax@14
  unsigned __int64 v17; // kr08_8@14
  unsigned int v18; // ebp@14
  int v19; // eax@17
  int v20; // esi@17
  unsigned int v21; // ebp@17
  unsigned int v22; // ecx@17
  int v23; // eax@17
  int v24; // ebp@17
  int v25; // edx@18
  unsigned int v26; // edx@18
  int v27; // [sp+4h] [bp-14h]@17

  v3 = 1;
  v4 = -1;
  if ( (a1 & 0x80000000) == 0 )
  {
    if ( a2 >= 0 )
      goto LABEL_3;
LABEL_9:
    a2 = -a2;
    v5 = a3 == 0;
    v3 = v4;
    if ( a3 >= 0 )
      goto LABEL_4;
LABEL_10:
    v3 = -v3;
    v8 = -a3;
    goto LABEL_11;
  }
  a1 = -a1;
  v4 = 1;
  v3 = -1;
  if ( a2 < 0 )
    goto LABEL_9;
LABEL_3:
  v5 = a3 == 0;
  if ( a3 < 0 )
    goto LABEL_10;
LABEL_4:
  v6 = 0x7FFFFFFF;
  if ( v5 )
    goto LABEL_5;
  v8 = a3;
LABEL_11:
  if ( a1 + a2 > 129894 - (v8 >> 17) )
  {
    v9 = (unsigned __int16)a1;
    v10 = (unsigned __int16)a2;
    v11 = a1 >> 16;
    v12 = (unsigned int)a2 >> 16;
    v13 = v10 * v9;
    v14 = v12 * v9;
    v15 = v11 * v10;
    v17 = __PAIR__(v12 * v11 + ((unsigned int)(v15 + v14) >> 16), v13) + (unsigned int)((v15 + v14) << 16) + (v8 >> 1);
    v16 = v17 >> 32;
    v18 = v16 + (-__CFADD__(v15, v14) & 0x10000);
    if ( v18 )
    {
      v6 = 0x7FFFFFFF;
      if ( v18 < v8 )
      {
        _BitScanReverse((unsigned int *)&v16, v18);
        v19 = v16 ^ 0x1F;
        v27 = v3;
        v20 = 32 - v19;
        v21 = ((unsigned int)v17 >> (32 - v19)) | (v18 << v19);
        v22 = (_DWORD)v17 << v19;
        v23 = v21 / v8;
        v24 = v21 - v8 * (v21 / v8);
        do
        {
          v23 *= 2;
          v25 = (unsigned __int64)v22 >> 31;
          v22 *= 2;
          v26 = 2 * v24 | v25;
          v24 = v26 - v8;
          if ( v26 < v8 )
            v24 = v26;
          if ( v26 >= v8 )
            v23 |= 1u;
          --v20;
        }
        while ( v20 );
        v3 = v27;
        v6 = v23;
      }
    }
    else
    {
      v6 = (unsigned int)v17 / v8;
    }
  }
  else
  {
    v6 = ((v8 >> 1) + a2 * a1) / v8;
  }
LABEL_5:
  if ( v3 == -1 )
    v6 = -v6;
  return v6;
}
