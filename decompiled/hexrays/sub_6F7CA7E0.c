int __cdecl sub_6F7CA7E0(int a1, int a2)
{
  int result; // eax@1
  unsigned int v3; // edx@1
  unsigned int v4; // edi@1
  signed int v5; // ebx@3
  char *v6; // eax@3
  char *v7; // ecx@3
  int v8; // edx@4
  int v9; // [sp+2Ch] [bp-10h]@1

  result = 0;
  v9 = 0;
  v3 = a2 + *(_DWORD *)(a1 + 48) + *(_DWORD *)(a1 + 84);
  v4 = *(_DWORD *)(a1 + 12);
  if ( v3 > v4 )
  {
    v5 = (v3 + 1) & 0xFFFFFFFE;
    v6 = sub_6F773B30(*(_DWORD *)a1, 32, v4, v5, *(char **)(a1 + 52), &v9);
    v7 = v6;
    *(_DWORD *)(a1 + 52) = v6;
    result = v9;
    if ( !v9 )
    {
      v8 = *(_DWORD *)(a1 + 48);
      *(_DWORD *)(a1 + 12) = v5;
      *(_DWORD *)(a1 + 88) = &v7[32 * v8];
    }
  }
  return result;
}
