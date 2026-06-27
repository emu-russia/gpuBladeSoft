int __thiscall sub_6F93F020(int this, const void *a2, int a3)
{
  int v3; // ebx@1
  int v4; // edi@1
  int v5; // ecx@1
  int v6; // edx@1
  unsigned int v7; // esi@1
  unsigned int v8; // edi@2
  void *v9; // ecx@5

  v3 = this;
  v4 = this + 8;
  v5 = *(_DWORD *)(this + 4);
  v6 = *(_DWORD *)v3;
  v7 = v5 + a3;
  if ( *(_DWORD *)v3 == v4 )
    v8 = 7;
  else
    v8 = *(_DWORD *)(v3 + 8);
  if ( v7 > v8 )
  {
    sub_6F93F200(v3, v5, 0, a2, a3);
    v6 = *(_DWORD *)v3;
  }
  else if ( a3 )
  {
    v9 = (void *)(v6 + 2 * v5);
    if ( a3 == 1 )
    {
      *(_WORD *)v9 = *(_WORD *)a2;
    }
    else
    {
      memcpy(v9, a2, 2 * a3);
      v6 = *(_DWORD *)v3;
    }
  }
  *(_DWORD *)(v3 + 4) = v7;
  *(_WORD *)(v6 + 2 * v7) = 0;
  return v3;
}
