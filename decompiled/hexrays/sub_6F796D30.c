unsigned int __usercall sub_6F796D30@<eax>(unsigned int result@<eax>, int a2@<edx>)
{
  unsigned int v2; // esi@1
  int v3; // edi@1
  int v4; // edx@2
  int v5; // ebp@2
  signed __int64 v6; // rax@2
  _DWORD *v7; // esi@2
  int v8; // edi@2
  unsigned int i; // ebx@3
  signed __int64 v10; // rax@5
  int v11; // [sp+0h] [bp-14h]@2

  v2 = result + 204 * a2;
  v3 = *(_DWORD *)(v2 + 4);
  if ( v3 )
  {
    v4 = *(_DWORD *)(v2 + 200);
    v5 = v2 + 8;
    v11 = v4;
    v6 = v4 * (signed __int64)*(_DWORD *)(v2 + 8);
    result = (((unsigned __int64)(unsigned int)((SHIDWORD(v6) >> 31) + 0x8000) + v6) >> 32 << 16)
           + ((unsigned int)((SHIDWORD(v6) >> 31) + 0x8000 + v6) >> 16);
    v7 = (_DWORD *)(v2 + 20);
    *(_DWORD *)(v5 + 4) = result;
    v8 = v3 - 1;
    *(_DWORD *)(v5 + 8) = (result + 32) & 0xFFFFFFC0;
    if ( v8 )
    {
      for ( i = result; ; i = *(_DWORD *)(v5 + 4) )
      {
        v10 = (unsigned int)(((signed int)((unsigned __int64)(v11 * (signed __int64)*v7) >> 32) >> 31) + 0x8000)
            + v11 * (signed __int64)*v7;
        result = (HIDWORD(v10) << 16) + ((unsigned int)v10 >> 16);
        HIDWORD(v10) = (((signed int)(result - i) >> 31) ^ (result - i)) - ((signed int)(result - i) >> 31);
        if ( !((HIDWORD(v10) - 128 < 0) ^ __OFADD__(-128, HIDWORD(v10))) )
          i = result;
        v7 += 3;
        *(v7 - 2) = i;
        *(v7 - 1) = (i + 32) & 0xFFFFFFC0;
        if ( !--v8 )
          break;
      }
    }
  }
  return result;
}
