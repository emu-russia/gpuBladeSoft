signed int __cdecl sub_6F8B6120(int a1, int a2)
{
  int v2; // ecx@1
  signed int v3; // ebx@2
  __int64 v4; // rdi@5
  unsigned __int64 v5; // rax@6
  int v6; // eax@8
  signed int result; // eax@11
  __int64 v8; // rax@14
  unsigned __int64 v9; // kr08_8@15
  int v10; // ebx@15
  int v11; // eax@15
  signed int v12; // [sp+1Ch] [bp-30h]@5
  __int64 v13; // [sp+20h] [bp-2Ch]@4
  __int64 v14; // [sp+28h] [bp-24h]@14

  v2 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 < 0 || (v3 = *(_DWORD *)(a1 + 4), (unsigned int)v3 > 0x3B9AC9FF) )
  {
    *_errno() = 22;
    result = -1;
  }
  else
  {
    if ( a2 )
    {
      GetSystemTimeAsFileTime((LPFILETIME)&v13);
      v2 = *(_DWORD *)a1;
      v3 = *(_DWORD *)(a1 + 4);
    }
    v12 = v3 / 1000000 + 1000 * v2;
    HIDWORD(v4) = v3 / 1000000 + 1000 * v2;
    LODWORD(v4) = v12 >> 31;
    if ( !v12 )
      goto LABEL_22;
    do
    {
      v5 = __PAIR__(v4, HIDWORD(v4));
      if ( __PAIR__((unsigned int)v4, HIDWORD(v4)) > 0xFFFFFFFE )
        v5 = 4294967294i64;
      LODWORD(v4) = (__PAIR__(v4, HIDWORD(v4)) - v5) >> 32;
      HIDWORD(v4) -= v5;
      v6 = sub_6F8B4EA0(v5);
    }
    while ( v4 && !v6 );
    if ( v6 )
    {
      if ( a2 )
      {
        GetSystemTimeAsFileTime((LPFILETIME)&v14);
        LODWORD(v8) = sub_6F8A1530(v4, v14 - v13, 0x2710u, 0);
        if ( HIDWORD(v8) >= (unsigned int)(((unsigned int)v8 < v12) + ((unsigned __int64)v12 >> 32)) )
        {
          v11 = 0;
          v10 = 0;
        }
        else
        {
          v9 = v12 - v8;
          v10 = sub_6F8A1530(v12 - v8, v9, 0x3E8u, 0);
          v11 = 1000000 * sub_6F8A1630(SHIDWORD(v9), v9, 1000i64);
        }
        *(_DWORD *)a2 = v10;
        *(_DWORD *)(a2 + 4) = v11;
      }
      *_errno() = 4;
      result = -1;
    }
    else
    {
LABEL_22:
      result = 0;
    }
  }
  return result;
}
