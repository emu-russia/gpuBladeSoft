int __thiscall sub_6F93C440(int this, char a2)
{
  int v2; // ebx@1
  size_t v3; // esi@1
  int v4; // eax@1
  unsigned int v5; // edi@1
  unsigned int v6; // edx@2
  int result; // eax@5

  v2 = this;
  v3 = *(_DWORD *)(this + 4);
  v4 = *(_DWORD *)this;
  v5 = v3 + 1;
  if ( *(_DWORD *)this == this + 8 )
    v6 = 15;
  else
    v6 = *(_DWORD *)(this + 8);
  if ( v5 > v6 )
  {
    sub_6F93C2B0(this, v3, 0, 0, 1u);
    v4 = *(_DWORD *)v2;
  }
  *(_BYTE *)(v4 + v3) = a2;
  result = *(_DWORD *)v2;
  *(_DWORD *)(v2 + 4) = v5;
  *(_BYTE *)(result + v3 + 1) = 0;
  return result;
}
