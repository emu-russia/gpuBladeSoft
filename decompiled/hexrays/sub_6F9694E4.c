unsigned int __usercall sub_6F9694E4@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4, int a5, int a6)
{
  int v6; // ebp@1
  int v7; // edi@1
  int v8; // eax@3
  int v9; // esi@4
  unsigned int result; // eax@4
  int i; // edx@6
  int v12; // ecx@8
  int v13; // ebx@13
  int v14; // eax@17
  signed __int64 v15; // rax@21
  int v16; // [sp+10h] [bp-3Ch]@4
  int v17; // [sp+14h] [bp-38h]@4
  int v18; // [sp+18h] [bp-34h]@1
  int v19; // [sp+1Ch] [bp-30h]@4
  int v20; // [sp+20h] [bp-2Ch]@4
  int v21; // [sp+24h] [bp-28h]@1
  int v22; // [sp+28h] [bp-24h]@1
  unsigned int v23; // [sp+2Ch] [bp-20h]@13

  v6 = a3;
  v7 = a5;
  v21 = a1;
  v22 = a2;
  v18 = 0;
  do
  {
    v7 += v18;
    a6 += v18;
    if ( *(_DWORD *)(v7 + 8 * v6) > *(_DWORD *)(v7 + 8 * a4) )
    {
      v8 = v6;
      v6 = a4;
      a4 = v8;
    }
    v9 = *(_DWORD *)(v7 + 8 * v6);
    v16 = *(_DWORD *)(v7 + 8 * a4);
    v17 = *(_DWORD *)(a6 + 8 * v6);
    result = *(_DWORD *)(a6 + 8 * a4);
    v19 = v17 - v9;
    v20 = *(_DWORD *)(a6 + 8 * a4) - v16;
    if ( v17 != result && v9 != v16 )
    {
      result = sub_6F7C9760(result - v17, v16 - v9);
      v13 = v21;
      v23 = result;
      while ( v22 >= v13 )
      {
        v14 = *(_DWORD *)(v7 + 8 * v13);
        if ( v9 < v14 )
        {
          if ( v16 > v14 )
          {
            v15 = (unsigned int)(((signed int)((unsigned __int64)((signed int)v23 * (signed __int64)(v14 - v9)) >> 32) >> 31)
                               + 0x8000)
                + (signed int)v23 * (signed __int64)(v14 - v9);
            result = v17 + (HIDWORD(v15) << 16) + ((unsigned int)v15 >> 16);
          }
          else
          {
            result = v20 + v14;
          }
        }
        else
        {
          result = v19 + v14;
        }
        *(_DWORD *)(a6 + 8 * v13++) = result;
      }
    }
    else
    {
      for ( i = v21; i <= v22; ++i )
      {
        v12 = *(_DWORD *)(v7 + 8 * i);
        if ( v9 < v12 )
        {
          result = v12 + v20;
          if ( v16 > v12 )
            result = v17;
        }
        else
        {
          result = v12 + v19;
        }
        *(_DWORD *)(a6 + 8 * i) = result;
      }
    }
    v18 += 4;
  }
  while ( v18 != 8 );
  return result;
}
