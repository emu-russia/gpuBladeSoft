char *__thiscall sub_6F8C6060(char *this, int a2)
{
  char *v2; // ebx@1
  const char *v3; // esi@1
  char *v4; // eax@1
  int v6; // [sp+8h] [bp-14h]@0

  v2 = this;
  v3 = *(const char **)(*(_DWORD *)(a2 + 8) + 8);
  *(_DWORD *)this = this + 8;
  v4 = (char *)-1;
  if ( v3 )
    v4 = (char *)&v3[strlen(v3)];
  LOBYTE(v6) = 0;
  sub_6F93A600((int)v2, v3, v4, v6);
  return v2;
}
