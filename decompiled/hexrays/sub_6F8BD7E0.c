int __thiscall sub_6F8BD7E0(void *this, const char *a2)
{
  const void *v2; // edi@1
  size_t v3; // esi@1
  size_t v4; // eax@1
  size_t v5; // ebx@1
  bool v6; // cf@1
  bool v7; // zf@1
  size_t v8; // eax@1
  int result; // eax@4

  v2 = *(const void **)this;
  v3 = *(_DWORD *)(*(_DWORD *)this - 12);
  v4 = strlen(a2);
  v5 = v4;
  v6 = v4 < v3;
  v7 = v4 == v3;
  v8 = v3;
  if ( v6 || v7 )
    v8 = v5;
  if ( !v8 || (result = memcmp(v2, a2, v8)) == 0 )
    result = v3 - v5;
  return result;
}
