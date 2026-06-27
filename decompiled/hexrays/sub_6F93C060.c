int __thiscall sub_6F93C060(int this, int a2, int a3)
{
  int v3; // ebx@1
  int v4; // eax@1
  int v5; // ecx@1
  const void *v6; // edx@3
  void *v7; // ecx@3
  int result; // eax@5

  v3 = this;
  v4 = *(_DWORD *)(this + 4);
  v5 = *(_DWORD *)this;
  if ( v4 != a2 + a3 && a3 )
  {
    v6 = (const void *)(v5 + a2 + a3);
    v7 = (void *)(a2 + v5);
    if ( v4 - (a2 + a3) == 1 )
    {
      *(_BYTE *)v7 = *(_BYTE *)v6;
      v5 = *(_DWORD *)v3;
      v4 = *(_DWORD *)(v3 + 4);
    }
    else
    {
      memmove(v7, v6, v4 - (a2 + a3));
      v5 = *(_DWORD *)v3;
      v4 = *(_DWORD *)(v3 + 4);
    }
  }
  result = v4 - a3;
  *(_DWORD *)(v3 + 4) = result;
  *(_BYTE *)(v5 + result) = 0;
  return result;
}
