_DWORD *__thiscall sub_6F8BBF30(_DWORD *this, int a2, int a3)
{
  _DWORD *v3; // ebx@1
  char *v4; // esi@1
  char *v5; // eax@1
  int v7; // [sp+8h] [bp-14h]@0

  v3 = this;
  v4 = strerror(a3);
  *v3 = v3 + 2;
  v5 = (char *)-1;
  if ( v4 )
    v5 = &v4[strlen(v4)];
  LOBYTE(v7) = 0;
  sub_6F93A600((int)v3, v4, v5, v7);
  return v3;
}
