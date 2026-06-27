int __cdecl sub_6F71EAB0(char a1, char a2, int a3)
{
  int result; // eax@1
  signed int v4; // edx@1
  char v5; // di@1
  char v6; // si@1
  int v7; // ecx@1
  signed int v8; // ebx@1
  int v9; // edi@1
  int v10; // esi@1
  int v11; // ecx@1

  result = a3;
  v4 = *(_DWORD *)a3;
  v5 = *(_DWORD *)(a3 + 4);
  v6 = *(_DWORD *)(a3 + 8);
  v7 = *(_DWORD *)(a3 + 8) >> 3;
  *(_DWORD *)(a3 + 4) >>= 3;
  *(_DWORD *)(a3 + 8) = v7;
  v8 = v4 >> 3;
  v9 = v5 & 7;
  v10 = v6 & 7;
  v11 = dword_6FB4EC40[(a1 & 3) + 4 * (a2 & 3)];
  if ( v11 < (v4 & 7) )
    ++v8;
  *(_DWORD *)a3 = v8;
  if ( v11 < v9 )
    ++*(_DWORD *)(a3 + 4);
  if ( v11 < v10 )
    ++*(_DWORD *)(a3 + 8);
  *(_DWORD *)a3 *= 8;
  *(_DWORD *)(a3 + 4) *= 8;
  *(_DWORD *)(a3 + 8) *= 8;
  return result;
}
