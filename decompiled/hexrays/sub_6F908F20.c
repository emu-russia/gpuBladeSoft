int *__thiscall sub_6F908F20(int *this, int *a2)
{
  int *v2; // esi@1
  _DWORD *v3; // ebx@1
  int v4; // eax@4
  char v6; // [sp+1Fh] [bp-Dh]@7

  v2 = this;
  v3 = (_DWORD *)*a2;
  if ( *this != *a2 )
  {
    if ( *(v3 - 1) < 0 )
      v3 = sub_6F9087C0((int)(v3 - 3), (int)&v6, 0);
    else
      _InterlockedAdd(v3 - 1, 1u);
    v4 = *v2;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*v2 - 4), 0xFFFFFFFF) <= 0 )
    {
      j_free_1((void *)(v4 - 12));
      *v2 = (int)v3;
    }
    else
    {
      *v2 = (int)v3;
    }
  }
  return v2;
}
