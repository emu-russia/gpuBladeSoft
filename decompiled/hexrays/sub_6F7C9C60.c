signed int __cdecl sub_6F7C9C60(int a1)
{
  signed int v1; // edx@2
  signed int v2; // eax@2
  signed __int64 v3; // rax@2
  signed int v4; // edi@2
  unsigned int v5; // esi@2
  signed __int64 v6; // rax@2
  signed int v7; // esi@2
  signed int result; // eax@3
  signed int v9; // [sp+8h] [bp-1Ch]@2
  signed int v10; // [sp+Ch] [bp-18h]@2
  signed int v11; // [sp+10h] [bp-14h]@2

  if ( a1
    && (v1 = *(_DWORD *)(a1 + 12),
        v2 = *(_DWORD *)a1,
        v9 = v1,
        v10 = v2,
        v3 = (unsigned int)(((signed int)((unsigned __int64)(v1 * (signed __int64)v2) >> 32) >> 31) + 0x8000)
           + v1 * (signed __int64)v2,
        v4 = *(_DWORD *)(a1 + 4),
        v11 = *(_DWORD *)(a1 + 8),
        v5 = (HIDWORD(v3) << 16) + ((unsigned int)v3 >> 16),
        v6 = (unsigned int)(((signed int)((unsigned __int64)(*(_DWORD *)(a1 + 8) * (signed __int64)v4) >> 32) >> 31)
                          + 0x8000)
           + *(_DWORD *)(a1 + 8) * (signed __int64)v4,
        (v7 = v5 - ((HIDWORD(v6) << 16) + ((unsigned int)v6 >> 16))) != 0) )
  {
    *(_DWORD *)(a1 + 4) = -sub_6F7C9760(v4, v7);
    *(_DWORD *)(a1 + 8) = -sub_6F7C9760(v11, v7);
    *(_DWORD *)a1 = sub_6F7C9760(v9, v7);
    *(_DWORD *)(a1 + 12) = sub_6F7C9760(v10, v7);
    result = 0;
  }
  else
  {
    result = 6;
  }
  return result;
}
