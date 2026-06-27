_BYTE *__thiscall sub_6F8C32B0(void *this, _BYTE *a2, _BYTE *a3)
{
  _BYTE *v3; // ebx@1
  void *v4; // esi@2
  int (__thiscall *v5)(int, int); // eax@4
  int v7; // [sp+0h] [bp-1Ch]@4

  v3 = a2;
  if ( a2 < a3 )
  {
    v4 = this;
    do
    {
      while ( 1 )
      {
        v5 = *(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 16);
        v7 = *v3;
        if ( v5 != sub_6F8C3310 )
          break;
        *(++v3 - 1) = sub_6F8C3310((int)v4, v7);
        if ( a3 == v3 )
          return a3;
      }
      *(++v3 - 1) = v5(v4, v7);
    }
    while ( a3 != v3 );
  }
  return a3;
}
