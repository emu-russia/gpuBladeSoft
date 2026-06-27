int __usercall sub_6F779E90@<eax>(int a1@<eax>, int a2@<edx>)
{
  int v2; // esi@1
  int v3; // edi@1
  int v4; // eax@1
  unsigned int v5; // ecx@3
  unsigned int v6; // edi@3
  int v7; // ebx@3
  int v8; // ebx@8
  int v9; // edx@8
  int v10; // eax@13
  int v11; // ebx@13
  signed __int64 v12; // rax@13
  int result; // eax@13
  signed __int64 v14; // rax@14
  signed __int64 v15; // rax@17

  v2 = a1;
  v3 = *(_DWORD *)(a1 + 20);
  v4 = a2;
  if ( v3 && *(_BYTE *)(v2 + 13) )
  {
    v5 = *(_DWORD *)(v2 + 24);
    v6 = v3 - 1;
    v7 = v2 + 20 * v5 + 56;
    while ( v5 < v6 )
    {
      v7 += 20;
      if ( *(_DWORD *)(v7 - 20) > a2 )
        break;
      ++v5;
    }
    if ( v5 )
    {
      v8 = *(_DWORD *)(v2 + 20 * v5 + 36);
      v9 = v2 + 20 * v5 + 16;
      if ( v4 >= v8 )
      {
LABEL_16:
        *(_DWORD *)(v2 + 24) = v5;
        goto LABEL_13;
      }
      while ( --v5 )
      {
        v9 -= 20;
        v8 = *(_DWORD *)(v9 + 20);
        if ( v4 >= v8 )
          goto LABEL_16;
      }
    }
    v8 = *(_DWORD *)(v2 + 36);
    v5 = 0;
    *(_DWORD *)(v2 + 24) = 0;
    if ( v4 >= v8 )
    {
LABEL_13:
      v10 = v4 - v8;
      v11 = v2 + 20 * v5;
      v12 = *(_DWORD *)(v11 + 44) * (signed __int64)v10;
      return *(_DWORD *)(v11 + 40)
           + (((unsigned __int64)(unsigned int)((SHIDWORD(v12) >> 31) + 0x8000) + v12) >> 32 << 16)
           + ((unsigned int)((SHIDWORD(v12) >> 31) + 0x8000 + v12) >> 16);
    }
    v15 = *(_DWORD *)(v2 + 16) * (signed __int64)(v4 - v8);
    result = *(_DWORD *)(v2 + 40)
           + (((unsigned __int64)(unsigned int)((SHIDWORD(v15) >> 31) + 0x8000) + v15) >> 32 << 16)
           + ((unsigned int)((SHIDWORD(v15) >> 31) + 0x8000 + v15) >> 16);
  }
  else
  {
    v14 = *(_DWORD *)(v2 + 16) * (signed __int64)a2;
    result = (((unsigned __int64)(unsigned int)((SHIDWORD(v14) >> 31) + 0x8000) + v14) >> 32 << 16)
           + ((unsigned int)((SHIDWORD(v14) >> 31) + 0x8000 + v14) >> 16);
  }
  return result;
}
