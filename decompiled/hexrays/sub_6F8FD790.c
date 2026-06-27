_DWORD *__thiscall sub_6F8FD790(int this, int a2, int a3)
{
  int v3; // esi@1
  _DWORD *v4; // eax@1
  int v5; // edx@1
  _DWORD *v6; // ebx@1
  int v7; // eax@1

  v3 = this;
  v4 = sub_6F8FD810(a3 + *(_DWORD *)this, *(_DWORD *)(this + 4));
  v5 = 0;
  v6 = v4;
  v7 = *(_DWORD *)v3;
  if ( *(_DWORD *)v3 )
  {
    if ( v7 == 1 )
    {
      *((_WORD *)v6 + 6) = *(_WORD *)(v3 + 12);
      v5 = 2;
    }
    else
    {
      memcpy(v6 + 3, (const void *)(v3 + 12), 2 * v7);
      v7 = *(_DWORD *)v3;
      v5 = 2 * *(_DWORD *)v3;
    }
  }
  *v6 = v7;
  v6[2] = 0;
  *(_WORD *)((char *)v6 + v5 + 12) = 0;
  return v6 + 3;
}
