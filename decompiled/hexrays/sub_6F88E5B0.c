void *__usercall sub_6F88E5B0@<eax>(int a1@<eax>)
{
  int v1; // ebx@1
  int v2; // esi@1
  void *result; // eax@1
  size_t v4; // edi@1
  bool v5; // zf@5

  v1 = a1;
  v2 = *(_DWORD *)(a1 + 28);
  sub_6F8922F0(*(_DWORD *)(a1 + 28));
  result = *(void **)(v2 + 20);
  v4 = *(_DWORD *)(v1 + 16);
  if ( v4 > (unsigned int)result )
    v4 = *(_DWORD *)(v2 + 20);
  if ( v4 )
  {
    result = memcpy(*(void **)(v1 + 12), *(const void **)(v2 + 16), v4);
    *(_DWORD *)(v1 + 12) += v4;
    *(_DWORD *)(v2 + 16) += v4;
    *(_DWORD *)(v1 + 20) += v4;
    *(_DWORD *)(v1 + 16) -= v4;
    v5 = *(_DWORD *)(v2 + 20) == v4;
    *(_DWORD *)(v2 + 20) -= v4;
    if ( v5 )
    {
      result = *(void **)(v2 + 8);
      *(_DWORD *)(v2 + 16) = result;
    }
  }
  return result;
}
