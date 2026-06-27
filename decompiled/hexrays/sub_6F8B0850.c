_DWORD *__cdecl sub_6F8B0850(int a1, signed int a2, signed int a3)
{
  int v3; // ecx@1
  int v4; // ebp@1
  __int64 v5; // rdi@1
  unsigned int v6; // eax@2
  int v7; // ebx@2
  unsigned __int64 v8; // rax@2
  unsigned __int64 v9; // rax@2
  int *v11; // eax@7
  int v12; // [sp+1Ch] [bp-20h]@1

  v3 = 0;
  HIDWORD(v5) = a3;
  v4 = a1;
  LODWORD(v5) = a3 >> 31;
  v12 = *(_DWORD *)(a1 + 16);
  do
  {
    v6 = *(_DWORD *)(a1 + 4 * v3 + 20);
    v7 = v6 * (a2 >> 31);
    v8 = (unsigned int)a2 * (unsigned __int64)v6;
    HIDWORD(v8) += v7;
    v9 = __PAIR__(v5, HIDWORD(v5)) + v8;
    *(_DWORD *)(a1 + 4 * v3 + 20) = v9;
    LODWORD(v5) = 0;
    ++v3;
    HIDWORD(v5) = HIDWORD(v9);
  }
  while ( v12 > v3 );
  if ( v5 )
  {
    if ( *(_DWORD *)(a1 + 8) <= v12 )
    {
      v11 = sub_6F8B0700(*(_DWORD *)(a1 + 4) + 1);
      v4 = (int)v11;
      if ( v11 )
      {
        memcpy(v11 + 3, (const void *)(a1 + 12), 4 * *(_DWORD *)(a1 + 16) + 8);
        sub_6F8B07F0((void *)a1);
        *(_DWORD *)(v4 + 4 * v12 + 20) = HIDWORD(v5);
        *(_DWORD *)(v4 + 16) = v12 + 1;
      }
    }
    else
    {
      *(_DWORD *)(a1 + 4 * v12 + 20) = HIDWORD(v9);
      *(_DWORD *)(a1 + 16) = v12 + 1;
    }
  }
  return (_DWORD *)v4;
}
