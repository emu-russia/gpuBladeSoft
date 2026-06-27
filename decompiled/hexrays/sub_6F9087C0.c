_DWORD *__thiscall sub_6F9087C0(int this, int a2, int a3)
{
  int v3; // esi@1
  _DWORD *v4; // ebx@1
  size_t v5; // eax@1

  v3 = this;
  v4 = sub_6F908830(a3 + *(_DWORD *)this, *(_DWORD *)(this + 4));
  v5 = *(_DWORD *)v3;
  if ( *(_DWORD *)v3 )
  {
    if ( v5 == 1 )
    {
      *((_BYTE *)v4 + 12) = *(_BYTE *)(v3 + 12);
      v5 = *(_DWORD *)v3;
    }
    else
    {
      memcpy(v4 + 3, (const void *)(v3 + 12), *(_DWORD *)v3);
      v5 = *(_DWORD *)v3;
    }
  }
  *v4 = v5;
  v4[2] = 0;
  *((_BYTE *)v4 + v5 + 12) = 0;
  return v4 + 3;
}
