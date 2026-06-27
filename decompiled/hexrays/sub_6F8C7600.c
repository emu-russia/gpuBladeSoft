int __thiscall sub_6F8C7600(int this, int a2)
{
  size_t v2; // esi@1
  size_t v3; // edx@1
  size_t v4; // ebx@1
  int result; // eax@4

  v2 = *(_DWORD *)(this + 4);
  v3 = v2;
  v4 = *(_DWORD *)(a2 + 4);
  if ( v4 <= v2 )
    v3 = *(_DWORD *)(a2 + 4);
  if ( !v3 || (result = memcmp(*(const void **)this, *(const void **)a2, v3)) == 0 )
    result = v2 - v4;
  return result;
}
