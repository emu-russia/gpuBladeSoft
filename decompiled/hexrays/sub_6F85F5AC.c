int __cdecl sub_6F85F5AC(int a1, unsigned int a2, int a3, int a4, char a5)
{
  int v5; // eax@1
  int v6; // edx@2
  int v7; // esi@5
  int v8; // ecx@7
  int result; // eax@9
  int v10; // eax@4

  v5 = *(_DWORD *)(a1 + 20);
  if ( v5 != 100 )
  {
    v6 = *(_DWORD *)a1;
    *(_DWORD *)(v6 + 20) = 21;
    *(_DWORD *)(v6 + 24) = v5;
    (**(void (__cdecl ***)(_DWORD))a1)(a1);
  }
  if ( a2 > 3 )
  {
    v10 = *(_DWORD *)a1;
    *(_DWORD *)(v10 + 20) = 32;
    *(_DWORD *)(v10 + 24) = a2;
    (**(void (__cdecl ***)(_DWORD))a1)(a1);
  }
  v7 = *(_DWORD *)(a1 + 4 * (a2 + 20) + 8);
  if ( !v7 )
  {
    v7 = sub_6F85F458(a1);
    *(_DWORD *)(a1 + 4 * (a2 + 20) + 8) = v7;
  }
  v8 = 0;
  do
  {
    result = (*(_DWORD *)(a3 + 4 * v8) * a4 + 50) / 100;
    if ( result > 0 )
    {
      if ( result > 0x7FFF )
        result = 0x7FFF;
    }
    else
    {
      result = 1;
    }
    if ( a5 && result > 255 )
      result = 255;
    *(_WORD *)(v7 + 2 * v8++) = result;
  }
  while ( v8 != 64 );
  *(_BYTE *)(v7 + 128) = 0;
  return result;
}
