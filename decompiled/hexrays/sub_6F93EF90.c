int __thiscall sub_6F93EF90(int this, int a2, int a3)
{
  int v3; // ebx@1
  int v4; // eax@1
  int v5; // ecx@1
  int v6; // ebp@1
  void *v7; // edi@3
  int result; // eax@5

  v3 = this;
  v4 = *(_DWORD *)(this + 4);
  v5 = *(_DWORD *)this;
  v6 = v4 - (a2 + a3);
  if ( v4 != a2 + a3 && a3 )
  {
    v7 = (void *)(v5 + 2 * a2);
    if ( v6 == 1 )
    {
      *(_WORD *)v7 = *(_WORD *)(v5 + 2 * (a2 + a3));
    }
    else
    {
      memmove(v7, (const void *)(v5 + 2 * (a2 + a3)), 2 * v6);
      v5 = *(_DWORD *)v3;
      v4 = *(_DWORD *)(v3 + 4);
    }
  }
  result = v4 - a3;
  *(_DWORD *)(v3 + 4) = result;
  *(_WORD *)(v5 + 2 * result) = 0;
  return result;
}
