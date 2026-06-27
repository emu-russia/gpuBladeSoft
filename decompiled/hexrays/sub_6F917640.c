void __thiscall sub_6F917640(int this)
{
  int v1; // ebx@1

  v1 = this;
  if ( *(_BYTE *)(this + 68) )
  {
    if ( *(_DWORD *)(this + 60) )
      j_j_free_1(*(void **)(this + 60));
    *(_DWORD *)(v1 + 60) = 0;
    *(_BYTE *)(v1 + 68) = 0;
  }
  if ( *(_DWORD *)(v1 + 92) )
    j_j_free_1(*(void **)(v1 + 92));
  *(_DWORD *)(v1 + 92) = 0;
  *(_DWORD *)(v1 + 96) = 0;
  *(_DWORD *)(v1 + 100) = 0;
  *(_DWORD *)(v1 + 104) = 0;
}
