void __cdecl sub_6F839A69(int a1)
{
  char v1; // [sp+1Ch] [bp-4Ch]@5
  int v2; // [sp+5Ch] [bp-Ch]@2

  if ( a1 )
  {
    v2 = *(_DWORD *)(a1 + 68);
    if ( v2 && *(_DWORD *)(a1 + 72) && a1 != v2 && !setjmp3((int)&v1, 0) )
    {
      *(_DWORD *)(a1 + 68) = &v1;
      *(_DWORD *)(a1 + 72) = 0;
      *(_DWORD *)(a1 + 64) = longjmp;
      sub_6F83B5A7(a1, v2);
    }
    *(_DWORD *)(a1 + 72) = 0;
    *(_DWORD *)(a1 + 68) = 0;
    *(_DWORD *)(a1 + 64) = 0;
  }
}
