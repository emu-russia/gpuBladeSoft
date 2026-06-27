char *__thiscall sub_6F8C66D0(char *this, int a2)
{
  char *v2; // ebx@1
  const wchar_t *v3; // esi@1
  int v4; // eax@1
  int v6; // [sp+8h] [bp-14h]@0

  v2 = this;
  v3 = *(const wchar_t **)(*(_DWORD *)(a2 + 8) + 40);
  *(_DWORD *)this = this + 8;
  v4 = -2;
  if ( v3 )
    v4 = (int)&v3[wcslen(v3)];
  LOBYTE(v6) = 0;
  sub_6F93D440((void **)v2, v3, v4, v6);
  return v2;
}
