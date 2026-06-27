void __thiscall sub_6F8FEB20(int *this, unsigned int a2)
{
  int v2; // edx@1
  unsigned int v3; // eax@1
  unsigned int v4; // esi@2
  int *v5; // ebx@2
  _DWORD *v6; // eax@4
  int v7; // edx@4
  _DWORD *v8; // esi@4
  char v9; // [sp+1Fh] [bp-Dh]@4

  v2 = *this;
  v3 = a2;
  if ( a2 == *(_DWORD *)(*this - 8) )
  {
    if ( *(_DWORD *)(v2 - 4) <= 0 )
      return;
    v2 = *this;
  }
  v4 = *(_DWORD *)(v2 - 12);
  v5 = this;
  if ( a2 < v4 )
    v3 = *(_DWORD *)(v2 - 12);
  v6 = sub_6F8FD790(v2 - 12, (int)&v9, v3 - v4);
  v7 = *v5;
  v8 = v6;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*v5 - 4), 0xFFFFFFFF) <= 0 )
    j_free_1((void *)(v7 - 12));
  *v5 = (int)v8;
}
