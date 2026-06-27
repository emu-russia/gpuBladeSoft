__int16 __cdecl sub_6F79A980(int a1, int a2, int a3)
{
  signed int v3; // eax@1
  signed int v4; // edi@1
  int v5; // eax@1
  signed int v6; // ebx@3

  LOWORD(v3) = sub_6F7C9390(*(_DWORD *)a3);
  v4 = v3;
  LOWORD(v5) = sub_6F7C9390(*(_DWORD *)(a3 + 4));
  if ( !*(_DWORD *)(a1 + 4) )
  {
    v6 = 1;
    if ( !a2 )
      v6 = 0;
    v5 = sub_6F79A730((unsigned int *)(a1 + 36 * v6 + 16), v4 >> 16, v5 >> 16, *(_DWORD *)a1);
    if ( v5 )
      *(_DWORD *)(a1 + 4) = v5;
  }
  return v5;
}
