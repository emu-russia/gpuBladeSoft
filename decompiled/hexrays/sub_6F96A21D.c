unsigned int __usercall sub_6F96A21D@<eax>(unsigned int a1@<eax>, unsigned int a2@<edx>, int a3@<ecx>, int a4)
{
  unsigned int v4; // ebx@1
  int v5; // eax@1
  int v6; // edx@2
  unsigned int v7; // ebp@3
  int v8; // esi@3
  int v9; // edi@3
  unsigned int result; // eax@3
  int v11; // edx@6
  int v12; // eax@15
  signed __int64 v13; // rax@19
  int v14; // [sp+10h] [bp-2Ch]@3
  int v15; // [sp+14h] [bp-28h]@3
  unsigned int v16; // [sp+18h] [bp-24h]@1
  unsigned int v17; // [sp+1Ch] [bp-20h]@5

  v4 = a1;
  v5 = a4;
  v16 = a2;
  if ( *(_DWORD *)(a3 + 28) > *(_DWORD *)(a4 + 28) )
  {
    v6 = a3;
    a3 = a4;
    v5 = v6;
  }
  v7 = *(_DWORD *)(a3 + 24);
  v8 = *(_DWORD *)(a3 + 28);
  v9 = *(_DWORD *)(v5 + 28);
  result = *(_DWORD *)(v5 + 24);
  v14 = *(_DWORD *)(a3 + 24) - v8;
  v15 = result - v9;
  if ( v7 == result || v8 == v9 )
  {
    while ( v4 <= v16 )
    {
      v11 = *(_DWORD *)(v4 + 28);
      if ( v8 < v11 )
      {
        result = v11 + v15;
        if ( v9 > v11 )
          result = v7;
      }
      else
      {
        result = v11 + v14;
      }
      *(_DWORD *)(v4 + 24) = result;
      v4 += 40;
    }
  }
  else
  {
    result = sub_6F7C9760(result - v7, v9 - v8);
    v17 = result;
    while ( v16 >= v4 )
    {
      v12 = *(_DWORD *)(v4 + 28);
      if ( v8 < v12 )
      {
        if ( v9 > v12 )
        {
          v13 = (unsigned int)(((signed int)((unsigned __int64)((signed int)v17 * (signed __int64)(v12 - v8)) >> 32) >> 31)
                             + 0x8000)
              + (signed int)v17 * (signed __int64)(v12 - v8);
          result = v7 + (HIDWORD(v13) << 16) + ((unsigned int)v13 >> 16);
        }
        else
        {
          result = v15 + v12;
        }
      }
      else
      {
        result = v14 + v12;
      }
      *(_DWORD *)(v4 + 24) = result;
      v4 += 40;
    }
  }
  return result;
}
