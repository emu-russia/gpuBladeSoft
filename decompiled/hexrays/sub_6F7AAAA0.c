signed int __usercall sub_6F7AAAA0@<eax>(unsigned int *a1@<eax>, __int16 a2@<dx>, int a3@<ecx>, int a4, int a5)
{
  unsigned int v5; // esi@1
  int v6; // ebx@2
  int v7; // ebp@2
  signed int result; // eax@2
  signed __int64 v9; // rax@3
  signed int v10; // ecx@5
  signed int v11; // edx@6
  signed int v12; // esi@10
  signed int v13; // edi@11
  unsigned int *v14; // [sp+18h] [bp-24h]@2
  __int16 v15; // [sp+1Eh] [bp-1Eh]@2

  v5 = *a1;
  if ( *a1 )
  {
    v6 = 0;
    v14 = a1;
    v7 = a3;
    v15 = a2 & 0x4000;
    result = 0x10000;
    while ( 1 )
    {
      v10 = *(_DWORD *)(v7 + 4 * v6);
      if ( v10 )
      {
        v11 = *(_DWORD *)(v14[1] + 4 * v6);
        if ( !v11 )
          return 0;
        if ( v11 < 0 )
        {
          if ( v10 > 0 )
            return 0;
        }
        else if ( v10 < 0 )
        {
          return 0;
        }
        if ( v15 )
        {
          v12 = *(_DWORD *)(a4 + 4 * v6);
          if ( v11 < v12 )
            return 0;
          v13 = *(_DWORD *)(a5 + 4 * v6);
          if ( v11 > v13 )
            return 0;
          if ( v10 <= v11 )
          {
            result = sub_6F7C9420(result, *(_DWORD *)(a5 + 4 * v6) - v11, v13 - v10);
            v5 = *v14;
          }
          else
          {
            result = sub_6F7C9420(result, v11 - v12, v10 - v12);
            v5 = *v14;
          }
        }
        else
        {
          v9 = (((v11 >> 31) ^ v11) - (v11 >> 31)) * (signed __int64)result;
          result = (((unsigned __int64)(unsigned int)((SHIDWORD(v9) >> 31) + 0x8000) + v9) >> 32 << 16)
                 + ((unsigned int)((SHIDWORD(v9) >> 31) + 0x8000 + v9) >> 16);
        }
      }
      if ( ++v6 >= v5 )
        return result;
    }
  }
  return 0x10000;
}
