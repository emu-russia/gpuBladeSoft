int __thiscall sub_6F918820(int this)
{
  int v1; // edi@1
  FILE **v2; // ebp@2
  int v3; // ebx@2
  int v4; // ecx@3
  int v5; // edi@3
  int v6; // esi@3
  signed int v8; // edi@7

  v1 = *(_DWORD *)(this + 44);
  if ( !(v1 & 8) )
    return -1;
  v2 = (FILE **)(this + 36);
  v3 = this;
  if ( !sub_6F8BF810((void *)(this + 36)) )
    return -1;
  v4 = *(_DWORD *)(v3 + 88);
  v5 = v1 & 4;
  v6 = (*(_DWORD *)(v3 + 12) - *(_DWORD *)(v3 + 8)) >> 1;
  if ( !v4 )
    sub_6F95AA30();
  if ( (*(int (**)(void))(*(_DWORD *)v4 + 20))() < 0 || !v5 )
    return v6;
  v8 = sub_6F90E800(v2);
  return v8 / (*(int (**)(void))(**(_DWORD **)(v3 + 88) + 32))() + v6;
}
